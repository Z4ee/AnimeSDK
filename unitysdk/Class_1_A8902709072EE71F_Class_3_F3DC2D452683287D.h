#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8902709072EE71F_Class_2_8515B7D827C132C3.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_A8902709072EE71F_CLASS_3_F3DC2D452683287D_METHOD_3_286570692E8A7912_OFFSET UNITYSDK_OFFSET(0x178A1910)
#define CLASS_1_A8902709072EE71F_CLASS_3_F3DC2D452683287D_METHOD_3_3CCE0339FFFA828E_OFFSET UNITYSDK_OFFSET(0x178A1A80)
#define CLASS_1_A8902709072EE71F_CLASS_3_F3DC2D452683287D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x178A19E0)
#define CLASS_1_A8902709072EE71F_CLASS_3_F3DC2D452683287D__CTOR_OFFSET UNITYSDK_OFFSET(0x178A1780)

inline static constexpr unsigned int Class_1_A8902709072EE71F_Class_3_F3DC2D452683287D_TypeDefinitionIndex = 48852;

class Class_1_A8902709072EE71F_Class_3_F3DC2D452683287D : public ::Class_1_A8902709072EE71F_Class_2_8515B7D827C132C3
{
public:
	::System::String* Field_3_1; // 0x80
	::System::Action_2<::System::String*, ::System::Boolean>* Field_3_7; // 0x88
	::System::Boolean Field_3_0; // 0x90

	::System::Void _ctor(::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_3_F3DC2D452683287D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_286570692E8A7912()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_3_F3DC2D452683287D_METHOD_3_286570692E8A7912_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_3_F3DC2D452683287D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_3CCE0339FFFA828E(::System::Action_2<::System::String*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_3_F3DC2D452683287D_METHOD_3_3CCE0339FFFA828E_OFFSET))(this, a1);
	}
};
