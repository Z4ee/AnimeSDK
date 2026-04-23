#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8CF94E0F14A91ED3_3_GET_EVALUATIONID_OFFSET UNITYSDK_OFFSET(0xCD3E300)
#define CLASS_1_8CF94E0F14A91ED3_3_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCD3E320)
#define CLASS_1_8CF94E0F14A91ED3_3_SET_EVALUATIONID_OFFSET UNITYSDK_OFFSET(0xCD3E310)
#define CLASS_1_8CF94E0F14A91ED3_3_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCD3E330)
#define CLASS_1_8CF94E0F14A91ED3_3__CTOR_OFFSET UNITYSDK_OFFSET(0xCD3E2F0)

inline static constexpr unsigned int Class_1_8CF94E0F14A91ED3_3_TypeDefinitionIndex = 58501;

class Class_1_8CF94E0F14A91ED3_3 : public ::System::Object
{
public:
	::System::UInt32 _Progress_k__BackingField; // 0x10
	::System::UInt32 _EvaluationID_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_EvaluationID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3_GET_EVALUATIONID_OFFSET))(this);
	}

	::System::Void set_EvaluationID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3_SET_EVALUATIONID_OFFSET))(this, value);
	}

	::System::UInt32 get_Progress()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3_GET_PROGRESS_OFFSET))(this);
	}

	::System::Void set_Progress(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CF94E0F14A91ED3_3_SET_PROGRESS_OFFSET))(this, value);
	}
};
