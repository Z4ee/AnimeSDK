#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_1637DAB574EB8313_METHOD_1_94E3BB2C2013B7D0_OFFSET UNITYSDK_OFFSET(0x13847280)
#define CLASS_1_1637DAB574EB8313_METHOD_1_A8C4EB3B217A181D_OFFSET UNITYSDK_OFFSET(0x138476F0)
#define CLASS_1_1637DAB574EB8313__CTOR_OFFSET UNITYSDK_OFFSET(0x138479F0)

inline static constexpr unsigned int Class_1_1637DAB574EB8313_TypeDefinitionIndex = 71901;

class Class_1_1637DAB574EB8313 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1637DAB574EB8313__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_94E3BB2C2013B7D0(::Class_0_16E4307DCC419505_260* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1637DAB574EB8313_METHOD_1_94E3BB2C2013B7D0_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::PixAir::PixAirPlaneType Method_1_A8C4EB3B217A181D(::Class_0_16E4307DCC419505_260* a1)
	{
		return ((::RPG::Client::LittleGame::PixAir::PixAirPlaneType(*)(::PVOID, ::Class_0_16E4307DCC419505_260*))((::PBYTE)hIl2Cpp + CLASS_1_1637DAB574EB8313_METHOD_1_A8C4EB3B217A181D_OFFSET))(this, a1);
	}
};
