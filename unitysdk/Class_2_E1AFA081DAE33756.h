#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E6EC0D4D3F718ACE.h"
#include "unitysdk/EnviromentSystemV2Space/CancelFadingReason.h"

class Class_1_E0DD280A885A630F_Class_3_7A8F032E726591BF;

#define CLASS_2_E1AFA081DAE33756_METHOD_2_7E861CA152C9A630_OFFSET UNITYSDK_OFFSET(0x9080680)
#define CLASS_2_E1AFA081DAE33756__CTOR_OFFSET UNITYSDK_OFFSET(0x90805F0)

inline static constexpr unsigned int Class_2_E1AFA081DAE33756_TypeDefinitionIndex = 46014;

class Class_2_E1AFA081DAE33756 : public ::Class_1_E6EC0D4D3F718ACE<::Class_1_E0DD280A885A630F_Class_3_7A8F032E726591BF*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1AFA081DAE33756__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7E861CA152C9A630(::EnviromentSystemV2Space::CancelFadingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason))((::PBYTE)hIl2Cpp + CLASS_2_E1AFA081DAE33756_METHOD_2_7E861CA152C9A630_OFFSET))(this, a1);
	}
};
