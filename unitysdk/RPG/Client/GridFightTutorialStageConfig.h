#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_4;
namespace RPG::GameCore { class GridFightTutorialStageConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_CANAUTOOPENSHOP_OFFSET UNITYSDK_OFFSET(0x98DFE70)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x98DF700)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x98E0020)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_DIVISIONNAME_OFFSET UNITYSDK_OFFSET(0x98E0040)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENAUTOOPENSHOPNODELIST_OFFSET UNITYSDK_OFFSET(0x98E00E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENBATTLEFAILCHAPTERID_OFFSET UNITYSDK_OFFSET(0x98E00C0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENSELLROLEDICT_OFFSET UNITYSDK_OFFSET(0x98E00D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASBOSSTOASTSHOW_OFFSET UNITYSDK_OFFSET(0x98E00A0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASEQUIPRECOMMENDSHOW_OFFSET UNITYSDK_OFFSET(0x98E0090)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASINITIALSUPPLY_OFFSET UNITYSDK_OFFSET(0x98E0070)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASMONSTERREVEAL_OFFSET UNITYSDK_OFFSET(0x98E0050)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASPORTAL_OFFSET UNITYSDK_OFFSET(0x98E0060)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASROUTESHOW_OFFSET UNITYSDK_OFFSET(0x98E0080)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_REWARDQUEST_OFFSET UNITYSDK_OFFSET(0x98E0030)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_USETRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x98E00B0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_TRYTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x98DFC70)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x98DF9E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x98DF760)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTutorialStageConfig_TypeDefinitionIndex = 53189;

	class GridFightTutorialStageConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTutorialStageConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTutorialStageConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTutorialStageConfig_TypeDefinitionIndex)->GetStaticField(0x16940);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ForbiddenSellRoleDict_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Class_1_3745C69C00F04B7D_4*>* _ForbiddenAutoOpenShopNodeList_k__BackingField; // 0x18
		::RPG::Client::TextID _DivisionName_k__BackingField; // 0x20
		::System::UInt32 _ForbiddenBattleFailChapterID_k__BackingField; // 0x30
		::System::Boolean _HasPortal_k__BackingField; // 0x34
		::System::Boolean _HasInitialSupply_k__BackingField; // 0x35
		::System::Boolean _UseTrialAvatar_k__BackingField; // 0x36
		::System::UInt32 ForbiddenSellRoleBeforeChapterId; // 0x38
		::System::UInt32 _RewardQuest_k__BackingField; // 0x3C
		::System::UInt32 ForbiddenSellRoleBeforeSectionId; // 0x40
		::System::UInt32 _DivisionID_k__BackingField; // 0x44
		::System::Boolean _HasBossToastShow_k__BackingField; // 0x48
		::System::Boolean _HasEquipRecommendShow_k__BackingField; // 0x49
		::System::Boolean _HasRouteShow_k__BackingField; // 0x4A
		::System::Boolean _HasMonsterReveal_k__BackingField; // 0x4B

		::System::Void _ctor(::System::UInt32 divisionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG__CTOR_OFFSET))(this, divisionID);
		}

		::System::Void _ctor_1(::RPG::GameCore::GridFightTutorialStageConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTutorialStageConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG__CTOR_1_OFFSET))(this, row);
		}

		static ::RPG::Client::GridFightTutorialStageConfig* GetConfig(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightTutorialStageConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GETCONFIG_OFFSET))(id);
		}

		::System::Boolean TryTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_TRYTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean CanAutoOpenShop(::System::UInt32 chapterID, ::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_CANAUTOOPENSHOP_OFFSET))(this, chapterID, sectionID);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_DIVISIONID_OFFSET))(this);
		}

		::System::UInt32 get_RewardQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_REWARDQUEST_OFFSET))(this);
		}

		::RPG::Client::TextID get_DivisionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_DIVISIONNAME_OFFSET))(this);
		}

		::System::Boolean get_HasMonsterReveal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASMONSTERREVEAL_OFFSET))(this);
		}

		::System::Boolean get_HasPortal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASPORTAL_OFFSET))(this);
		}

		::System::Boolean get_HasInitialSupply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASINITIALSUPPLY_OFFSET))(this);
		}

		::System::Boolean get_HasRouteShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASROUTESHOW_OFFSET))(this);
		}

		::System::Boolean get_HasEquipRecommendShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASEQUIPRECOMMENDSHOW_OFFSET))(this);
		}

		::System::Boolean get_HasBossToastShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASBOSSTOASTSHOW_OFFSET))(this);
		}

		::System::Boolean get_UseTrialAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_USETRIALAVATAR_OFFSET))(this);
		}

		::System::UInt32 get_ForbiddenBattleFailChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENBATTLEFAILCHAPTERID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ForbiddenSellRoleDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENSELLROLEDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_3745C69C00F04B7D_4*>* get_ForbiddenAutoOpenShopNodeList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3745C69C00F04B7D_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENAUTOOPENSHOPNODELIST_OFFSET))(this);
		}
	};
}
