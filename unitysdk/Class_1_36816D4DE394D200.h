#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_14;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_36816D4DE394D200__CTOR_OFFSET UNITYSDK_OFFSET(0xDA356B0)

inline static constexpr unsigned int Class_1_36816D4DE394D200_TypeDefinitionIndex = 47617;

class Class_1_36816D4DE394D200 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_14*>* BNCNCFMAMIG; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x18
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
	::System::String* JKMABBEGEAH; // 0x28
	::System::Boolean MOKNCFJICIC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36816D4DE394D200__CTOR_OFFSET))(this);
	}
};
