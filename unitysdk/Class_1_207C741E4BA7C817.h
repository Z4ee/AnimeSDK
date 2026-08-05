#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DADEC6F00CA21198.h"
#include "unitysdk/MoleMole/CinemaSingleBeatMapConfig_BeatMap_BeatItem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_207C741E4BA7C817_COMPARETO_OFFSET UNITYSDK_OFFSET(0x12F22670)
#define CLASS_1_207C741E4BA7C817__CTOR_OFFSET UNITYSDK_OFFSET(0x12F224F0)

inline static constexpr unsigned int Class_1_207C741E4BA7C817_TypeDefinitionIndex = 90966;

class Class_1_207C741E4BA7C817 : public ::System::Object
{
public:
	::System::String* Field_1_11; // 0x10
	::System::String* Field_1_10; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::String* Field_1_4; // 0x28
	::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem Field_1_3; // 0x30
	::System::Single Field_1_2; // 0x40
	::Enum_3_DADEC6F00CA21198 Field_1_0; // 0x44
	::System::Int32 Field_1_1; // 0x48
	::System::Int32 Field_1_7; // 0x4C
	::System::Single Field_1_6; // 0x50

	::System::Void _ctor(::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem a1, ::System::Single a2, ::System::Int32 a3, ::Enum_3_DADEC6F00CA21198 a4, ::System::Int32 a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Single, ::System::Int32, ::Enum_3_DADEC6F00CA21198, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_207C741E4BA7C817__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 CompareTo(::Class_1_207C741E4BA7C817* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_207C741E4BA7C817*))((::PBYTE)hIl2Cpp + CLASS_1_207C741E4BA7C817_COMPARETO_OFFSET))(this, a1);
	}
};
