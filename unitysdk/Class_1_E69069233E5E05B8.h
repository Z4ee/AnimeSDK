#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define CLASS_1_E69069233E5E05B8_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1A55E2A0)
#define CLASS_1_E69069233E5E05B8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A55E920)
#define CLASS_1_E69069233E5E05B8_GETMEMORY_OFFSET UNITYSDK_OFFSET(0x1A55E730)
#define CLASS_1_E69069233E5E05B8_GETSPAN_OFFSET UNITYSDK_OFFSET(0x1A55E390)
#define CLASS_1_E69069233E5E05B8_GET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x1A55EB60)
#define CLASS_1_E69069233E5E05B8_METHOD_1_301A0A26D1FB9428_OFFSET UNITYSDK_OFFSET(0x1A55E9C0)
#define CLASS_1_E69069233E5E05B8_METHOD_1_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x1A55E800)
#define CLASS_1_E69069233E5E05B8_METHOD_1_B433DD4DC78D168A_OFFSET UNITYSDK_OFFSET(0x1A55E1A0)
#define CLASS_1_E69069233E5E05B8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A55E970)
#define CLASS_1_E69069233E5E05B8_METHOD_1_EF1FCC3074463C28_OFFSET UNITYSDK_OFFSET(0x1A55EA70)
#define CLASS_1_E69069233E5E05B8_METHOD_1_FC71486C26B5959F_OFFSET UNITYSDK_OFFSET(0x1A55E4A0)
#define CLASS_1_E69069233E5E05B8_SET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x1A55EB70)
#define CLASS_1_E69069233E5E05B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A55EB80)

inline static constexpr unsigned int Class_1_E69069233E5E05B8_TypeDefinitionIndex = 36204;

class Class_1_E69069233E5E05B8 : public ::System::Object
{
public:
	// static const ::System::Int32 FGOAHKLMKID = 0x40; // 0x0
	::Il2CppArray<::System::Byte>* MFAJGGDPION; // 0x10
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
