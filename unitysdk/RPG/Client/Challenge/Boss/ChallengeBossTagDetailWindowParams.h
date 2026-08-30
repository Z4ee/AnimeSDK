#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterGuideData; }
namespace RPG::GameCore { class MonsterGuideTagConfigRow; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_EXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xC9EEFF0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_GUIDEDATA_OFFSET UNITYSDK_OFFSET(0xC9EEF30)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_ISSINGLELINE_OFFSET UNITYSDK_OFFSET(0xC9EEFB0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_NODEPOPUP_OFFSET UNITYSDK_OFFSET(0xC9EEF70)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_NODETAGLIST_OFFSET UNITYSDK_OFFSET(0xC9EEF90)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_SELECTEDTAG_OFFSET UNITYSDK_OFFSET(0xC9EEF50)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_GET_SHOWFIRSTTAGLINE_OFFSET UNITYSDK_OFFSET(0xC9EEFD0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_EXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xC9EF000)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_GUIDEDATA_OFFSET UNITYSDK_OFFSET(0xC9EEF40)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_ISSINGLELINE_OFFSET UNITYSDK_OFFSET(0xC9EEFC0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_NODEPOPUP_OFFSET UNITYSDK_OFFSET(0xC9EEF80)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_NODETAGLIST_OFFSET UNITYSDK_OFFSET(0xC9EEFA0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_SELECTEDTAG_OFFSET UNITYSDK_OFFSET(0xC9EEF60)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS_SET_SHOWFIRSTTAGLINE_OFFSET UNITYSDK_OFFSET(0xC9EEFE0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSTAGDETAILWINDOWPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EEEC0)

namespace RPG::Client::Challenge::Boss
{
	inline static constexpr unsigned int ChallengeBossTagDetailWindowParams_TypeDefinitionIndex = 80316;

	class ChallengeBossTagDetailWindowParams : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* _NodePopup_k__BackingField; // 0x10
		::System::Action_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* _ExitCallback_k__BackingField; // 0x18
		::UnityEngine::RectTransform* _NodeTagList_k__BackingField; // 0x20
		::RPG::Client::MonsterGuideData* _GuideData_k__BackingField; // 0x28
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
