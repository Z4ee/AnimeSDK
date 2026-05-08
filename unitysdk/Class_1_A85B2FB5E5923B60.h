#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::Animation { class NPCUnionAnimator_NpcTransformCache; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define CLASS_1_A85B2FB5E5923B60_METHOD_1_F6C48622ED52A6DD_OFFSET UNITYSDK_OFFSET(0x130738D0)
#define CLASS_1_A85B2FB5E5923B60_PROVIDECHARACTERRENDERINGTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x130730C0)
#define CLASS_1_A85B2FB5E5923B60_RELEASE_OFFSET UNITYSDK_OFFSET(0x130737A0)
#define CLASS_1_A85B2FB5E5923B60__CCTOR_OFFSET UNITYSDK_OFFSET(0x13073850)
#define CLASS_1_A85B2FB5E5923B60__CTOR_OFFSET UNITYSDK_OFFSET(0x13073840)

inline static constexpr unsigned int Class_1_A85B2FB5E5923B60_TypeDefinitionIndex = 67748;

class Class_1_A85B2FB5E5923B60 : public ::System::Object
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A85B2FB5E5923B60_TypeDefinitionIndex)->GetStaticField(0x30420);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Field_1_1()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A85B2FB5E5923B60_TypeDefinitionIndex)->GetStaticField(0x30428);
	}
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* Field_1_3; // 0x10
	::Class_3_F2DAD7F45F518868* Field_1_2; // 0x18
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A85B2FB5E5923B60__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A85B2FB5E5923B60__CCTOR_OFFSET))();
	}

	::System::Void ProvideCharacterRenderingTransforms(::UnityEngine::Vector3& a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_A85B2FB5E5923B60_PROVIDECHARACTERRENDERINGTRANSFORMS_OFFSET))(this, a1, a2);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A85B2FB5E5923B60_RELEASE_OFFSET))(this);
	}

	::System::Void Method_1_F6C48622ED52A6DD(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_1_A85B2FB5E5923B60_METHOD_1_F6C48622ED52A6DD_OFFSET))(this, a1);
	}
};
