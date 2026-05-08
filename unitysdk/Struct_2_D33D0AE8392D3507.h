#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Struct_2_2C5A03A90BB5E900_Enum_3_523767271D6B9F26.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_D33D0AE8392D3507_EQUALS_OFFSET UNITYSDK_OFFSET(0x717AB0)
#define STRUCT_2_D33D0AE8392D3507_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x717B00)
#define STRUCT_2_D33D0AE8392D3507_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x717AF0)

inline static constexpr unsigned int Struct_2_D33D0AE8392D3507_TypeDefinitionIndex = 76457;

struct alignas(8) Struct_2_D33D0AE8392D3507
{
	::System::Int32 Field_2_0; // 0x10
	::System::UInt64 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20
	::Foundation::ViewObject::GroupMemberIdentifier Field_2_3; // 0x24
	::Struct_2_2C5A03A90BB5E900_Enum_3_523767271D6B9F26 Field_2_4; // 0x2C
	::System::Int32 Field_2_5; // 0x30
	::System::Int32 Field_2_6; // 0x34
	::UnityEngine::Vector3 Field_2_7; // 0x38

	::System::Boolean Equals(::Struct_2_D33D0AE8392D3507 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D33D0AE8392D3507))((::PBYTE)hIl2Cpp + STRUCT_2_D33D0AE8392D3507_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D33D0AE8392D3507_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D33D0AE8392D3507_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}
};
