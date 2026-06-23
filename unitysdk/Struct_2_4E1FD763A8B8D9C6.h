#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_4E1FD763A8B8D9C6_METHOD_2_037FB9129FA6685E_1_OFFSET UNITYSDK_OFFSET(0x8796A0)
#define STRUCT_2_4E1FD763A8B8D9C6_METHOD_2_037FB9129FA6685E_2_OFFSET UNITYSDK_OFFSET(0x879730)
#define STRUCT_2_4E1FD763A8B8D9C6_METHOD_2_037FB9129FA6685E_OFFSET UNITYSDK_OFFSET(0x879610)
#define STRUCT_2_4E1FD763A8B8D9C6_METHOD_2_B1C07CF4ADD1F8DA_OFFSET UNITYSDK_OFFSET(0x1A0AEEC0)
#define STRUCT_2_4E1FD763A8B8D9C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0AED00)

inline static constexpr unsigned int Struct_2_4E1FD763A8B8D9C6_TypeDefinitionIndex = 63446;

struct alignas(8) Struct_2_4E1FD763A8B8D9C6
{
	static ::UnityEngine::AnimationCurve** StaticGet_Field_2_4()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_4E1FD763A8B8D9C6_TypeDefinitionIndex)->GetStaticField(0x47260);
	}
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::UnityEngine::Vector3 Field_2_3; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_4E1FD763A8B8D9C6__CCTOR_OFFSET))();
	}

	::UnityEngine::AnimationCurve* Method_2_037FB9129FA6685E()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4E1FD763A8B8D9C6_METHOD_2_037FB9129FA6685E_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_037FB9129FA6685E_1()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4E1FD763A8B8D9C6_METHOD_2_037FB9129FA6685E_1_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_037FB9129FA6685E_2()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4E1FD763A8B8D9C6_METHOD_2_037FB9129FA6685E_2_OFFSET))(this);
	}

	static ::UnityEngine::AnimationCurve* Method_2_B1C07CF4ADD1F8DA(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_4E1FD763A8B8D9C6_METHOD_2_B1C07CF4ADD1F8DA_OFFSET))(a1);
	}
};
