#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Timeline/ManaVideoMixerBehaviour_MovieMixerState.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace CriWare { class CriManaMovieMaterial; }
namespace CriWare::CriMana { class Player; }
namespace RPG::Client::Timeline { class ManaVideoClip; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_GET_ISEDITMODE_OFFSET UNITYSDK_OFFSET(0xCA6D640)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_18378026938D76D0_OFFSET UNITYSDK_OFFSET(0xCA6E9C0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_1EF2CF7724FBC5AC_OFFSET UNITYSDK_OFFSET(0xCA6D920)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_4092A3DEF0668ED7_OFFSET UNITYSDK_OFFSET(0xCA6E5C0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_537A827D67D6BC8C_OFFSET UNITYSDK_OFFSET(0xCA6E170)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_55E4D17EE41E3AB0_OFFSET UNITYSDK_OFFSET(0xCA6DE30)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xCA6FB30)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_739730F6701279D8_OFFSET UNITYSDK_OFFSET(0xCA6E8E0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_1_OFFSET UNITYSDK_OFFSET(0xCA6E650)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_OFFSET UNITYSDK_OFFSET(0xCA6E4F0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7E2C5E6C3812051A_OFFSET UNITYSDK_OFFSET(0xCA6DAE0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_8C0E3211A8AE23ED_OFFSET UNITYSDK_OFFSET(0xCA6D650)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_967773B090267ED3_OFFSET UNITYSDK_OFFSET(0xCA6FA00)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xCA6E480)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_F7288EF85A0EB843_OFFSET UNITYSDK_OFFSET(0xCA6E720)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xCA6FC50)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCA6FBC0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xCA6FCE0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xCA6FD70)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xCA6FE00)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xCA6FEA0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xCA6EB70)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA6FF70)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCA6FF40)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xCA6FFC0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCA6FFB0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xCA6FFD0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xCA6FFE0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xCA6FFF0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xCA70000)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xCA6FFA0)

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoMixerBehaviour_TypeDefinitionIndex = 68501;

	class ManaVideoMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Double* StaticGet_cPreloadTimeSec()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0x10D00);
		}
		static ::System::Int32* StaticGet_PROPERTY_TRANSPARENCY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0x10D08);
		}
		::UnityEngine::Playables::PlayableDirector* m_PlayableDirector; // 0x10
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* m_clips; // 0x18
		::CriWare::CriManaMovieMaterial* m_boundMovieMaterial; // 0x20
		::System::Boolean m_frameSync; // 0x28
		::System::Nullable_1<::System::Guid> m_lastClipId; // 0x2C
		::System::Double startTime; // 0x40
		::System::Double m_currentSeekingFrameTime; // 0x48
		::System::Single m_originalAudioVolume; // 0x50
		::System::Single m_originalSubAudioVolume; // 0x54
		::System::Single m_originalExtraAudioVolume; // 0x58
		::RPG::Client::Timeline::ManaVideoMixerBehaviour_MovieMixerState m_movieMixerState; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsEditMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_GET_ISEDITMODE_OFFSET))();
		}

		::System::Void Method_2_8C0E3211A8AE23ED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_8C0E3211A8AE23ED_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1EF2CF7724FBC5AC(::RPG::Client::Timeline::ManaVideoClip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_1EF2CF7724FBC5AC_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_7E2C5E6C3812051A(::RPG::Client::Timeline::ManaVideoClip* a1, ::System::Int32 a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7E2C5E6C3812051A_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_2_55E4D17EE41E3AB0(::RPG::Client::Timeline::ManaVideoClip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_55E4D17EE41E3AB0_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_537A827D67D6BC8C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_537A827D67D6BC8C_OFFSET))(this);
		}

		::System::Boolean Method_2_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		static ::System::Boolean Method_2_7BD95CCEB412D95C(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_4092A3DEF0668ED7(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_4092A3DEF0668ED7_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_7BD95CCEB412D95C_1(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_F7288EF85A0EB843(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_F7288EF85A0EB843_OFFSET))(a1);
		}

		::System::Void Method_2_739730F6701279D8(::UnityEngine::Timeline::TimelineClip* a1, ::RPG::Client::Timeline::ManaVideoClip* a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::RPG::Client::Timeline::ManaVideoClip*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_739730F6701279D8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_18378026938D76D0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_18378026938D76D0_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_967773B090267ED3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_967773B090267ED3_OFFSET))(this, a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}
	};
}
