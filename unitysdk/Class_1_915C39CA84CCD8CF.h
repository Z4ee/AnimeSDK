#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_915C39CA84CCD8CF__CTOR_OFFSET UNITYSDK_OFFSET(0xC30C790)

inline static constexpr unsigned int Class_1_915C39CA84CCD8CF_TypeDefinitionIndex = 57611;

class Class_1_915C39CA84CCD8CF : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x10
	::Class_3_07C3C4D2990C49EE* HKHPOBNDOPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915C39CA84CCD8CF__CTOR_OFFSET))(this);
	}
};
