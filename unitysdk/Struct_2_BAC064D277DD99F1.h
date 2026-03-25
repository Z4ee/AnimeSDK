#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_BAC064D277DD99F1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x789C0)
#define STRUCT_2_BAC064D277DD99F1_EQUALS_OFFSET UNITYSDK_OFFSET(0x78960)
#define STRUCT_2_BAC064D277DD99F1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x789D0)
#define STRUCT_2_BAC064D277DD99F1_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define STRUCT_2_BAC064D277DD99F1_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define STRUCT_2_BAC064D277DD99F1_METHOD_2_502C0C74DDECD92A_1_OFFSET UNITYSDK_OFFSET(0x8C66B20)
#define STRUCT_2_BAC064D277DD99F1_METHOD_2_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0x8C66AA0)
#define STRUCT_2_BAC064D277DD99F1__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)
#define STRUCT_2_BAC064D277DD99F1___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x789E0)
#define STRUCT_2_BAC064D277DD99F1___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x78A40)

inline static constexpr unsigned int Struct_2_BAC064D277DD99F1_TypeDefinitionIndex = 42011;

struct alignas(4) Struct_2_BAC064D277DD99F1
{
	::RPG::GameCore::AvatarSkillTreeAnchorType _AnchorType_k__BackingField; // 0x10
	::System::UInt32 _Level_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::GameCore::AvatarSkillTreeAnchorType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AvatarSkillTreeAnchorType get_AnchorType()
	{
		return ((::RPG::GameCore::AvatarSkillTreeAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_GET_ANCHORTYPE_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_GET_LEVEL_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_BAC064D277DD99F1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BAC064D277DD99F1))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A(::Struct_2_BAC064D277DD99F1 a1, ::Struct_2_BAC064D277DD99F1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BAC064D277DD99F1, ::Struct_2_BAC064D277DD99F1))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_METHOD_2_502C0C74DDECD92A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A_1(::Struct_2_BAC064D277DD99F1 a1, ::Struct_2_BAC064D277DD99F1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BAC064D277DD99F1, ::Struct_2_BAC064D277DD99F1))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_METHOD_2_502C0C74DDECD92A_1_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
