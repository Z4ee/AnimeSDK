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

#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_GET_ISEDITMODE_OFFSET UNITYSDK_OFFSET(0x1789E9F0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0x178A0A00)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_14E95960313F706C_OFFSET UNITYSDK_OFFSET(0x1789EF80)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_18378026938D76D0_OFFSET UNITYSDK_OFFSET(0x1789F880)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_501509B4B58077AF_OFFSET UNITYSDK_OFFSET(0x1789F220)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x178A0A70)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_1_OFFSET UNITYSDK_OFFSET(0x1789F4E0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_2_OFFSET UNITYSDK_OFFSET(0x1789F560)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_3_OFFSET UNITYSDK_OFFSET(0x1789F620)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_OFFSET UNITYSDK_OFFSET(0x1789F420)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x1789EA00)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1789F3B0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_B7B52CA164574F49_OFFSET UNITYSDK_OFFSET(0x1789ECD0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_D0916E43A07A622E_OFFSET UNITYSDK_OFFSET(0x1789EB70)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_DD14DC5543DE974C_OFFSET UNITYSDK_OFFSET(0x1789F730)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x178A0BE0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x178A0B00)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x178A0CC0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x178A0D50)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x178A0DE0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x178A0E80)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1789FA00)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x178A0F50)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x178A0F20)

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoMixerBehaviour_TypeDefinitionIndex = 69995;

	class ManaVideoMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Double* StaticGet_cPreloadTimeSec()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0xB730);
		}
		static ::System::Int32* StaticGet_PROPERTY_TRANSPARENCY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0xB738);
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

		::System::Void Method_2_A323A7720C85F580(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_A323A7720C85F580_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_D0916E43A07A622E(::RPG::Client::Timeline::ManaVideoClip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_D0916E43A07A622E_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_B7B52CA164574F49(::RPG::Client::Timeline::ManaVideoClip* a1, ::System::Int32 a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_B7B52CA164574F49_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_2_14E95960313F706C(::RPG::Client::Timeline::ManaVideoClip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_14E95960313F706C_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_501509B4B58077AF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_501509B4B58077AF_OFFSET))(this);
		}

		::System::Boolean Method_2_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		static ::System::Boolean Method_2_7BD95CCEB412D95C(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_7BD95CCEB412D95C_1(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_7BD95CCEB412D95C_2(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_2_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_7BD95CCEB412D95C_3(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_7BD95CCEB412D95C_3_OFFSET))(a1);
		}

		::System::Void Method_2_DD14DC5543DE974C(::UnityEngine::Timeline::TimelineClip* a1, ::RPG::Client::Timeline::ManaVideoClip* a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::RPG::Client::Timeline::ManaVideoClip*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_DD14DC5543DE974C_OFFSET))(this, a1, a2, a3);
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

		::System::Void Method_2_04E967564E8CD234(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_METHOD_2_04E967564E8CD234_OFFSET))(this, a1);
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
	};
}
