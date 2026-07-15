#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A59B7F9F9FB23BBE;
class Class_1_B18A39CC32B5DD22;
class Class_1_CDF807379B3F27B3;
namespace RPG::Client { class BattleElationPointDetailItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x17492170)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDEFAULTSKILLDATA_OFFSET UNITYSDK_OFFSET(0x17492990)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDETAILITEMSDATA_OFFSET UNITYSDK_OFFSET(0x17492630)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETELATIONTIMESKILLDATA_OFFSET UNITYSDK_OFFSET(0x174923F0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ISGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0x17493270)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_POINTNUM_OFFSET UNITYSDK_OFFSET(0x174931F0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ISGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0x17493280)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x174923E0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILAVATARDATA_OFFSET UNITYSDK_OFFSET(0x17492AF0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILBATTLEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x17492B90)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILSKILLDATA_OFFSET UNITYSDK_OFFSET(0x17492810)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationPointDetailData_TypeDefinitionIndex = 68871;

	class BattleElationPointDetailData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DEFAULT_START_ELATION_TIME_SKILL_ID = 0x6AD025; // 0x0
		// static const ::System::UInt32 _DEFAULT_ELATION_SKILL_ID = 0x6AD027; // 0x0
		::Class_1_B18A39CC32B5DD22* _ElationPreviewCharacterData; // 0x10
		::Class_1_CDF807379B3F27B3* _ElationPointManager; // 0x18
		::System::Boolean _IsGridFight_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleElationPointDetailData* Create()
		{
			return ((::RPG::Client::BattleElationPointDetailData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CREATE_OFFSET))();
		}

		::RPG::Client::BattleElationPointDetailItemData* GetElationTimeSkillData()
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETELATIONTIMESKILLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>* GetDetailItemsData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDETAILITEMSDATA_OFFSET))(this);
		}

		::RPG::Client::BattleElationPointDetailItemData* GetDefaultSkillData()
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDEFAULTSKILLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>* _GetDetailSkillData(::Class_1_A59B7F9F9FB23BBE* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>*(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILSKILLDATA_OFFSET))(this, a1);
		}

		::RPG::Client::BattleElationPointDetailItemData* _GetDetailAvatarData(::Class_1_A59B7F9F9FB23BBE* a1)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILAVATARDATA_OFFSET))(this, a1);
		}

		::RPG::Client::BattleElationPointDetailItemData* _GetDetailBattleEventData(::Class_1_A59B7F9F9FB23BBE* a1)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILBATTLEEVENTDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_PointNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_POINTNUM_OFFSET))(this);
		}

		::System::Boolean get_IsGridFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ISGRIDFIGHT_OFFSET))(this);
		}

		::System::Void set_IsGridFight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ISGRIDFIGHT_OFFSET))(this, a1);
		}
	};
}
