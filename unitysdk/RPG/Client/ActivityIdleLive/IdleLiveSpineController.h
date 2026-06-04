#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_9174FDC8EBF15A04;
namespace RPG::Client { class GraphicSpineMultiTrackController; }
namespace RPG::Client { class LocalizedText; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_CANPLAYGROUP_OFFSET UNITYSDK_OFFSET(0xB15D170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xB15BCA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_PLAYACTION_OFFSET UNITYSDK_OFFSET(0xB15C8A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_PLAYBYANIMGROUPID_OFFSET UNITYSDK_OFFSET(0xB15CEC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_PLAYGROUP_OFFSET UNITYSDK_OFFSET(0xB15C9D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_SETTEXTBUBBLE_OFFSET UNITYSDK_OFFSET(0xB15C800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_TRYPLAYIDLEACTIONBYGACHACOUNT_OFFSET UNITYSDK_OFFSET(0xB15D270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__BUILDANIMGROUPINFO_OFFSET UNITYSDK_OFFSET(0xB15BDC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__CANPLAYANIM_OFFSET UNITYSDK_OFFSET(0xB15C920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB15D400)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__HIDEBUBBLEAFTERDELAY_OFFSET UNITYSDK_OFFSET(0xB15D3A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__INITSPINEMESH_OFFSET UNITYSDK_OFFSET(0xB15C350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__INITSPINE_OFFSET UNITYSDK_OFFSET(0xB15C050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__ONSPINEMESHREADY_OFFSET UNITYSDK_OFFSET(0xB15C610)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__SHOWBUBBLETEXT_OFFSET UNITYSDK_OFFSET(0xB15CC60)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveSpineController_TypeDefinitionIndex = 70058;

	class IdleLiveSpineController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single TEXT_BUBBLE_SHOW_TIME; // 0x0
		::RPG::Client::GraphicSpineMultiTrackController* _Controller; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveSpineAnimTriggerType, ::Class_1_9174FDC8EBF15A04*>* _SpineActionGroupDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveSpineAnimTriggerType, ::System::Boolean>* _SpineActionGroupEnableStatusDict; // 0x28
		::System::UInt32 _GachaItemId; // 0x30
		::UnityEngine::RectTransform* _TextBubbleNode; // 0x38
		::RPG::Client::LocalizedText* _TextBubbleText; // 0x40
		::UnityEngine::Coroutine* _HideBubbleCoroutine; // 0x48
		::System::Boolean _IsInited; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void _InitSpine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__INITSPINE_OFFSET))(this);
		}

		::System::Void _InitSpineMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__INITSPINEMESH_OFFSET))(this);
		}

		::System::Void _OnSpineMeshReady(::Spine::Unity::SkeletonGraphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__ONSPINEMESHREADY_OFFSET))(this, a1);
		}

		::System::Void SetTextBubble(::UnityEngine::RectTransform* a1, ::RPG::Client::LocalizedText* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::LocalizedText*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_SETTEXTBUBBLE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayAction(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_PLAYACTION_OFFSET))(this, a1);
		}

		::System::Void PlayGroup(::RPG::GameCore::IdleLiveSpineAnimTriggerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpineAnimTriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_PLAYGROUP_OFFSET))(this, a1);
		}

		::System::Void PlayByAnimGroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_PLAYBYANIMGROUPID_OFFSET))(this, a1);
		}

		::System::Boolean CanPlayGroup(::RPG::GameCore::IdleLiveSpineAnimTriggerType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IdleLiveSpineAnimTriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_CANPLAYGROUP_OFFSET))(this, a1);
		}

		::System::Void TryPlayIdleActionByGachaCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_TRYPLAYIDLEACTIONBYGACHACOUNT_OFFSET))(this);
		}

		::System::Void _ShowBubbleText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__SHOWBUBBLETEXT_OFFSET))(this, a1);
		}

		::System::Void _HideBubbleAfterDelay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__HIDEBUBBLEAFTERDELAY_OFFSET))(this);
		}

		::System::Void _BuildAnimGroupInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__BUILDANIMGROUPINFO_OFFSET))(this);
		}

		::System::Boolean _CanPlayAnim(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__CANPLAYANIM_OFFSET))(this, a1);
		}
	};
}
