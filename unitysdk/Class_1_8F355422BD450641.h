#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8F355422BD450641_METHOD_1_2379D21BFC636AEB_OFFSET UNITYSDK_OFFSET(0x17A07280)
#define CLASS_1_8F355422BD450641_METHOD_1_48C73715685FD39C_OFFSET UNITYSDK_OFFSET(0x17A072E0)
#define CLASS_1_8F355422BD450641_METHOD_1_C8A853770327E822_OFFSET UNITYSDK_OFFSET(0x17A07600)
#define CLASS_1_8F355422BD450641_METHOD_1_CB750E7B0E25A82E_OFFSET UNITYSDK_OFFSET(0x17A07690)
#define CLASS_1_8F355422BD450641__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A071B0)
#define CLASS_1_8F355422BD450641__CTOR_OFFSET UNITYSDK_OFFSET(0x17A07180)

inline static constexpr unsigned int Class_1_8F355422BD450641_TypeDefinitionIndex = 73944;

class Class_1_8F355422BD450641 : public ::System::Object
{
public:
	::System::String* MNDFOPKBHKP; // 0x10
	::System::Int32 JBCFPAEELBL; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F355422BD450641__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F355422BD450641__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2379D21BFC636AEB(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_8F355422BD450641_METHOD_1_2379D21BFC636AEB_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8A853770327E822(::System::Double a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F355422BD450641_METHOD_1_C8A853770327E822_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48C73715685FD39C(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F355422BD450641_METHOD_1_48C73715685FD39C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CB750E7B0E25A82E(::System::DateTime a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_8F355422BD450641_METHOD_1_CB750E7B0E25A82E_OFFSET))(this, a1);
	}
};
