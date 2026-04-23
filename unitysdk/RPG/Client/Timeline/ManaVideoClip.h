#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Timeline/ManaVideoClip_Struct_2_521121E86E6D773E.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB3148E0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB3148D0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xB314A30)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_ISMOVIEINFOREADY_OFFSET UNITYSDK_OFFSET(0xB315160)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_M_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0xB314630)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_1E5FDA0F83BB7E46_OFFSET UNITYSDK_OFFSET(0xB314FE0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_343AEE905EA1B6E3_OFFSET UNITYSDK_OFFSET(0xB3151B0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_3C5D39652970A749_OFFSET UNITYSDK_OFFSET(0xB314CA0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB314690)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_B3D8593DFBC7CE8E_OFFSET UNITYSDK_OFFSET(0xB314F30)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_CCA281E83B85CE4D_OFFSET UNITYSDK_OFFSET(0xB314A90)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_SET_M_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0xB3148C0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB315330)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP___IFIXBASEPROXY_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xB3153B0)

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoClip_TypeDefinitionIndex = 67545;

	class ManaVideoClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Guid guid; // 0x18
		::System::UInt32 m_videoID; // 0x28
		::System::String* _moviePath; // 0x30
		::System::Boolean m_loopWithinClip; // 0x38
		::System::Double m_movieFrameRate; // 0x40
		::System::Double m_clipDuration; // 0x48
		::System::Single m_fadeinDuration; // 0x50
		::UnityEngine::AnimationCurve* m_fadeinCurve; // 0x58
		::System::Single m_fadeoutDuration; // 0x60
		::UnityEngine::AnimationCurve* m_fadeoutCurve; // 0x68
		::System::Boolean m_fadeAudio; // 0x70
		::UnityEngine::Timeline::TimelineClip* m_clip; // 0x78
		::System::Nullable_1<::RPG::Client::Timeline::ManaVideoClip_Struct_2_521121E86E6D773E> m_movieInfoStruct; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP__CTOR_OFFSET))(this);
		}

		::System::String* get_m_moviePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_M_MOVIEPATH_OFFSET))(this);
		}

		::System::Void set_m_moviePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_SET_M_MOVIEPATH_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_DURATION_OFFSET))(this);
		}

		::System::UInt64 Method_4_CCA281E83B85CE4D()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_CCA281E83B85CE4D_OFFSET))(this);
		}

		::System::Void Method_4_3C5D39652970A749(::CriWare::CriMana::MovieInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_3C5D39652970A749_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_1E5FDA0F83BB7E46(::CriWare::CriMana::MovieInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_1E5FDA0F83BB7E46_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMovieInfoReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_ISMOVIEINFOREADY_OFFSET))(this);
		}

		::System::Int32 Method_4_343AEE905EA1B6E3(::System::Double a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_343AEE905EA1B6E3_OFFSET))(this, a1, a2);
		}

		::System::Nullable_1<::RPG::Client::Timeline::ManaVideoClip_Struct_2_521121E86E6D773E> Method_4_B3D8593DFBC7CE8E(::CriWare::CriMana::MovieInfo* a1)
		{
			return ((::System::Nullable_1<::RPG::Client::Timeline::ManaVideoClip_Struct_2_521121E86E6D773E>(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_B3D8593DFBC7CE8E_OFFSET))(this, a1);
		}

		::System::Void Method_4_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_METHOD_4_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Double __iFixBaseProxy_get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP___IFIXBASEPROXY_GET_DURATION_OFFSET))(this);
		}
	};
}
