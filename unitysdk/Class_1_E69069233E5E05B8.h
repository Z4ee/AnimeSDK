#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define CLASS_1_E69069233E5E05B8_ADVANCE_OFFSET UNITYSDK_OFFSET(0x18D1F4E0)
#define CLASS_1_E69069233E5E05B8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D1FB60)
#define CLASS_1_E69069233E5E05B8_GETMEMORY_OFFSET UNITYSDK_OFFSET(0x18D1F970)
#define CLASS_1_E69069233E5E05B8_GETSPAN_OFFSET UNITYSDK_OFFSET(0x18D1F5D0)
#define CLASS_1_E69069233E5E05B8_GET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x18D1FDA0)
#define CLASS_1_E69069233E5E05B8_METHOD_1_301A0A26D1FB9428_OFFSET UNITYSDK_OFFSET(0x18D1FC00)
#define CLASS_1_E69069233E5E05B8_METHOD_1_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x18D1FA40)
#define CLASS_1_E69069233E5E05B8_METHOD_1_B433DD4DC78D168A_OFFSET UNITYSDK_OFFSET(0x18D1F3E0)
#define CLASS_1_E69069233E5E05B8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18D1FBB0)
#define CLASS_1_E69069233E5E05B8_METHOD_1_EF1FCC3074463C28_OFFSET UNITYSDK_OFFSET(0x18D1FCB0)
#define CLASS_1_E69069233E5E05B8_METHOD_1_FC71486C26B5959F_OFFSET UNITYSDK_OFFSET(0x18D1F6E0)
#define CLASS_1_E69069233E5E05B8_SET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x18D1FDB0)
#define CLASS_1_E69069233E5E05B8__CTOR_OFFSET UNITYSDK_OFFSET(0x18D1FDC0)

inline static constexpr unsigned int Class_1_E69069233E5E05B8_TypeDefinitionIndex = 35343;

class Class_1_E69069233E5E05B8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x40; // 0x0
	::Il2CppArray<::System::Byte>* Field_1_1; // 0x10
	::System::Int32 _WrittenCount_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B433DD4DC78D168A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_METHOD_1_B433DD4DC78D168A_OFFSET))(this, a1);
	}

	::System::Void Advance(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_ADVANCE_OFFSET))(this, a1);
	}

	::System::Span_1<::System::Byte> GetSpan(::System::Int32 a1)
	{
		return ((::System::Span_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_GETSPAN_OFFSET))(this, a1);
	}

	::System::Memory_1<::System::Byte> GetMemory(::System::Int32 a1)
	{
		return ((::System::Memory_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_GETMEMORY_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_METHOD_1_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_FC71486C26B5959F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_METHOD_1_FC71486C26B5959F_OFFSET))(this, a1);
	}

	::System::Memory_1<::System::Byte> Method_1_301A0A26D1FB9428()
	{
		return ((::System::Memory_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_METHOD_1_301A0A26D1FB9428_OFFSET))(this);
	}

	::System::ReadOnlySpan_1<::System::Byte> Method_1_EF1FCC3074463C28()
	{
		return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_METHOD_1_EF1FCC3074463C28_OFFSET))(this);
	}

	::System::Int32 get_WrittenCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_GET_WRITTENCOUNT_OFFSET))(this);
	}

	::System::Void set_WrittenCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E69069233E5E05B8_SET_WRITTENCOUNT_OFFSET))(this, a1);
	}
};
