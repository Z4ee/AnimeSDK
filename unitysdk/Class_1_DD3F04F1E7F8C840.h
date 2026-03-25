#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CrowdAnimator { class SkinnedMeshData; }
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_DD3F04F1E7F8C840_METHOD_1_1B0D3B386C81DA39_OFFSET UNITYSDK_OFFSET(0x10CD70C0)
#define CLASS_1_DD3F04F1E7F8C840_METHOD_1_5983C37099894977_OFFSET UNITYSDK_OFFSET(0x10CD6F10)
#define CLASS_1_DD3F04F1E7F8C840__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CD7950)

inline static constexpr unsigned int Class_1_DD3F04F1E7F8C840_TypeDefinitionIndex = 60440;

class Class_1_DD3F04F1E7F8C840 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD3F04F1E7F8C840_TypeDefinitionIndex)->GetStaticField(0x11820);
	}
	static ::System::Boolean* StaticGet_Field_1_29()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD3F04F1E7F8C840_TypeDefinitionIndex)->GetStaticField(0x11824);
	}
	static ::System::Boolean* StaticGet_Field_1_28()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD3F04F1E7F8C840_TypeDefinitionIndex)->GetStaticField(0x11825);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x40; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x30; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x20; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x10; // 0x0
	// static const ::System::Single Field_1_21; // 0x0
	// static const ::System::Single Field_1_22; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x400; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x20; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x20; // 0x0
	// static const ::System::Single Field_1_26; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD3F04F1E7F8C840__CCTOR_OFFSET))();
	}

	static ::UnityEngine::ComputeShader* Method_1_5983C37099894977(::System::String* a1)
	{
		return ((::UnityEngine::ComputeShader*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD3F04F1E7F8C840_METHOD_1_5983C37099894977_OFFSET))(a1);
	}

	static ::UnityEngine::Texture2D* Method_1_1B0D3B386C81DA39(::UnityEngine::Mesh* a1, ::RPG::Client::CrowdAnimator::SkinnedMeshData* a2)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Mesh*, ::RPG::Client::CrowdAnimator::SkinnedMeshData*))((::PBYTE)hIl2Cpp + CLASS_1_DD3F04F1E7F8C840_METHOD_1_1B0D3B386C81DA39_OFFSET))(a1, a2);
	}
};
