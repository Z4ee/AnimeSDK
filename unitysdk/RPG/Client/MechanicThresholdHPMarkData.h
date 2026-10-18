#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/RPG/GameCore/ForceKillShowType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD67FD10)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xD67FDF0)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xD67FDB0)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0xD67FE10)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0xD67FE30)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xD67FE00)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_SET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0xD67FE20)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD67FDA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MechanicThresholdHPMarkData_TypeDefinitionIndex = 71674;

	class MechanicThresholdHPMarkData : public ::System::Object
	{
	public:
		::System::Single _FillAmount_k__BackingField; // 0x10
		::RPG::GameCore::ForceKillMarkType _MarkType_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MechanicThresholdHPMarkData* Create(::RPG::GameCore::ForceKillMarkType a1, ::System::Single a2)
		{
			return ((::RPG::Client::MechanicThresholdHPMarkData*(*)(::RPG::GameCore::ForceKillMarkType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Single get_FillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_FillAmount(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_SET_FILLAMOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::ForceKillMarkType get_MarkType()
		{
			return ((::RPG::GameCore::ForceKillMarkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_MARKTYPE_OFFSET))(this);
		}

		::System::Void set_MarkType(::RPG::GameCore::ForceKillMarkType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ForceKillMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_SET_MARKTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ForceKillShowType get_ShowType()
		{
			return ((::RPG::GameCore::ForceKillShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_SHOWTYPE_OFFSET))(this);
		}
	};
}
