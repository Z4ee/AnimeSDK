#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::Animation { class NPCUnionAnimator_NpcTransformCache; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define CLASS_1_66233DAA55556713_METHOD_1_E42171B7BEA6D570_OFFSET UNITYSDK_OFFSET(0x17517EC0)
#define CLASS_1_66233DAA55556713_PROVIDECHARACTERRENDERINGTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x175176C0)
#define CLASS_1_66233DAA55556713_RELEASE_OFFSET UNITYSDK_OFFSET(0x17517D90)
#define CLASS_1_66233DAA55556713__CCTOR_OFFSET UNITYSDK_OFFSET(0x17517E40)
#define CLASS_1_66233DAA55556713__CTOR_OFFSET UNITYSDK_OFFSET(0x17517E30)

inline static constexpr unsigned int Class_1_66233DAA55556713_TypeDefinitionIndex = 53799;

class Class_1_66233DAA55556713 : public ::System::Object
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66233DAA55556713_TypeDefinitionIndex)->GetStaticField(0x38B30);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Field_1_7()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66233DAA55556713_TypeDefinitionIndex)->GetStaticField(0x38B38);
	}
	::Class_3_F2DAD7F45F518868* Field_1_6; // 0x10
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* Field_1_4; // 0x18
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66233DAA55556713__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66233DAA55556713__CCTOR_OFFSET))();
	}

	::System::Void ProvideCharacterRenderingTransforms(::UnityEngine::Vector3& a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_66233DAA55556713_PROVIDECHARACTERRENDERINGTRANSFORMS_OFFSET))(this, a1, a2);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66233DAA55556713_RELEASE_OFFSET))(this);
	}

	::System::Void Method_1_E42171B7BEA6D570(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_1_66233DAA55556713_METHOD_1_E42171B7BEA6D570_OFFSET))(this, a1);
	}
};
