#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigRhythmMoveBeatMap; }
namespace System { class Action; }

#define CONFIGRHYTHMMOVEBEATMAPDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1009FEE0)
#define CONFIGRHYTHMMOVEBEATMAPDATA___C__DISPLAYCLASS2_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x1009FEF0)

inline static constexpr unsigned int ConfigRhythmMoveBeatMapData___c__DisplayClass2_0_TypeDefinitionIndex = 60645;

class ConfigRhythmMoveBeatMapData___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::Action* complete; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReloadFromFile_b__0(::MoleMole::ConfigRhythmMoveBeatMap* asset)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigRhythmMoveBeatMap*))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATA___C__DISPLAYCLASS2_0__RELOADFROMFILE_B__0_OFFSET))(this, asset);
	}
};
