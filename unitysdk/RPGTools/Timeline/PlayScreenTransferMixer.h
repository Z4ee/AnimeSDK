#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPGTools::Timeline { class PlayScreenTransferBehaviour; }
namespace RPGTools::Timeline { class ScreenTransferTextBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_56EE24C58B6B4B13_OFFSET UNITYSDK_OFFSET(0xB8F4050)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xB8F4610)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_80EF3B5D9A572F5D_OFFSET UNITYSDK_OFFSET(0xB8F4420)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_AC48B20BF4361CA7_OFFSET UNITYSDK_OFFSET(0xB8F3D80)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_B8BA6E85AEC72F3E_OFFSET UNITYSDK_OFFSET(0xB8F41B0)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_CEB6E0A2EBF74DA7_OFFSET UNITYSDK_OFFSET(0xB8F3F20)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_F94B4ABE3953A8DB_OFFSET UNITYSDK_OFFSET(0xB8F3C70)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8F3210)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xB8F3290)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB8F33A0)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8F3430)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F4660)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8F4670)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xB8F4680)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB8F4690)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8F46A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlayScreenTransferMixer_TypeDefinitionIndex = 44959;

	class PlayScreenTransferMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		// static const ::System::Single _BeginWaitTime; // 0x0
		::RPG::GameCore::PlayScreenTransfer* _TransferData; // 0x10
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x18
		::System::Boolean _IsPauseByText; // 0x20
		::System::Boolean _CanResumeByText; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_F94B4ABE3953A8DB(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::RPGTools::Timeline::PlayScreenTransferBehaviour* a3, ::RPGTools::Timeline::ScreenTransferTextBehaviour* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::RPGTools::Timeline::PlayScreenTransferBehaviour*, ::RPGTools::Timeline::ScreenTransferTextBehaviour*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_F94B4ABE3953A8DB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_2_B8BA6E85AEC72F3E(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::RPGTools::Timeline::PlayScreenTransferBehaviour* a3, ::RPGTools::Timeline::ScreenTransferTextBehaviour* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::RPGTools::Timeline::PlayScreenTransferBehaviour*, ::RPGTools::Timeline::ScreenTransferTextBehaviour*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_B8BA6E85AEC72F3E_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::System::Void Method_2_80EF3B5D9A572F5D(::UnityEngine::Playables::Playable a1, ::RPGTools::Timeline::ScreenTransferTextBehaviour* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::RPGTools::Timeline::ScreenTransferTextBehaviour*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_80EF3B5D9A572F5D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_AC48B20BF4361CA7(::UnityEngine::Playables::Playable a1, ::System::Single a2, ::System::Single a3, ::RPG::GameCore::ScreenTransferType a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Single, ::System::Single, ::RPG::GameCore::ScreenTransferType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_AC48B20BF4361CA7_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::PlayScreenTransfer* Method_2_CEB6E0A2EBF74DA7(::System::Single a1, ::System::Single a2, ::RPG::GameCore::ScreenTransferType a3, ::RPGTools::Timeline::PlayScreenTransferBehaviour* a4, ::RPGTools::Timeline::ScreenTransferTextBehaviour* a5)
		{
			return ((::RPG::GameCore::PlayScreenTransfer*(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::GameCore::ScreenTransferType, ::RPGTools::Timeline::PlayScreenTransferBehaviour*, ::RPGTools::Timeline::ScreenTransferTextBehaviour*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_CEB6E0A2EBF74DA7_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_2_56EE24C58B6B4B13(::RPG::GameCore::PlayScreenTransfer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_METHOD_2_56EE24C58B6B4B13_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
