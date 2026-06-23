#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback.h"
#include "unitysdk/CriWare/CriTimeline/Atom/CriAtomTimelinePreviewer_PlayerSource.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomEx3dListener; }
namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomExPlayer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E24D620)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E24DBE0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E24D5B0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GETACB_OFFSET UNITYSDK_OFFSET(0x1E24C760)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GETPLAYER_OFFSET UNITYSDK_OFFSET(0x1E24C4B0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E24C170)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1E24C490)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERUPDATEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E24D510)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAY_OFFSET UNITYSDK_OFFSET(0x1E24CE30)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETAISAC_OFFSET UNITYSDK_OFFSET(0x1E24D440)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETCUE_OFFSET UNITYSDK_OFFSET(0x1E24C610)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETLOOP_OFFSET UNITYSDK_OFFSET(0x1E24D2A0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETPITCH_OFFSET UNITYSDK_OFFSET(0x1E24D390)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1E24D200)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1E24D2E0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_STOPALLTRACKS_OFFSET UNITYSDK_OFFSET(0x1E24CF50)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E24C1F0)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomTimelinePreviewer_TypeDefinitionIndex = 34392;

	class CriAtomTimelinePreviewer : public ::System::Object
	{
	public:
		static ::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer** StaticGet_instance()
		{
			return (::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer**)Il2CppClass::FromTypeDefinitionIndex(CriAtomTimelinePreviewer_TypeDefinitionIndex)->GetStaticField(0x279B0);
		}
		::System::String* lastAcfFile; // 0x10
		::CriWare::CriAtom* atom; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Guid, ::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer_PlayerSource>* playerTable; // 0x20
		::CriWare::CriAtomEx3dListener* listener3d; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CriWare::CriAtomExAcb*>* acbTable; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER__CTOR_OFFSET))(this);
		}

		static ::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer* get_Instance()
		{
			return ((::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GET_ISINITIALIZED_OFFSET))();
		}

		::CriWare::CriAtomExPlayer* GetPlayer(::System::Guid trackId)
		{
			return ((::CriWare::CriAtomExPlayer*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GETPLAYER_OFFSET))(this, trackId);
		}

		::System::Void SetCue(::System::Guid trackId, ::CriWare::CriAtomExAcb* acb, ::System::String* cueName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::CriWare::CriAtomExAcb*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETCUE_OFFSET))(this, trackId, acb, cueName);
		}

		::CriWare::CriAtomExAcb* GetAcb(::System::String* acbPath, ::System::String* awbPath)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GETACB_OFFSET))(this, acbPath, awbPath);
		}

		::CriWare::CriAtomExPlayback Play(::System::Guid trackId)
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAY_OFFSET))(this, trackId);
		}

		::System::Void StopAllTracks(::System::Boolean stopWithoutRelease)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_STOPALLTRACKS_OFFSET))(this, stopWithoutRelease);
		}

		::System::Void SetStartTime(::System::Guid trackId, ::System::Int64 startTimeMs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETSTARTTIME_OFFSET))(this, trackId, startTimeMs);
		}

		::System::Void SetLoop(::System::Guid trackId, ::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETLOOP_OFFSET))(this, trackId, sw);
		}

		::System::Void SetVolume(::System::Guid trackId, ::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETVOLUME_OFFSET))(this, trackId, volume);
		}

		::System::Void SetPitch(::System::Guid trackId, ::System::Single pitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETPITCH_OFFSET))(this, trackId, pitch);
		}

		::System::Void SetAISAC(::System::Guid trackId, ::System::String* controlName, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETAISAC_OFFSET))(this, trackId, controlName, value);
		}

		::System::Void PlayerUpdateParameter(::System::Guid trackId, ::CriWare::CriAtomExPlayback atomExPlayback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::CriWare::CriAtomExPlayback))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERUPDATEPARAMETER_OFFSET))(this, trackId, atomExPlayback);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
