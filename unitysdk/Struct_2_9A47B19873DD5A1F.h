#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_9A47B19873DD5A1F_METHOD_2_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x807A0)
#define STRUCT_2_9A47B19873DD5A1F_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x80890)
#define STRUCT_2_9A47B19873DD5A1F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x80830)
#define STRUCT_2_9A47B19873DD5A1F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x80720)
#define STRUCT_2_9A47B19873DD5A1F__CTOR_OFFSET UNITYSDK_OFFSET(0x80670)

inline static constexpr unsigned int Struct_2_9A47B19873DD5A1F_TypeDefinitionIndex = 72286;

struct alignas(8) Struct_2_9A47B19873DD5A1F
{
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::Boolean Field_2_3; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_9A47B19873DD5A1F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_9A47B19873DD5A1F__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_2_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9A47B19873DD5A1F_METHOD_2_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9A47B19873DD5A1F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9A47B19873DD5A1F_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
