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

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_CANPLAYGROUP_OFFSET UNITYSDK_OFFSET(0xC5DA990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xC5D94C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_PLAYACTION_OFFSET UNITYSDK_OFFSET(0xC5DA0C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_PLAYBYANIMGROUPID_OFFSET UNITYSDK_OFFSET(0xC5DA6E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_PLAYGROUP_OFFSET UNITYSDK_OFFSET(0xC5DA1F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_SETTEXTBUBBLE_OFFSET UNITYSDK_OFFSET(0xC5DA020)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER_TRYPLAYIDLEACTIONBYGACHACOUNT_OFFSET UNITYSDK_OFFSET(0xC5DAA90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__BUILDANIMGROUPINFO_OFFSET UNITYSDK_OFFSET(0xC5D95E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__CANPLAYANIM_OFFSET UNITYSDK_OFFSET(0xC5DA140)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC5DAC20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__HIDEBUBBLEAFTERDELAY_OFFSET UNITYSDK_OFFSET(0xC5DABC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__INITSPINEMESH_OFFSET UNITYSDK_OFFSET(0xC5D9B70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__INITSPINE_OFFSET UNITYSDK_OFFSET(0xC5D9870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__ONSPINEMESHREADY_OFFSET UNITYSDK_OFFSET(0xC5D9E30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESPINECONTROLLER__SHOWBUBBLETEXT_OFFSET UNITYSDK_OFFSET(0xC5DA480)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveSpineController_TypeDefinitionIndex = 74888;

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
