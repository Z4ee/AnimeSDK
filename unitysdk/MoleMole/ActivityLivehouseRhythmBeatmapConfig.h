#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace MoleMole { class EventRange; }
namespace MoleMole { class Note; }
namespace MoleMole { class NoteSfx; }
namespace MoleMole { class NoteTypeColor; }
namespace MoleMole { class TempoChange; }
namespace MoleMole { class TimeSignatureChange; }
namespace MoleMole { class Track; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_GET_AUDIOOFFSETSECONDS_OFFSET UNITYSDK_OFFSET(0xF95AA00)
#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_METHOD_3_15E82C5C62701F51_OFFSET UNITYSDK_OFFSET(0xF95AD70)
#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_METHOD_3_284A00008B880FD6_OFFSET UNITYSDK_OFFSET(0xF95AD20)
#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_METHOD_3_5DB88A6B329F3A46_OFFSET UNITYSDK_OFFSET(0xF95AEB0)
#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF95AE50)
#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF95AA10)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityLivehouseRhythmBeatmapConfig_TypeDefinitionIndex = 62844;

	class ActivityLivehouseRhythmBeatmapConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* BGMEventKey; // 0x18
		::System::Int32 AudioOffsetMs; // 0x20
		::System::Int32 BlankBeatCount; // 0x24
		::System::Double BlankTimeSeconds; // 0x28
		::System::Double BeatMapEndSeconds; // 0x30
		::System::Int32 CycleBeatCount; // 0x38
		::System::Double DefaultBPM; // 0x40
		::System::Double SecondsPerBeat; // 0x48
		::System::Int32 DefaultNumerator; // 0x50
		::System::Int32 DefaultDenominator; // 0x54
		::System::Double NoteBaseDisplayDuration; // 0x58
		::System::Single BaseScrollSpeedMultiplier; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::TempoChange*>* TempoMap; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::TimeSignatureChange*>* TimeSigMap; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::Track*>* Tracks; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::Note*>* Notes; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::EventRange*>* Events; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::NoteSfx*>* SfxMapping; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::NoteTypeColor*>* NoteColors; // 0x98
		::System::Double DurationSeconds; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG__CTOR_OFFSET))(this);
		}

		::System::Double get_AudioOffsetSeconds()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_GET_AUDIOOFFSETSECONDS_OFFSET))(this);
		}

		::System::Double Method_3_284A00008B880FD6()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_METHOD_3_284A00008B880FD6_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Note*>* Method_3_15E82C5C62701F51(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Note*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_METHOD_3_15E82C5C62701F51_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::EventRange*>* Method_3_5DB88A6B329F3A46(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::EventRange*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_METHOD_3_5DB88A6B329F3A46_OFFSET))(this, a1);
		}
	};
}
