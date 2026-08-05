#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96EDEAC6CE722CBE.h"
#include "unitysdk/Struct_2_5CFCC37B3A5F59B3.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_A22EA1CA16A250CA_METHOD_2_021AE0D0A2AA70A4_OFFSET UNITYSDK_OFFSET(0x7BE4C0)
#define STRUCT_2_A22EA1CA16A250CA_METHOD_2_2776802E84796FF2_OFFSET UNITYSDK_OFFSET(0x7BE510)
#define STRUCT_2_A22EA1CA16A250CA_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x7BE520)
#define STRUCT_2_A22EA1CA16A250CA_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_A22EA1CA16A250CA_METHOD_2_F34E4C09054C6E37_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define STRUCT_2_A22EA1CA16A250CA__CTOR_OFFSET UNITYSDK_OFFSET(0x7BE4A0)

inline static constexpr unsigned int Struct_2_A22EA1CA16A250CA_TypeDefinitionIndex = 69110;

struct alignas(8) Struct_2_A22EA1CA16A250CA
{
	::System::Int32 Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* Field_2_7; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_5CFCC37B3A5F59B3>* Field_2_6; // 0x20
	::System::String* Field_2_5; // 0x28
	::System::Boolean Field_2_4; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a2, ::System::Collections::Generic::List_1<::Struct_2_5CFCC37B3A5F59B3>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*, ::System::Collections::Generic::List_1<::Struct_2_5CFCC37B3A5F59B3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_A22EA1CA16A250CA__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt16 Method_2_021AE0D0A2AA70A4(::System::UInt16 a1)
	{
		return ((::System::UInt16(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STRUCT_2_A22EA1CA16A250CA_METHOD_2_021AE0D0A2AA70A4_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A22EA1CA16A250CA_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_2776802E84796FF2(::Enum_3_96EDEAC6CE722CBE a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96EDEAC6CE722CBE, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A22EA1CA16A250CA_METHOD_2_2776802E84796FF2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::List_1<::Struct_2_5CFCC37B3A5F59B3>* Method_2_F34E4C09054C6E37()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_5CFCC37B3A5F59B3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A22EA1CA16A250CA_METHOD_2_F34E4C09054C6E37_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A22EA1CA16A250CA_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
