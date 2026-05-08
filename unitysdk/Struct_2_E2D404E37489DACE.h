#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_820D7C7CD0571B34.h"
#include "unitysdk/Enum_3_9DFCA80EDE781DDA.h"
#include "unitysdk/Struct_2_1A37120368FD2FC8_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_E2D404E37489DACE_METHOD_2_1F71629802500E84_1_OFFSET UNITYSDK_OFFSET(0x75AD20)
#define STRUCT_2_E2D404E37489DACE_METHOD_2_1F71629802500E84_OFFSET UNITYSDK_OFFSET(0x75AD10)
#define STRUCT_2_E2D404E37489DACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F1C410)

inline static constexpr unsigned int Struct_2_E2D404E37489DACE_TypeDefinitionIndex = 52490;

struct alignas(8) Struct_2_E2D404E37489DACE
{
	static ::Struct_2_E2D404E37489DACE* StaticGet_Field_2_1()
	{
		return (::Struct_2_E2D404E37489DACE*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_E2D404E37489DACE_TypeDefinitionIndex)->GetStaticField(0x413D0);
	}
	::System::Collections::Generic::List_1<::Struct_2_1A37120368FD2FC8_1>* Field_2_0; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E2D404E37489DACE__CCTOR_OFFSET))();
	}

	::System::Void Method_2_1F71629802500E84(::System::Int32 a1, ::Enum_3_820D7C7CD0571B34 a2, ::Enum_3_9DFCA80EDE781DDA a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_820D7C7CD0571B34, ::Enum_3_9DFCA80EDE781DDA))((::PBYTE)hIl2Cpp + STRUCT_2_E2D404E37489DACE_METHOD_2_1F71629802500E84_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1F71629802500E84_1(::System::Int32 a1, ::Enum_3_820D7C7CD0571B34 a2, ::Enum_3_9DFCA80EDE781DDA a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_820D7C7CD0571B34, ::Enum_3_9DFCA80EDE781DDA))((::PBYTE)hIl2Cpp + STRUCT_2_E2D404E37489DACE_METHOD_2_1F71629802500E84_1_OFFSET))(this, a1, a2, a3);
	}
};
