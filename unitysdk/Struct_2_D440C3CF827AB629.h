#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_D440C3CF827AB629_METHOD_2_0EAFE72DD9AA7D3A_OFFSET UNITYSDK_OFFSET(0x84FE70)
#define STRUCT_2_D440C3CF827AB629_METHOD_2_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0x84FD00)
#define STRUCT_2_D440C3CF827AB629_METHOD_2_E3224D4A48D53F34_OFFSET UNITYSDK_OFFSET(0x84FD70)
#define STRUCT_2_D440C3CF827AB629__CTOR_OFFSET UNITYSDK_OFFSET(0x84FC90)

inline static constexpr unsigned int Struct_2_D440C3CF827AB629_TypeDefinitionIndex = 62062;

struct alignas(8) Struct_2_D440C3CF827AB629
{
	::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::Struct_2_97F90E6FB4F6D559 Field_2_3; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*))((::PBYTE)hIl2Cpp + STRUCT_2_D440C3CF827AB629__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9AAE950C6F28BA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D440C3CF827AB629_METHOD_2_D9AAE950C6F28BA6_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3224D4A48D53F34(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D440C3CF827AB629_METHOD_2_E3224D4A48D53F34_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EAFE72DD9AA7D3A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D440C3CF827AB629_METHOD_2_0EAFE72DD9AA7D3A_OFFSET))(this, a1);
	}
};
