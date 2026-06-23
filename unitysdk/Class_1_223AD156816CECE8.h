#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD31E4216DD30F97;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_223AD156816CECE8_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x15B29850)
#define CLASS_1_223AD156816CECE8_METHOD_1_2E8AFDFF20EB7DF5_OFFSET UNITYSDK_OFFSET(0x15B296D0)
#define CLASS_1_223AD156816CECE8_METHOD_1_58219C8176522538_OFFSET UNITYSDK_OFFSET(0x15B29780)
#define CLASS_1_223AD156816CECE8_METHOD_1_9EF64292D3DA5796_OFFSET UNITYSDK_OFFSET(0x15B29940)
#define CLASS_1_223AD156816CECE8__CTOR_OFFSET UNITYSDK_OFFSET(0x15B29620)

inline static constexpr unsigned int Class_1_223AD156816CECE8_TypeDefinitionIndex = 64819;

class Class_1_223AD156816CECE8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_223AD156816CECE8__CTOR_OFFSET))(this);
	}

	::Class_1_FD31E4216DD30F97* Method_1_2E8AFDFF20EB7DF5(::System::Int32 a1)
	{
		return ((::Class_1_FD31E4216DD30F97*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_223AD156816CECE8_METHOD_1_2E8AFDFF20EB7DF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_58219C8176522538(::System::Int32 a1, ::Class_1_FD31E4216DD30F97* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + CLASS_1_223AD156816CECE8_METHOD_1_58219C8176522538_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_223AD156816CECE8_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::System::Void Method_1_9EF64292D3DA5796(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_223AD156816CECE8_METHOD_1_9EF64292D3DA5796_OFFSET))(this, a1);
	}
};
