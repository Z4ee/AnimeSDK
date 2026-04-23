#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DDE1D61870C38FA1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_359;

#define CLASS_3_3422E9E0338AD60A_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xECA2340)
#define CLASS_3_3422E9E0338AD60A_METHOD_3_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0xECA1960)
#define CLASS_3_3422E9E0338AD60A__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0xECA19F0)
#define CLASS_3_3422E9E0338AD60A__CTOR_OFFSET UNITYSDK_OFFSET(0xECA2490)
#define CLASS_3_3422E9E0338AD60A__REBUILD_OFFSET UNITYSDK_OFFSET(0xECA1B50)

inline static constexpr unsigned int Class_3_3422E9E0338AD60A_TypeDefinitionIndex = 57817;

class Class_3_3422E9E0338AD60A : public ::Class_2_DDE1D61870C38FA1
{
public:
	::Class_0_16E4307DCC419505_359* Field_3_0; // 0x28
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3422E9E0338AD60A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_FAA945ED465745BC(::Class_0_16E4307DCC419505_359* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_359*))((::PBYTE)hIl2Cpp + CLASS_3_3422E9E0338AD60A_METHOD_3_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3422E9E0338AD60A__CHECKNEEDREBUILD_OFFSET))(this);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3422E9E0338AD60A__REBUILD_OFFSET))(this);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3422E9E0338AD60A_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}
};
