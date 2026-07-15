#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_915C39CA84CCD8CF__CTOR_OFFSET UNITYSDK_OFFSET(0x14279F50)

inline static constexpr unsigned int Class_1_915C39CA84CCD8CF_TypeDefinitionIndex = 55041;

class Class_1_915C39CA84CCD8CF : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_0; // 0x10
	::Class_3_07C3C4D2990C49EE* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915C39CA84CCD8CF__CTOR_OFFSET))(this);
	}
};
