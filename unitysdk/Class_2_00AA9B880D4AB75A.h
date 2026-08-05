#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_2_00AA9B880D4AB75A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B78260)
#define CLASS_2_00AA9B880D4AB75A_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12B78920)
#define CLASS_2_00AA9B880D4AB75A_METHOD_2_55844C9B246F35E1_OFFSET UNITYSDK_OFFSET(0x12B785B0)
#define CLASS_2_00AA9B880D4AB75A_METHOD_2_66B7486A49B37A3A_OFFSET UNITYSDK_OFFSET(0x12B780C0)
#define CLASS_2_00AA9B880D4AB75A_METHOD_2_99E148EAF19C2DF6_OFFSET UNITYSDK_OFFSET(0x12B78030)
#define CLASS_2_00AA9B880D4AB75A_METHOD_2_C2E812C9305B1BB9_OFFSET UNITYSDK_OFFSET(0x12B77E70)
#define CLASS_2_00AA9B880D4AB75A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B78880)
#define CLASS_2_00AA9B880D4AB75A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12B78340)
#define CLASS_2_00AA9B880D4AB75A__CTOR_OFFSET UNITYSDK_OFFSET(0x12B785A0)

inline static constexpr unsigned int Class_2_00AA9B880D4AB75A_TypeDefinitionIndex = 86802;

class Class_2_00AA9B880D4AB75A : public ::MoleMole::RendererFader
{
public:
	::System::String* Field_2_0; // 0x28
	::UnityEngine::Material* Field_2_6; // 0x30
	::System::Int32 Field_2_5; // 0x38
	::System::Boolean Field_2_7; // 0x3C
	::System::Boolean Field_2_4; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA9B880D4AB75A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C2E812C9305B1BB9(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_00AA9B880D4AB75A_METHOD_2_C2E812C9305B1BB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99E148EAF19C2DF6(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_00AA9B880D4AB75A_METHOD_2_99E148EAF19C2DF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_66B7486A49B37A3A(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_00AA9B880D4AB75A_METHOD_2_66B7486A49B37A3A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA9B880D4AB75A_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA9B880D4AB75A_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_55844C9B246F35E1(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA9B880D4AB75A_METHOD_2_55844C9B246F35E1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA9B880D4AB75A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA9B880D4AB75A_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
