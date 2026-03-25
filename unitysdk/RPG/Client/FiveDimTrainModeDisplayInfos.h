#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0x96F6ED0)
#define RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_GET_DISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x96F6F40)
#define RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_GET_ENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x96F6F80)
#define RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_GET_ENERGY_OFFSET UNITYSDK_OFFSET(0x96F6F60)
#define RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_GET_TRAINSPEED_OFFSET UNITYSDK_OFFSET(0x96F6F20)
#define RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_SET_DISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x96F6F50)
#define RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_SET_ENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x96F6F90)
#define RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_SET_ENERGY_OFFSET UNITYSDK_OFFSET(0x96F6F70)
#define RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_SET_TRAINSPEED_OFFSET UNITYSDK_OFFSET(0x96F6F30)
#define RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x96F6F10)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimTrainModeDisplayInfos_TypeDefinitionIndex = 52143;

	class FiveDimTrainModeDisplayInfos : public ::System::Object
	{
	public:
		::System::Single _TrainSpeed_k__BackingField; // 0x10
		::System::Single _DistanceRatio_k__BackingField; // 0x14
		::System::Single _Energy_k__BackingField; // 0x18
		::System::Single _EnergyRatio_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FiveDimTrainModeDisplayInfos* Create()
		{
			return ((::RPG::Client::FiveDimTrainModeDisplayInfos*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_CREATE_OFFSET))();
		}

		::System::Single get_TrainSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_GET_TRAINSPEED_OFFSET))(this);
		}

		::System::Void set_TrainSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_SET_TRAINSPEED_OFFSET))(this, value);
		}

		::System::Single get_DistanceRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_GET_DISTANCERATIO_OFFSET))(this);
		}

		::System::Void set_DistanceRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_SET_DISTANCERATIO_OFFSET))(this, value);
		}

		::System::Single get_Energy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_GET_ENERGY_OFFSET))(this);
		}

		::System::Void set_Energy(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_SET_ENERGY_OFFSET))(this, value);
		}

		::System::Single get_EnergyRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_GET_ENERGYRATIO_OFFSET))(this);
		}

		::System::Void set_EnergyRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMTRAINMODEDISPLAYINFOS_SET_ENERGYRATIO_OFFSET))(this, value);
		}
	};
}
