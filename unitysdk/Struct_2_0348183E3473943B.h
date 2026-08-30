#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define STRUCT_2_0348183E3473943B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B743A0)
#define STRUCT_2_0348183E3473943B_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B74370)
#define STRUCT_2_0348183E3473943B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B74470)
#define STRUCT_2_0348183E3473943B_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x5F00)
#define STRUCT_2_0348183E3473943B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B74360)
#define STRUCT_2_0348183E3473943B__CTOR_OFFSET UNITYSDK_OFFSET(0x3B74320)

inline static constexpr unsigned int Struct_2_0348183E3473943B_TypeDefinitionIndex = 35709;

struct alignas(4) Struct_2_0348183E3473943B
{
	::System::Int32 JGEJHLKFPOA; // 0x10
	::System::Int32 FGNKGMKHAIL; // 0x14
	::System::Int32 HEAMMDKBHOG; // 0x18
	::System::Int32 IHNHKFMECFJ; // 0x1C
	::System::Int32 KNDFJPKHIIF; // 0x20
	::System::Int32 HEFKPBBGLEF; // 0x24
	::System::Int32 DDMNMHKBMDL; // 0x28
	::System::Int32 PBKMJMFACIM; // 0x2C
	::System::Int32 MEHGOMBAAPC; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_0348183E3473943B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + STRUCT_2_0348183E3473943B__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0348183E3473943B_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_0348183E3473943B a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0348183E3473943B))((::PBYTE)hIl2Cpp + STRUCT_2_0348183E3473943B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0348183E3473943B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0348183E3473943B_GETHASHCODE_OFFSET))(this);
	}
};
