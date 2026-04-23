#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define CLASS_1_EC326A3215DF194D_ADVANCE_OFFSET UNITYSDK_OFFSET(0x17C73110)
#define CLASS_1_EC326A3215DF194D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C73A20)
#define CLASS_1_EC326A3215DF194D_GETMEMORY_OFFSET UNITYSDK_OFFSET(0x17C736B0)
#define CLASS_1_EC326A3215DF194D_GETSPAN_OFFSET UNITYSDK_OFFSET(0x17C73200)
#define CLASS_1_EC326A3215DF194D_GET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x17C74020)
#define CLASS_1_EC326A3215DF194D_METHOD_1_301A0A26D1FB9428_OFFSET UNITYSDK_OFFSET(0x17C73AC0)
#define CLASS_1_EC326A3215DF194D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17C73980)
#define CLASS_1_EC326A3215DF194D_METHOD_1_8FF354B64B657510_OFFSET UNITYSDK_OFFSET(0x17C73510)
#define CLASS_1_EC326A3215DF194D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17C73A70)
#define CLASS_1_EC326A3215DF194D_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x17C72F10)
#define CLASS_1_EC326A3215DF194D_METHOD_1_EF1FCC3074463C28_OFFSET UNITYSDK_OFFSET(0x17C73D50)
#define CLASS_1_EC326A3215DF194D_SET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x17C74030)
#define CLASS_1_EC326A3215DF194D__CTOR_OFFSET UNITYSDK_OFFSET(0x17C74040)

inline static constexpr unsigned int Class_1_EC326A3215DF194D_TypeDefinitionIndex = 34394;

class Class_1_EC326A3215DF194D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x40; // 0x0
	::Il2CppArray<::System::Byte>* Field_1_0; // 0x10
	::System::Int32 _WrittenCount_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Advance(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_ADVANCE_OFFSET))(this, a1);
	}

	::System::Span_1<::System::Byte> GetSpan(::System::Int32 a1)
	{
		return ((::System::Span_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_GETSPAN_OFFSET))(this, a1);
	}

	::System::Memory_1<::System::Byte> GetMemory(::System::Int32 a1)
	{
		return ((::System::Memory_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_GETMEMORY_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8FF354B64B657510(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_8FF354B64B657510_OFFSET))(this, a1);
	}

	::System::Memory_1<::System::Byte> Method_1_301A0A26D1FB9428()
	{
		return ((::System::Memory_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_301A0A26D1FB9428_OFFSET))(this);
	}

	::System::ReadOnlySpan_1<::System::Byte> Method_1_EF1FCC3074463C28()
	{
		return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_EF1FCC3074463C28_OFFSET))(this);
	}

	::System::Int32 get_WrittenCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_GET_WRITTENCOUNT_OFFSET))(this);
	}

	::System::Void set_WrittenCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_SET_WRITTENCOUNT_OFFSET))(this, value);
	}
};
