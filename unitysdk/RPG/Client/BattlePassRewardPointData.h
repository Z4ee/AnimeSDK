#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_9.h"
#include "unitysdk/RPG/Client/BPRewardStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattlePassLevelRewardRow; }

#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATEDATAFROMITEMUSE_OFFSET UNITYSDK_OFFSET(0x91CB0B0)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATEFORPLAYERRETURNLOGINREWARD_OFFSET UNITYSDK_OFFSET(0x91CB2D0)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x91C52E0)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x91CAF70)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISFREE_OFFSET UNITYSDK_OFFSET(0x91CB090)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISOPTION_OFFSET UNITYSDK_OFFSET(0x91C4780)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISSIMPLE_OFFSET UNITYSDK_OFFSET(0x91CB030)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_TRYGETREWARDID_OFFSET UNITYSDK_OFFSET(0x91C4A00)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x91C4F30)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x91CB370)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CHECKITEMVALIDITY_OFFSET UNITYSDK_OFFSET(0x91CB160)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91CB0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassRewardPointData_TypeDefinitionIndex = 51047;

	class BattlePassRewardPointData : public ::System::Object
	{
	public:
		static ::RPG::Client::BattlePassRewardPointData** StaticGet_None()
		{
			return (::RPG::Client::BattlePassRewardPointData**)Il2CppClass::FromTypeDefinitionIndex(BattlePassRewardPointData_TypeDefinitionIndex)->GetStaticField(0x40BF0);
		}
		::RPG::Client::BPRewardStatus Status; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 OptionItemID; // 0x18
		::Enum_3_4608E37A1B3D374A_9 Type; // 0x1C
		::System::UInt32 RewardID; // 0x20

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

		::System::Boolean TryGetRewardID(::System::UInt32& rewardID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_TRYGETREWARDID_OFFSET))(this, rewardID);
		}

		::System::Void UpdateStatus(::System::Boolean isLocked, ::System::Boolean isTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_UPDATESTATUS_OFFSET))(this, isLocked, isTaken);
		}

		static ::RPG::Client::BattlePassRewardPointData* Create(::System::UInt32 level, ::Enum_3_4608E37A1B3D374A_9 type, ::RPG::GameCore::BattlePassLevelRewardRow* row)
		{
			return ((::RPG::Client::BattlePassRewardPointData*(*)(::System::UInt32, ::Enum_3_4608E37A1B3D374A_9, ::RPG::GameCore::BattlePassLevelRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATE_OFFSET))(level, type, row);
		}

		static ::RPG::Client::BattlePassRewardPointData* CreateDataFromItemUse(::System::UInt32 itemUseID)
		{
			return ((::RPG::Client::BattlePassRewardPointData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATEDATAFROMITEMUSE_OFFSET))(itemUseID);
		}

		static ::RPG::Client::BattlePassRewardPointData* CreateForPlayerReturnLoginReward(::System::UInt32 itemUseID, ::System::UInt32 signDay)
		{
			return ((::RPG::Client::BattlePassRewardPointData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATEFORPLAYERRETURNLOGINREWARD_OFFSET))(itemUseID, signDay);
		}

		static ::System::Boolean _CheckItemValidity(::System::UInt32 itemUseID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CHECKITEMVALIDITY_OFFSET))(itemUseID);
		}
	};
}
