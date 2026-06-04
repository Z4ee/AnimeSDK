#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E6EC0D4D3F718ACE.h"
#include "unitysdk/EnviromentSystemV2Space/CancelFadingReason.h"

class Class_1_9B39BF4ECCAD98D9_Class_3_7A8F032E726591BF;

#define CLASS_2_80F526ED7424AE7F_METHOD_2_107E977436A02596_OFFSET UNITYSDK_OFFSET(0x1356CB00)
#define CLASS_2_80F526ED7424AE7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1356CAA0)

inline static constexpr unsigned int Class_2_80F526ED7424AE7F_TypeDefinitionIndex = 46597;

class Class_2_80F526ED7424AE7F : public ::Class_1_E6EC0D4D3F718ACE<::Class_1_9B39BF4ECCAD98D9_Class_3_7A8F032E726591BF*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F526ED7424AE7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_107E977436A02596(::EnviromentSystemV2Space::CancelFadingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason))((::PBYTE)hIl2Cpp + CLASS_2_80F526ED7424AE7F_METHOD_2_107E977436A02596_OFFSET))(this, a1);
	}
};
