#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACESPARKLEINITCONFIG_METHOD_2_AD39F4B109CFAC4E_OFFSET UNITYSDK_OFFSET(0x1D101E00)
#define RPG_GAMECORE_CAKERACESPARKLEINITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1046C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceSparkleInitConfig_TypeDefinitionIndex = 18211;

	class CakeRaceSparkleInitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GridX; // 0x10
		::System::UInt32 GridZ; // 0x14
		::System::Int32 Y; // 0x18
		::Il2CppArray<::RPG::GameCore::CakeRaceCellType>* ForbiddenAppearCell; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESPARKLEINITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AD39F4B109CFAC4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceSparkleInitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceSparkleInitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESPARKLEINITCONFIG_METHOD_2_AD39F4B109CFAC4E_OFFSET))(a1, a2);
		}
	};
}
