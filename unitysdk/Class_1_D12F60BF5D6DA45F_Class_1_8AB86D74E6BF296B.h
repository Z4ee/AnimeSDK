#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityRhythmClickBeatmapConfig; }
namespace System { class Action; }

#define CLASS_1_D12F60BF5D6DA45F_CLASS_1_8AB86D74E6BF296B_METHOD_1_F754065B95A0C0ED_OFFSET UNITYSDK_OFFSET(0x118D62E0)
#define CLASS_1_D12F60BF5D6DA45F_CLASS_1_8AB86D74E6BF296B__CTOR_OFFSET UNITYSDK_OFFSET(0x118D62D0)

inline static constexpr unsigned int Class_1_D12F60BF5D6DA45F_Class_1_8AB86D74E6BF296B_TypeDefinitionIndex = 51452;

class Class_1_D12F60BF5D6DA45F_Class_1_8AB86D74E6BF296B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D12F60BF5D6DA45F_CLASS_1_8AB86D74E6BF296B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F754065B95A0C0ED(::MoleMole::ActivityRhythmClickBeatmapConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D12F60BF5D6DA45F_CLASS_1_8AB86D74E6BF296B_METHOD_1_F754065B95A0C0ED_OFFSET))(this, a1);
	}
};
