#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomListener; }
namespace CriWare { class CriAtomSourceBase; }
namespace CriWare::CriTimeline::Atom { class CriAtomTimelinePreviewer_PlayerSource; }
namespace CriWare::CriTimeline::Atom { class CriAtomTimelinePreviewer_PreviewListener; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F4D8E20)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F4D6980)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F4D8DB0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GETACB_OFFSET UNITYSDK_OFFSET(0x1F4D81A0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GETPLAYER_OFFSET UNITYSDK_OFFSET(0x1F4D6A00)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F4D6660)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1F4D69E0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_INITPREVIEWLISTENERLIST_OFFSET UNITYSDK_OFFSET(0x1F4D6F80)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_INSTANCEDISPOSE_OFFSET UNITYSDK_OFFSET(0x1F4D68C0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERUPDATEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F4D8C60)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAY_OFFSET UNITYSDK_OFFSET(0x1F4D86D0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETAISAC_OFFSET UNITYSDK_OFFSET(0x1F4D8C10)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETCUE_OFFSET UNITYSDK_OFFSET(0x1F4D80E0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETLOOP_OFFSET UNITYSDK_OFFSET(0x1F4D8990)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETPITCH_OFFSET UNITYSDK_OFFSET(0x1F4D8AF0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1F4D8870)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1F4D89D0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_STOPALLTRACKS_OFFSET UNITYSDK_OFFSET(0x1F4D8710)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_UPDATE3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F4D6BF0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_UPDATEALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x1F4D7570)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_UPDATETIMELINEEXTENSION_OFFSET UNITYSDK_OFFSET(0x1F4D8D80)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D66E0)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomTimelinePreviewer_TypeDefinitionIndex = 35043;

	class CriAtomTimelinePreviewer : public ::System::Object
	{
	public:
		static ::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer** StaticGet_instance()
		{
			return (::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer**)Il2CppClass::FromTypeDefinitionIndex(CriAtomTimelinePreviewer_TypeDefinitionIndex)->GetStaticField(0x29220);
		}
		::System::String* lastAcfFile; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Guid, ::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer_PreviewListener*>>* listenerPurgeList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CriWare::CriAtomExAcb*>* acbTable; // 0x20
		::CriWare::CriAtom* atom; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Guid, ::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer_PreviewListener*>* listenerTable; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Guid, ::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer_PlayerSource*>* playerTable; // 0x38
		::System::Nullable_1<::System::Guid> trackIdForListenerUpdate; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER__CTOR_OFFSET))(this);
		}

		static ::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer* get_Instance()
		{
			return ((::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void InstanceDispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_INSTANCEDISPOSE_OFFSET))();
		}

		static ::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GET_ISINITIALIZED_OFFSET))();
		}

		::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer_PlayerSource* GetPlayer(::System::Guid trackId)
		{
			return ((::CriWare::CriTimeline::Atom::CriAtomTimelinePreviewer_PlayerSource*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_GETPLAYER_OFFSET))(this, trackId);
		}

		::System::Void Update3dTransform(::System::Guid trackId, ::UnityEngine::Transform* transform, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_UPDATE3DTRANSFORM_OFFSET))(this, trackId, transform, deltaTime);
		}

		::System::Void InitPreviewListenerList(::Il2CppArray<::CriWare::CriAtomListener*>* listenerList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CriWare::CriAtomListener*>*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_INITPREVIEWLISTENERLIST_OFFSET))(this, listenerList);
		}

		::System::Void UpdateAllListeners(::System::Guid trackId, ::System::Single deltaTime, ::CriWare::CriAtomListener* exclusiveObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::Single, ::CriWare::CriAtomListener*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_UPDATEALLLISTENERS_OFFSET))(this, trackId, deltaTime, exclusiveObj);
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

		::System::Void UpdateTimelineExtension(::CriWare::CriAtomSourceBase* bindObject, ::System::Guid trackGuid)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomSourceBase*, ::System::Guid))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_UPDATETIMELINEEXTENSION_OFFSET))(this, bindObject, trackGuid);
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
