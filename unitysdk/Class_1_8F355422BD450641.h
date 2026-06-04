#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8F355422BD450641_METHOD_1_2379D21BFC636AEB_OFFSET UNITYSDK_OFFSET(0xAC26380)
#define CLASS_1_8F355422BD450641_METHOD_1_48C73715685FD39C_OFFSET UNITYSDK_OFFSET(0xAC263E0)
#define CLASS_1_8F355422BD450641_METHOD_1_C8A853770327E822_OFFSET UNITYSDK_OFFSET(0xAC26700)
#define CLASS_1_8F355422BD450641_METHOD_1_CB750E7B0E25A82E_OFFSET UNITYSDK_OFFSET(0xAC26790)
#define CLASS_1_8F355422BD450641__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAC262B0)
#define CLASS_1_8F355422BD450641__CTOR_OFFSET UNITYSDK_OFFSET(0xAC26280)

inline static constexpr unsigned int Class_1_8F355422BD450641_TypeDefinitionIndex = 69126;

class Class_1_8F355422BD450641 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

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
