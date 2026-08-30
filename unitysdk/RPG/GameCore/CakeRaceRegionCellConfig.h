#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEREGIONCELLCONFIG_METHOD_2_9C8159AEF5471D24_OFFSET UNITYSDK_OFFSET(0x1D103D20)
#define RPG_GAMECORE_CAKERACEREGIONCELLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D103F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceRegionCellConfig_TypeDefinitionIndex = 18204;

	class CakeRaceRegionCellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceCellType Type; // 0x10
		::RPG::MVector3 Position; // 0x14
		::Il2CppArray<::System::UInt32>* BlockDirection; // 0x20
		::Il2CppArray<::System::UInt32>* Params; // 0x28
		::System::Boolean Irreplaceable; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCELLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9C8159AEF5471D24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceRegionCellConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceRegionCellConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCELLCONFIG_METHOD_2_9C8159AEF5471D24_OFFSET))(a1, a2);
		}
	};
}
