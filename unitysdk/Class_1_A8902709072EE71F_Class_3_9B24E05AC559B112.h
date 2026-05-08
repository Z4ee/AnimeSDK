#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8902709072EE71F_Class_2_8515B7D827C132C3.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A8902709072EE71F_CLASS_3_9B24E05AC559B112_METHOD_3_8FD0952225841B46_OFFSET UNITYSDK_OFFSET(0x11BE4C90)
#define CLASS_1_A8902709072EE71F_CLASS_3_9B24E05AC559B112_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11BE4D60)
#define CLASS_1_A8902709072EE71F_CLASS_3_9B24E05AC559B112_METHOD_3_F607823E092C18D3_OFFSET UNITYSDK_OFFSET(0x11BE31A0)
#define CLASS_1_A8902709072EE71F_CLASS_3_9B24E05AC559B112__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE3010)

inline static constexpr unsigned int Class_1_A8902709072EE71F_Class_3_9B24E05AC559B112_TypeDefinitionIndex = 76014;

class Class_1_A8902709072EE71F_Class_3_9B24E05AC559B112 : public ::Class_1_A8902709072EE71F_Class_2_8515B7D827C132C3
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* Field_3_0; // 0x80
	::System::Action_1<::System::Collections::Generic::List_1<::System::Boolean>*>* Field_3_1; // 0x88

	::System::Void _ctor(::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_3_9B24E05AC559B112__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8FD0952225841B46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_3_9B24E05AC559B112_METHOD_3_8FD0952225841B46_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_3_9B24E05AC559B112_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_F607823E092C18D3(::System::Action_1<::System::Collections::Generic::List_1<::System::Boolean>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_3_9B24E05AC559B112_METHOD_3_F607823E092C18D3_OFFSET))(this, a1);
	}
};
