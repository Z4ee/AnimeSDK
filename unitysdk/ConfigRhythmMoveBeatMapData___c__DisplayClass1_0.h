#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CONFIGRHYTHMMOVEBEATMAPDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A472A0)
#define CONFIGRHYTHMMOVEBEATMAPDATA___C__DISPLAYCLASS1_0__RELOADFROMFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x17A472B0)

inline static constexpr unsigned int ConfigRhythmMoveBeatMapData___c__DisplayClass1_0_TypeDefinitionIndex = 74769;

class ConfigRhythmMoveBeatMapData___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* moveOneStepCallback; // 0x10
	::System::String* dataName; // 0x18
	::System::Action_1<::System::String*>* finishCallback; // 0x20
	::System::Single progressSpan; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReloadFromFileAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATA___C__DISPLAYCLASS1_0__RELOADFROMFILEASYNC_B__0_OFFSET))(this);
	}
};
