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

#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_GET_ISEDITMODE_OFFSET UNITYSDK_OFFSET(0xB3153F0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_12BD959B64644AF2_OFFSET UNITYSDK_OFFSET(0xB315890)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_18378026938D76D0_OFFSET UNITYSDK_OFFSET(0xB3167D0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_1EF2CF7724FBC5AC_OFFSET UNITYSDK_OFFSET(0xB3156D0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_2B818A1431AECFF5_1_OFFSET UNITYSDK_OFFSET(0xB316480)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_2B818A1431AECFF5_OFFSET UNITYSDK_OFFSET(0xB3162F0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_537A827D67D6BC8C_OFFSET UNITYSDK_OFFSET(0xB315F70)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_5ECD0881D9EAA729_OFFSET UNITYSDK_OFFSET(0xB315C00)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xB317940)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_739730F6701279D8_OFFSET UNITYSDK_OFFSET(0xB3166E0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_8C0E3211A8AE23ED_OFFSET UNITYSDK_OFFSET(0xB315400)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_967773B090267ED3_OFFSET UNITYSDK_OFFSET(0xB317810)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB316280)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_B1B5FCDB4D6D5466_OFFSET UNITYSDK_OFFSET(0xB3163D0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_F43E1BB7B905D5AB_OFFSET UNITYSDK_OFFSET(0xB316560)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB317A60)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB3179D0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB317AF0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB317B80)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xB317C10)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB317CB0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB316990)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0xB317D80)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB317D50)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB317DF0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB317DE0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB317E00)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB317E10)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xB317E20)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB317E30)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB317DD0)

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoMixerBehaviour_TypeDefinitionIndex = 67547;

	class ManaVideoMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Int32* StaticGet_PROPERTY_TRANSPARENCY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0xD8E0);
		}
		static ::System::Double* StaticGet_cPreloadTimeSec()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0xD8E8);
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

		::System::Boolean Method_2_12BD959B64644AF2(::RPG::Client::Timeline::ManaVideoClip* a1, ::System::Int32 a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_12BD959B64644AF2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_2_5ECD0881D9EAA729(::RPG::Client::Timeline::ManaVideoClip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_5ECD0881D9EAA729_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_537A827D67D6BC8C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_537A827D67D6BC8C_OFFSET))(this);
		}

		::System::Boolean Method_2_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		static ::System::Boolean Method_2_2B818A1431AECFF5(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_2B818A1431AECFF5_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_B1B5FCDB4D6D5466(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_B1B5FCDB4D6D5466_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_2B818A1431AECFF5_1(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_2B818A1431AECFF5_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_F43E1BB7B905D5AB(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_F43E1BB7B905D5AB_OFFSET))(a1);
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

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}
	};
}
