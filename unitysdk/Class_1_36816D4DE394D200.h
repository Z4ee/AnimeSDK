#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_15;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_36816D4DE394D200__CTOR_OFFSET UNITYSDK_OFFSET(0x19525970)

inline static constexpr unsigned int Class_1_36816D4DE394D200_TypeDefinitionIndex = 48077;

class Class_1_36816D4DE394D200 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_15*>* BNCNCFMAMIG; // 0x18
	::System::String* JKMABBEGEAH; // 0x20
	::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x28
	::System::Boolean MOKNCFJICIC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36816D4DE394D200__CTOR_OFFSET))(this);
	}
};
