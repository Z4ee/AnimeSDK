#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43B182500A10FC7B;
class Class_1_A59B7F9F9FB23BBE;
class Class_1_B18A39CC32B5DD22;
namespace RPG::Client { class BattleElationPointDetailItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9198700)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDEFAULTSKILLDATA_OFFSET UNITYSDK_OFFSET(0x9198DA0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDETAILITEMSDATA_OFFSET UNITYSDK_OFFSET(0x9198AD0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETELATIONTIMESKILLDATA_OFFSET UNITYSDK_OFFSET(0x9198890)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_POINTNUM_OFFSET UNITYSDK_OFFSET(0x9199720)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9198880)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETAVATARDEFAULTHEADICON_OFFSET UNITYSDK_OFFSET(0x91991B0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9198F00)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILBATTLEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x9198FC0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILSKILLDATA_OFFSET UNITYSDK_OFFSET(0x9198CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationPointDetailData_TypeDefinitionIndex = 59079;

	class BattleElationPointDetailData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DEFAULT_START_ELATION_TIME_SKILL_ID = 0x6AD025; // 0x0
		// static const ::System::UInt32 _DEFAULT_ELATION_SKILL_ID = 0x6AD027; // 0x0
		::Class_1_B18A39CC32B5DD22* _ElationPreviewCharacterData; // 0x10
		::Class_1_43B182500A10FC7B* _ElationPointManager; // 0x18

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

		::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>* _GetDetailSkillData(::Class_1_A59B7F9F9FB23BBE* skillData)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>*(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILSKILLDATA_OFFSET))(this, skillData);
		}

		::RPG::Client::BattleElationPointDetailItemData* _GetDetailAvatarData(::Class_1_A59B7F9F9FB23BBE* previewData)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILAVATARDATA_OFFSET))(this, previewData);
		}

		::System::String* _GetAvatarDefaultHeadIcon(::RPG::GameCore::GameEntity* avatar)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETAVATARDEFAULTHEADICON_OFFSET))(this, avatar);
		}

		::RPG::Client::BattleElationPointDetailItemData* _GetDetailBattleEventData(::Class_1_A59B7F9F9FB23BBE* previewData)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILBATTLEEVENTDATA_OFFSET))(this, previewData);
		}

		::System::Int32 get_PointNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_POINTNUM_OFFSET))(this);
		}
	};
}
