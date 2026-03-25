#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/Struct_2_2363FCAC272B4C45.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_2A9144AA173D64D2_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x4124F0)
#define STRUCT_2_2A9144AA173D64D2_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x412540)
#define STRUCT_2_2A9144AA173D64D2__CTOR_OFFSET UNITYSDK_OFFSET(0x4124E0)

inline static constexpr unsigned int Struct_2_2A9144AA173D64D2_TypeDefinitionIndex = 60282;

struct alignas(8) Struct_2_2A9144AA173D64D2
{
	::RPGTools::Timeline::Emotion::EmoTrackType Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Collections::Generic::List_1<::Struct_2_2363FCAC272B4C45>* Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x20

	::System::Void _ctor(::RPGTools::Timeline::Emotion::EmoTrackType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + STRUCT_2_2A9144AA173D64D2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2A9144AA173D64D2_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2A9144AA173D64D2_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}
};
