#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigRhythmMoveBeatMap; }
namespace MoleMole { class ConfigRhythmMoveBeatMap_BeatMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CONFIGRHYTHMMOVEBEATMAPDATA_GETBEATMAP_OFFSET UNITYSDK_OFFSET(0x1268A540)
#define CONFIGRHYTHMMOVEBEATMAPDATA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1268A240)
#define CONFIGRHYTHMMOVEBEATMAPDATA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1268A330)
#define CONFIGRHYTHMMOVEBEATMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1268A660)

inline static constexpr unsigned int ConfigRhythmMoveBeatMapData_TypeDefinitionIndex = 60141;

class ConfigRhythmMoveBeatMapData : public ::System::Object
{
public:
	static ::MoleMole::ConfigRhythmMoveBeatMap** StaticGet_config()
	{
		return (::MoleMole::ConfigRhythmMoveBeatMap**)Il2CppClass::FromTypeDefinitionIndex(ConfigRhythmMoveBeatMapData_TypeDefinitionIndex)->GetStaticField(0x3FEF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATA__CTOR_OFFSET))(this);
	}

	static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
	}

	static ::System::Void ReloadFromFile(::System::Boolean isAync, ::System::Action* complete)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATA_RELOADFROMFILE_OFFSET))(isAync, complete);
	}

	static ::MoleMole::ConfigRhythmMoveBeatMap_BeatMap* GetBeatMap(::System::String* name)
	{
		return ((::MoleMole::ConfigRhythmMoveBeatMap_BeatMap*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATA_GETBEATMAP_OFFSET))(name);
	}
};
