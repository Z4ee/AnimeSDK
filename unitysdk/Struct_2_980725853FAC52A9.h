#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/AvatarInstanceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_980725853FAC52A9_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3AEA270)
#define STRUCT_2_980725853FAC52A9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AEA240)
#define STRUCT_2_980725853FAC52A9_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AEA1D0)
#define STRUCT_2_980725853FAC52A9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AEA1C0)
#define STRUCT_2_980725853FAC52A9_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x784260)
#define STRUCT_2_980725853FAC52A9_GET_INSTANCESUBID_OFFSET UNITYSDK_OFFSET(0x12370)
#define STRUCT_2_980725853FAC52A9_GET_INSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x19050)
#define STRUCT_2_980725853FAC52A9_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18BE1500)
#define STRUCT_2_980725853FAC52A9_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18BE14C0)
#define STRUCT_2_980725853FAC52A9_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3AEA1A0)
#define STRUCT_2_980725853FAC52A9_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xB596A0)
#define STRUCT_2_980725853FAC52A9_SET_INSTANCESUBID_OFFSET UNITYSDK_OFFSET(0x379F970)
#define STRUCT_2_980725853FAC52A9_SET_INSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x18EB0)
#define STRUCT_2_980725853FAC52A9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AEA190)
#define STRUCT_2_980725853FAC52A9__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0)

inline static constexpr unsigned int Struct_2_980725853FAC52A9_TypeDefinitionIndex = 52188;

struct alignas(4) Struct_2_980725853FAC52A9
{
	::RPG::AvatarSystem::AvatarInstanceType _InstanceType_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x14
	::System::UInt32 _InstanceSubID_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::AvatarSystem::AvatarInstanceType a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarInstanceType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::AvatarSystem::AvatarInstanceType get_InstanceType()
	{
		return ((::RPG::AvatarSystem::AvatarInstanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_GET_INSTANCETYPE_OFFSET))(this);
	}

	::System::Void set_InstanceType(::RPG::AvatarSystem::AvatarInstanceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarInstanceType))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_SET_INSTANCETYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_SET_INSTANCEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceSubID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_GET_INSTANCESUBID_OFFSET))(this);
	}

	::System::Void set_InstanceSubID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_SET_INSTANCESUBID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_980725853FAC52A9 a1, ::Struct_2_980725853FAC52A9 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_980725853FAC52A9, ::Struct_2_980725853FAC52A9))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_980725853FAC52A9 a1, ::Struct_2_980725853FAC52A9 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_980725853FAC52A9, ::Struct_2_980725853FAC52A9))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_980725853FAC52A9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_980725853FAC52A9))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::RPG::AvatarSystem::AvatarInstanceType& a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarInstanceType&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
	}
};
