#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_06CE88B3E17AB3C7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7BD1D0)
#define STRUCT_2_06CE88B3E17AB3C7_EQUALS_OFFSET UNITYSDK_OFFSET(0x7BD190)
#define STRUCT_2_06CE88B3E17AB3C7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7BD2D0)
#define STRUCT_2_06CE88B3E17AB3C7_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7BD370)
#define STRUCT_2_06CE88B3E17AB3C7_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7BD410)
#define STRUCT_2_06CE88B3E17AB3C7_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7BD2F0)
#define STRUCT_2_06CE88B3E17AB3C7_METHOD_2_B36A5D3B03598E6E_OFFSET UNITYSDK_OFFSET(0x1390C100)
#define STRUCT_2_06CE88B3E17AB3C7_METHOD_2_B7592B2BDF345A00_OFFSET UNITYSDK_OFFSET(0x7BD120)
#define STRUCT_2_06CE88B3E17AB3C7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7BD2E0)
#define STRUCT_2_06CE88B3E17AB3C7__CTOR_OFFSET UNITYSDK_OFFSET(0x7BD130)

inline static constexpr unsigned int Struct_2_06CE88B3E17AB3C7_TypeDefinitionIndex = 77903;

struct alignas(8) Struct_2_06CE88B3E17AB3C7
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x28
	::System::Int32 Field_2_3; // 0x2C
	::UnityEngine::QueryTriggerInteraction Field_2_4; // 0x30
	::MoleMole::EntityHandle Field_2_5; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single& a3, ::System::Int32& a4, ::UnityEngine::QueryTriggerInteraction& a5, ::MoleMole::EntityHandle a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Int32&, ::UnityEngine::QueryTriggerInteraction&, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + STRUCT_2_06CE88B3E17AB3C7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_B7592B2BDF345A00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_06CE88B3E17AB3C7_METHOD_2_B7592B2BDF345A00_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_06CE88B3E17AB3C7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_06CE88B3E17AB3C7))((::PBYTE)hIl2Cpp + STRUCT_2_06CE88B3E17AB3C7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_06CE88B3E17AB3C7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_06CE88B3E17AB3C7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_06CE88B3E17AB3C7_TOSTRING_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_06CE88B3E17AB3C7_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_06CE88B3E17AB3C7_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_06CE88B3E17AB3C7_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::Struct_2_06CE88B3E17AB3C7 Method_2_B36A5D3B03598E6E(::MoleMole::EntityHandle& a1)
	{
		return ((::Struct_2_06CE88B3E17AB3C7(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + STRUCT_2_06CE88B3E17AB3C7_METHOD_2_B36A5D3B03598E6E_OFFSET))(a1);
	}
};
