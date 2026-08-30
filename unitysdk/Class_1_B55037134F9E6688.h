#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatTaskState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B55037134F9E6688_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1623EA00)
#define CLASS_1_B55037134F9E6688_METHOD_1_414285693D2B3D4E_OFFSET UNITYSDK_OFFSET(0x1623EA60)
#define CLASS_1_B55037134F9E6688_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1623E9B0)
#define CLASS_1_B55037134F9E6688__CTOR_OFFSET UNITYSDK_OFFSET(0x1623E9A0)

inline static constexpr unsigned int Class_1_B55037134F9E6688_TypeDefinitionIndex = 35649;

class Class_1_B55037134F9E6688 : public ::System::Object
{
public:
	::RPG::LittleGameShare::DiceCombatCore::DiceCombatTaskState DLNIGFGLPLJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55037134F9E6688__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55037134F9E6688_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B55037134F9E6688_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::RPG::LittleGameShare::DiceCombatCore::DiceCombatTaskState Method_1_414285693D2B3D4E()
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::DiceCombatTaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55037134F9E6688_METHOD_1_414285693D2B3D4E_OFFSET))(this);
	}
};
