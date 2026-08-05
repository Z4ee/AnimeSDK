#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityRhythmClickBeatmapConfig; }
namespace System { class Action; }

#define CLASS_1_D12F60BF5D6DA45F_CLASS_1_1385AF0E43A94BAC_METHOD_1_FB346675B51FDC14_OFFSET UNITYSDK_OFFSET(0xE978790)
#define CLASS_1_D12F60BF5D6DA45F_CLASS_1_1385AF0E43A94BAC__CTOR_OFFSET UNITYSDK_OFFSET(0xE978690)

inline static constexpr unsigned int Class_1_D12F60BF5D6DA45F_Class_1_1385AF0E43A94BAC_TypeDefinitionIndex = 61430;

class Class_1_D12F60BF5D6DA45F_Class_1_1385AF0E43A94BAC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D12F60BF5D6DA45F_CLASS_1_1385AF0E43A94BAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FB346675B51FDC14(::MoleMole::ActivityRhythmClickBeatmapConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D12F60BF5D6DA45F_CLASS_1_1385AF0E43A94BAC_METHOD_1_FB346675B51FDC14_OFFSET))(this, a1);
	}
};
