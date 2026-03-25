#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_15;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_36816D4DE394D200__CTOR_OFFSET UNITYSDK_OFFSET(0xA1A8B70)

inline static constexpr unsigned int Class_1_36816D4DE394D200_TypeDefinitionIndex = 38479;

class Class_1_36816D4DE394D200 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_15*>* Field_1_4; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_2; // 0x18
	::RPG::GameCore::GameEntity* Field_1_3; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::Boolean Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36816D4DE394D200__CTOR_OFFSET))(this);
	}
};
