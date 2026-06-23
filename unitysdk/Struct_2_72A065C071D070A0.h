#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_72A065C071D070A0_Enum_3_6CCB89F329770712.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Collider; }

#define STRUCT_2_72A065C071D070A0_METHOD_2_B86A36165663C617_OFFSET UNITYSDK_OFFSET(0x7EE250)
#define STRUCT_2_72A065C071D070A0_METHOD_2_C80A09D7F6DDC57F_OFFSET UNITYSDK_OFFSET(0x14DF8E30)
#define STRUCT_2_72A065C071D070A0_METHOD_2_EFBDA17C7FDA4DD3_OFFSET UNITYSDK_OFFSET(0x7EE260)
#define STRUCT_2_72A065C071D070A0__CTOR_OFFSET UNITYSDK_OFFSET(0x7EE1F0)

inline static constexpr unsigned int Struct_2_72A065C071D070A0_TypeDefinitionIndex = 80842;

struct alignas(8) Struct_2_72A065C071D070A0
{
	::UnityEngine::Collider* Field_2_0; // 0x10
	::Struct_2_72A065C071D070A0_Enum_3_6CCB89F329770712 Field_2_1; // 0x18
	::UnityEngine::Matrix4x4 Field_2_2; // 0x1C

	::System::Void _ctor(::UnityEngine::Collider* a1, ::Struct_2_72A065C071D070A0_Enum_3_6CCB89F329770712 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::Struct_2_72A065C071D070A0_Enum_3_6CCB89F329770712))((::PBYTE)hIl2Cpp + STRUCT_2_72A065C071D070A0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B86A36165663C617(::UnityEngine::Matrix4x4& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + STRUCT_2_72A065C071D070A0_METHOD_2_B86A36165663C617_OFFSET))(this, a1);
	}

	/*
	::System::Boolean Method_2_EFBDA17C7FDA4DD3(::UnityEngine::RaycastHit& a1, ::UnityEngine::Matrix4x4& a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_72A065C071D070A0_METHOD_2_EFBDA17C7FDA4DD3_OFFSET))(this, a1, a2, a3, a4, a5);
	}
	*/

	static ::System::Boolean Method_2_C80A09D7F6DDC57F(::UnityEngine::Collider* a1, ::Struct_2_72A065C071D070A0& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::Struct_2_72A065C071D070A0&))((::PBYTE)hIl2Cpp + STRUCT_2_72A065C071D070A0_METHOD_2_C80A09D7F6DDC57F_OFFSET))(a1, a2);
	}
};
