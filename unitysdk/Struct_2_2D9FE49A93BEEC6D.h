#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_2D9FE49A93BEEC6D_METHOD_2_86CD02F60F681DF1_OFFSET UNITYSDK_OFFSET(0x13516480)
#define STRUCT_2_2D9FE49A93BEEC6D_METHOD_2_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x7683E0)
#define STRUCT_2_2D9FE49A93BEEC6D_METHOD_2_CDFC4C648E09ED8C_OFFSET UNITYSDK_OFFSET(0x135165E0)
#define STRUCT_2_2D9FE49A93BEEC6D__CTOR_OFFSET UNITYSDK_OFFSET(0x34C7C0)

inline static constexpr unsigned int Struct_2_2D9FE49A93BEEC6D_TypeDefinitionIndex = 50706;

struct alignas(4) Struct_2_2D9FE49A93BEEC6D
{
	::System::Int32 Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2D9FE49A93BEEC6D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_86CD02F60F681DF1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_2D9FE49A93BEEC6D_METHOD_2_86CD02F60F681DF1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_2D9FE49A93BEEC6D>* Method_2_CDFC4C648E09ED8C(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_2D9FE49A93BEEC6D>*(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_2D9FE49A93BEEC6D_METHOD_2_CDFC4C648E09ED8C_OFFSET))(a1);
	}

	::System::Boolean Method_2_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2D9FE49A93BEEC6D_METHOD_2_9B0C43B0B6D3BA9B_OFFSET))(this);
	}
};
