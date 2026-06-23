#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8902709072EE71F_Class_1_E6135956350F5AE7.h"
#include "unitysdk/Enum_3_6E84F371E6195190.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"

#define CLASS_1_A8902709072EE71F_CLASS_2_C65DCB8ACCB88EAD_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1288C890)
#define CLASS_1_A8902709072EE71F_CLASS_2_C65DCB8ACCB88EAD_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1288C850)
#define CLASS_1_A8902709072EE71F_CLASS_2_C65DCB8ACCB88EAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1288C7F0)

inline static constexpr unsigned int Class_1_A8902709072EE71F_Class_2_C65DCB8ACCB88EAD_TypeDefinitionIndex = 67636;

class Class_1_A8902709072EE71F_Class_2_C65DCB8ACCB88EAD : public ::Class_1_A8902709072EE71F_Class_1_E6135956350F5AE7
{
public:
	::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct Field_2_0; // 0x30
	::Enum_3_6E84F371E6195190 Field_2_1; // 0x80

	::System::Void _ctor(::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_2_C65DCB8ACCB88EAD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_2_C65DCB8ACCB88EAD_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_2_C65DCB8ACCB88EAD_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}
};
