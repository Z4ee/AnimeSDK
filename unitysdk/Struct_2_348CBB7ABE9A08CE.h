#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/AvatarInstanceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_348CBB7ABE9A08CE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xD2B70)
#define STRUCT_2_348CBB7ABE9A08CE_EQUALS_OFFSET UNITYSDK_OFFSET(0xD2B10)
#define STRUCT_2_348CBB7ABE9A08CE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD2B80)
#define STRUCT_2_348CBB7ABE9A08CE_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define STRUCT_2_348CBB7ABE9A08CE_GET_INSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define STRUCT_2_348CBB7ABE9A08CE_METHOD_2_502C0C74DDECD92A_1_OFFSET UNITYSDK_OFFSET(0x9BB2610)
#define STRUCT_2_348CBB7ABE9A08CE_METHOD_2_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0x9BB2590)
#define STRUCT_2_348CBB7ABE9A08CE__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)
#define STRUCT_2_348CBB7ABE9A08CE___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xD2B90)
#define STRUCT_2_348CBB7ABE9A08CE___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD2BF0)

inline static constexpr unsigned int Struct_2_348CBB7ABE9A08CE_TypeDefinitionIndex = 47916;

struct alignas(4) Struct_2_348CBB7ABE9A08CE
{
	::RPG::AvatarSystem::AvatarInstanceType _InstanceType_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::AvatarSystem::AvatarInstanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarInstanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_348CBB7ABE9A08CE__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::AvatarInstanceType get_InstanceType()
	{
		return ((::RPG::AvatarSystem::AvatarInstanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_348CBB7ABE9A08CE_GET_INSTANCETYPE_OFFSET))(this);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_348CBB7ABE9A08CE_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_348CBB7ABE9A08CE a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_348CBB7ABE9A08CE))((::PBYTE)hIl2Cpp + STRUCT_2_348CBB7ABE9A08CE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_348CBB7ABE9A08CE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_348CBB7ABE9A08CE_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A(::Struct_2_348CBB7ABE9A08CE a1, ::Struct_2_348CBB7ABE9A08CE a2)
	{
		return ((::System::Boolean(*)(::Struct_2_348CBB7ABE9A08CE, ::Struct_2_348CBB7ABE9A08CE))((::PBYTE)hIl2Cpp + STRUCT_2_348CBB7ABE9A08CE_METHOD_2_502C0C74DDECD92A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A_1(::Struct_2_348CBB7ABE9A08CE a1, ::Struct_2_348CBB7ABE9A08CE a2)
	{
		return ((::System::Boolean(*)(::Struct_2_348CBB7ABE9A08CE, ::Struct_2_348CBB7ABE9A08CE))((::PBYTE)hIl2Cpp + STRUCT_2_348CBB7ABE9A08CE_METHOD_2_502C0C74DDECD92A_1_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_348CBB7ABE9A08CE___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_348CBB7ABE9A08CE___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
