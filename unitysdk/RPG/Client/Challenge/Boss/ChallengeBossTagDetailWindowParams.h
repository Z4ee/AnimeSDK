#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterGuideData; }
namespace RPG::GameCore { class MonsterGuideTagConfigRow; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_EXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C85EFD0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_GUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1C85EF10)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_ISSINGLELINE_OFFSET UNITYSDK_OFFSET(0x1C85EF90)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_NODEPOPUP_OFFSET UNITYSDK_OFFSET(0x1C85EF50)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_NODETAGLIST_OFFSET UNITYSDK_OFFSET(0x1C85EF70)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_SELECTEDTAG_OFFSET UNITYSDK_OFFSET(0x1C85EF30)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_SHOWFIRSTTAGLINE_OFFSET UNITYSDK_OFFSET(0x1C85EFB0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_EXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C85EFE0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_GUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1C85EF20)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_ISSINGLELINE_OFFSET UNITYSDK_OFFSET(0x1C85EFA0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_NODEPOPUP_OFFSET UNITYSDK_OFFSET(0x1C85EF60)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_NODETAGLIST_OFFSET UNITYSDK_OFFSET(0x1C85EF80)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_SELECTEDTAG_OFFSET UNITYSDK_OFFSET(0x1C85EF40)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_SHOWFIRSTTAGLINE_OFFSET UNITYSDK_OFFSET(0x1C85EFC0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85EEA0)

namespace RPG::Client::Challenge::Boss
{
	inline static constexpr unsigned int ChallengeBossTagDetailWindowParams_TypeDefinitionIndex = 80315;

	class ChallengeBossTagDetailWindowParams : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* _ExitCallback_k__BackingField; // 0x10
		::RPG::Client::MonsterGuideData* _GuideData_k__BackingField; // 0x18
		::UnityEngine::RectTransform* _NodeTagList_k__BackingField; // 0x20
		::UnityEngine::RectTransform* _NodePopup_k__BackingField; // 0x28
		::RPG::GameCore::MonsterGuideTagConfigRow* _SelectedTag_k__BackingField; // 0x30
		::System::Boolean _IsSingleLine_k__BackingField; // 0x38
		::System::Boolean _ShowFirstTagLine_k__BackingField; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS__CTOR_OFFSET))(this);
		}

		::RPG::Client::MonsterGuideData* get_GuideData()
		{
			return ((::RPG::Client::MonsterGuideData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_GUIDEDATA_OFFSET))(this);
		}

		::System::Void set_GuideData(::RPG::Client::MonsterGuideData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterGuideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_GUIDEDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonsterGuideTagConfigRow* get_SelectedTag()
		{
			return ((::RPG::GameCore::MonsterGuideTagConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_SELECTEDTAG_OFFSET))(this);
		}

		::System::Void set_SelectedTag(::RPG::GameCore::MonsterGuideTagConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterGuideTagConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_SELECTEDTAG_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_NodePopup()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_NODEPOPUP_OFFSET))(this);
		}

		::System::Void set_NodePopup(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_NODEPOPUP_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_NodeTagList()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_NODETAGLIST_OFFSET))(this);
		}

		::System::Void set_NodeTagList(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_NODETAGLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSingleLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_ISSINGLELINE_OFFSET))(this);
		}

		::System::Void set_IsSingleLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_ISSINGLELINE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowFirstTagLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_SHOWFIRSTTAGLINE_OFFSET))(this);
		}

		::System::Void set_ShowFirstTagLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_SHOWFIRSTTAGLINE_OFFSET))(this, a1);
		}

		::System::Action_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* get_ExitCallback()
		{
			return ((::System::Action_1<::RPG::GameCore::MonsterGuideTagConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_EXITCALLBACK_OFFSET))(this);
		}

		::System::Void set_ExitCallback(::System::Action_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::MonsterGuideTagConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_EXITCALLBACK_OFFSET))(this, a1);
		}
	};
}
