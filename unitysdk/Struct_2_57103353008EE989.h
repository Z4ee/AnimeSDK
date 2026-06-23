#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileEntryInfo.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileInfo.h"
#include "unitysdk/Enum_3_13BF739DB2F051E5.h"
#include "unitysdk/Enum_3_F68459D8B2F02998.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_57103353008EE989_METHOD_2_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STRUCT_2_57103353008EE989_METHOD_2_9514D55AD35AC06F_OFFSET UNITYSDK_OFFSET(0x1CF6B330)
#define STRUCT_2_57103353008EE989_METHOD_2_952793CA0F9D3087_OFFSET UNITYSDK_OFFSET(0x1CF6AF80)
#define STRUCT_2_57103353008EE989_METHOD_2_9BAF6D2146BD16A1_OFFSET UNITYSDK_OFFSET(0x9C9720)
#define STRUCT_2_57103353008EE989_METHOD_2_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STRUCT_2_57103353008EE989_METHOD_2_A96DCA30C6927810_2_OFFSET UNITYSDK_OFFSET(0x9C9740)
#define STRUCT_2_57103353008EE989_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x32E600)
#define STRUCT_2_57103353008EE989_METHOD_2_DCF0DE0FE0190569_OFFSET UNITYSDK_OFFSET(0x3E6330)
#define STRUCT_2_57103353008EE989_METHOD_2_E20EDE31D2933C97_OFFSET UNITYSDK_OFFSET(0x1CF6B700)
#define STRUCT_2_57103353008EE989__CTOR_OFFSET UNITYSDK_OFFSET(0x9C9690)

inline static constexpr unsigned int Struct_2_57103353008EE989_TypeDefinitionIndex = 33927;

struct alignas(8) Struct_2_57103353008EE989
{
	::Enum_3_F68459D8B2F02998 Field_2_0; // 0x10
	::System::Int64 Field_2_1; // 0x18
	::BinaryBundleLib::Runtime::BinaryBundleFileInfo Field_2_2; // 0x20
	::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo Field_2_3; // 0x38
	::Enum_3_13BF739DB2F051E5 Field_2_4; // 0x60
	::Enum_3_13BF739DB2F051E5 Field_2_5; // 0x64

	::System::Void _ctor(::System::Int64 a1, ::Enum_3_F68459D8B2F02998 a2, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo a3, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo a4, ::Enum_3_13BF739DB2F051E5 a5, ::Enum_3_13BF739DB2F051E5 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::Enum_3_F68459D8B2F02998, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo, ::Enum_3_13BF739DB2F051E5, ::Enum_3_13BF739DB2F051E5))((::PBYTE)hIl2Cpp + STRUCT_2_57103353008EE989__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int64 Method_2_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_57103353008EE989_METHOD_2_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo Method_2_9BAF6D2146BD16A1()
	{
		return ((::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_57103353008EE989_METHOD_2_9BAF6D2146BD16A1_OFFSET))(this);
	}

	::Enum_3_13BF739DB2F051E5 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_13BF739DB2F051E5(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_57103353008EE989_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	static ::Struct_2_57103353008EE989 Method_2_952793CA0F9D3087(::System::Int64 a1, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo a2, ::Enum_3_13BF739DB2F051E5 a3)
	{
		return ((::Struct_2_57103353008EE989(*)(::System::Int64, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Enum_3_13BF739DB2F051E5))((::PBYTE)hIl2Cpp + STRUCT_2_57103353008EE989_METHOD_2_952793CA0F9D3087_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_57103353008EE989 Method_2_9514D55AD35AC06F(::System::Int64 a1, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo a2, ::Enum_3_13BF739DB2F051E5 a3)
	{
		return ((::Struct_2_57103353008EE989(*)(::System::Int64, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo, ::Enum_3_13BF739DB2F051E5))((::PBYTE)hIl2Cpp + STRUCT_2_57103353008EE989_METHOD_2_9514D55AD35AC06F_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_57103353008EE989 Method_2_E20EDE31D2933C97(::System::Int64 a1, ::Enum_3_13BF739DB2F051E5 a2)
	{
		return ((::Struct_2_57103353008EE989(*)(::System::Int64, ::Enum_3_13BF739DB2F051E5))((::PBYTE)hIl2Cpp + STRUCT_2_57103353008EE989_METHOD_2_E20EDE31D2933C97_OFFSET))(a1, a2);
	}

	::Enum_3_F68459D8B2F02998 Method_2_A96DCA30C6927810_1()
	{
		return ((::Enum_3_F68459D8B2F02998(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_57103353008EE989_METHOD_2_A96DCA30C6927810_1_OFFSET))(this);
	}

	::BinaryBundleLib::Runtime::BinaryBundleFileInfo Method_2_DCF0DE0FE0190569()
	{
		return ((::BinaryBundleLib::Runtime::BinaryBundleFileInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_57103353008EE989_METHOD_2_DCF0DE0FE0190569_OFFSET))(this);
	}

	::Enum_3_13BF739DB2F051E5 Method_2_A96DCA30C6927810_2()
	{
		return ((::Enum_3_13BF739DB2F051E5(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_57103353008EE989_METHOD_2_A96DCA30C6927810_2_OFFSET))(this);
	}
};
