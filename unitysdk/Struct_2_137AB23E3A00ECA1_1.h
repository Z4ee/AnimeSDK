#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_137AB23E3A00ECA1_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xFE80)
#define STRUCT_2_137AB23E3A00ECA1_1_EQUALS_OFFSET UNITYSDK_OFFSET(0xFE10)
#define STRUCT_2_137AB23E3A00ECA1_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFE90)
#define STRUCT_2_137AB23E3A00ECA1_1_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xACE0)
#define STRUCT_2_137AB23E3A00ECA1_1_GET_REALID_OFFSET UNITYSDK_OFFSET(0xFDF0)
#define STRUCT_2_137AB23E3A00ECA1_1_GET_SKINID_OFFSET UNITYSDK_OFFSET(0xE620)
#define STRUCT_2_137AB23E3A00ECA1_1_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xACF0)
#define STRUCT_2_137AB23E3A00ECA1_1_SET_REALID_OFFSET UNITYSDK_OFFSET(0xFE00)
#define STRUCT_2_137AB23E3A00ECA1_1_SET_SKINID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define STRUCT_2_137AB23E3A00ECA1_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFDE0)

inline static constexpr unsigned int Struct_2_137AB23E3A00ECA1_1_TypeDefinitionIndex = 62483;

struct alignas(4) Struct_2_137AB23E3A00ECA1_1
{
	::System::UInt32 _SkinId_k__BackingField; // 0x10
	::System::UInt32 _RealId_k__BackingField; // 0x14
	::System::UInt32 _EnhancedId_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_SkinId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_GET_SKINID_OFFSET))(this);
	}

	::System::Void set_SkinId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_SET_SKINID_OFFSET))(this, a1);
	}

	::System::UInt32 get_RealId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_GET_REALID_OFFSET))(this);
	}

	::System::Void set_RealId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_SET_REALID_OFFSET))(this, a1);
	}

	::System::UInt32 get_EnhancedId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_GET_ENHANCEDID_OFFSET))(this);
	}

	::System::Void set_EnhancedId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_SET_ENHANCEDID_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_137AB23E3A00ECA1_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1_1))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_GETHASHCODE_OFFSET))(this);
	}
};
