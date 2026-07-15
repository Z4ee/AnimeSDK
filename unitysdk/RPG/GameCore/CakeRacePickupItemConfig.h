#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceActionBase; }

#define RPG_GAMECORE_CAKERACEPICKUPITEMCONFIG_METHOD_2_DF9660E98932E60C_OFFSET UNITYSDK_OFFSET(0x1B705230)
#define RPG_GAMECORE_CAKERACEPICKUPITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7054A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRacePickupItemConfig_TypeDefinitionIndex = 17688;

	class CakeRacePickupItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRacePickupItemType Type; // 0x10
		::RPG::MVector3 Offset; // 0x14
		::System::UInt32 Radius; // 0x20
		::Il2CppArray<::RPG::GameCore::CakeRaceCellType>* CanPlaceCells; // 0x28
		::System::UInt32 DurationMs; // 0x30
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* PickupActions; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPICKUPITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DF9660E98932E60C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRacePickupItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRacePickupItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPICKUPITEMCONFIG_METHOD_2_DF9660E98932E60C_OFFSET))(a1, a2);
		}
	};
}
