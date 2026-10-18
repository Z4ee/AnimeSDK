#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::GameCore { class ActivityResidentPanelRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_COLLECTREQUIREDMISSION_OFFSET UNITYSDK_OFFSET(0xC5783B0)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_DISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0xC57A470)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_DISPLAYITEMMANUALSORT_OFFSET UNITYSDK_OFFSET(0xC57A5D0)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_EXPECTEDPLAYINGHOURS_OFFSET UNITYSDK_OFFSET(0xC57BE30)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_FINISHCONDITIONS_OFFSET UNITYSDK_OFFSET(0xC57E010)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_GAMEPLAYINTROGUIDEVIDEOID_OFFSET UNITYSDK_OFFSET(0xC57C070)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_GAMEPLAYINTROIMGPATH_OFFSET UNITYSDK_OFFSET(0xC57C150)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_INTRODESC_OFFSET UNITYSDK_OFFSET(0xC57A300)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_INTROID_OFFSET UNITYSDK_OFFSET(0xC57E060)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_PANELDESC_OFFSET UNITYSDK_OFFSET(0xC57A140)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_RESIDENTPANELICON_OFFSET UNITYSDK_OFFSET(0xC57B6B0)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0xC579FB0)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC577F30)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xC576A90)
#define RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC57E000)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPanelResidentExtraData_TypeDefinitionIndex = 61698;

	class ActivityPanelResidentExtraData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityResidentPanelRow* _Row; // 0x10
		::RPG::Client::ConditionChecker* _FinishConditionChecker; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityPanelResidentExtraData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityPanelResidentExtraData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_TRYCREATE_OFFSET))(a1);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Void CollectRequiredMission(::System::Collections::Generic::HashSet_1<::System::UInt32>*& a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_COLLECTREQUIREDMISSION_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_SORTWEIGHT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_FinishConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_FINISHCONDITIONS_OFFSET))(this);
		}

		::RPG::Client::TextID get_PanelDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_PANELDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_IntroDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_INTRODESC_OFFSET))(this);
		}

		::System::String* get_ResidentPanelIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_RESIDENTPANELICON_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_ExpectedPlayingHours()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_EXPECTEDPLAYINGHOURS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_DisplayItemList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_DISPLAYITEMLIST_OFFSET))(this);
		}

		::System::Boolean get_DisplayItemManualSort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_DISPLAYITEMMANUALSORT_OFFSET))(this);
		}

		::System::UInt32 get_GameplayIntroGuideVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_GAMEPLAYINTROGUIDEVIDEOID_OFFSET))(this);
		}

		::System::String* get_GameplayIntroImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_GAMEPLAYINTROIMGPATH_OFFSET))(this);
		}

		static ::System::UInt32 get_IntroID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELRESIDENTEXTRADATA_GET_INTROID_OFFSET))();
		}
	};
}
