#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_10.h"
#include "unitysdk/RPG/Client/BPRewardStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattlePassLevelRewardRow; }

#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATEDATAFROMITEMUSE_OFFSET UNITYSDK_OFFSET(0xC84A260)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATEFORPLAYERRETURNLOGINREWARD_OFFSET UNITYSDK_OFFSET(0xC84A4C0)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC84A140)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xC849E70)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISFREE_OFFSET UNITYSDK_OFFSET(0xC849FF0)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISOPTION_OFFSET UNITYSDK_OFFSET(0xC849F90)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISSIMPLE_OFFSET UNITYSDK_OFFSET(0xC849F30)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_TRYGETREWARDID_OFFSET UNITYSDK_OFFSET(0xC84A040)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0xC84A0D0)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC84A560)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CHECKITEMVALIDITY_OFFSET UNITYSDK_OFFSET(0xC84A310)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC84A250)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassRewardPointData_TypeDefinitionIndex = 62896;

	class BattlePassRewardPointData : public ::System::Object
	{
	public:
		static ::RPG::Client::BattlePassRewardPointData** StaticGet_None()
		{
			return (::RPG::Client::BattlePassRewardPointData**)Il2CppClass::FromTypeDefinitionIndex(BattlePassRewardPointData_TypeDefinitionIndex)->GetStaticField(0x60750);
		}
		::System::UInt32 Level; // 0x10
		::System::UInt32 RewardID; // 0x14
		::System::UInt32 OptionItemID; // 0x18
		::Enum_3_4608E37A1B3D374A_10 Type; // 0x1C
		::RPG::Client::BPRewardStatus Status; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsSimple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISSIMPLE_OFFSET))(this);
		}

		::System::Boolean get_IsOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISOPTION_OFFSET))(this);
		}

		::System::Boolean get_IsFree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISFREE_OFFSET))(this);
		}

		::System::Boolean TryGetRewardID(::System::UInt32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_TRYGETREWARDID_OFFSET))(this, a1);
		}

		::System::Void UpdateStatus(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_UPDATESTATUS_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::BattlePassRewardPointData* Create(::System::UInt32 a1, ::Enum_3_4608E37A1B3D374A_10 a2, ::RPG::GameCore::BattlePassLevelRewardRow* a3)
		{
			return ((::RPG::Client::BattlePassRewardPointData*(*)(::System::UInt32, ::Enum_3_4608E37A1B3D374A_10, ::RPG::GameCore::BattlePassLevelRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::BattlePassRewardPointData* CreateDataFromItemUse(::System::UInt32 a1)
		{
			return ((::RPG::Client::BattlePassRewardPointData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATEDATAFROMITEMUSE_OFFSET))(a1);
		}

		static ::RPG::Client::BattlePassRewardPointData* CreateForPlayerReturnLoginReward(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::BattlePassRewardPointData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATEFORPLAYERRETURNLOGINREWARD_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckItemValidity(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CHECKITEMVALIDITY_OFFSET))(a1);
		}
	};
}
