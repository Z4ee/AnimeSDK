#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_8.h"
#include "unitysdk/RPG/Client/BPRewardStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattlePassLevelRewardRow; }

#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATEDATAFROMITEMUSE_OFFSET UNITYSDK_OFFSET(0x9E71D90)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATEFORPLAYERRETURNLOGINREWARD_OFFSET UNITYSDK_OFFSET(0x9E71FB0)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9E6BFD0)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9E71C50)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISFREE_OFFSET UNITYSDK_OFFSET(0x9E71D70)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISOPTION_OFFSET UNITYSDK_OFFSET(0x9E6B470)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_GET_ISSIMPLE_OFFSET UNITYSDK_OFFSET(0x9E71D10)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_TRYGETREWARDID_OFFSET UNITYSDK_OFFSET(0x9E6B6F0)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x9E6BC20)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E72050)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CHECKITEMVALIDITY_OFFSET UNITYSDK_OFFSET(0x9E71E40)
#define RPG_CLIENT_BATTLEPASSREWARDPOINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E71D80)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassRewardPointData_TypeDefinitionIndex = 57930;

	class BattlePassRewardPointData : public ::System::Object
	{
	public:
		static ::RPG::Client::BattlePassRewardPointData** StaticGet_None()
		{
			return (::RPG::Client::BattlePassRewardPointData**)Il2CppClass::FromTypeDefinitionIndex(BattlePassRewardPointData_TypeDefinitionIndex)->GetStaticField(0x3FE50);
		}
		::System::UInt32 Level; // 0x10
		::RPG::Client::BPRewardStatus Status; // 0x14
		::System::UInt32 RewardID; // 0x18
		::System::UInt32 OptionItemID; // 0x1C
		::Enum_3_4608E37A1B3D374A_8 Type; // 0x20

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

		static ::RPG::Client::BattlePassRewardPointData* Create(::System::UInt32 level, ::Enum_3_4608E37A1B3D374A_8 type, ::RPG::GameCore::BattlePassLevelRewardRow* row)
		{
			return ((::RPG::Client::BattlePassRewardPointData*(*)(::System::UInt32, ::Enum_3_4608E37A1B3D374A_8, ::RPG::GameCore::BattlePassLevelRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSREWARDPOINTDATA_CREATE_OFFSET))(level, type, row);
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
