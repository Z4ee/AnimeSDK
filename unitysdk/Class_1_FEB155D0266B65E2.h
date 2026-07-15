#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CrowdAnimator { class SkinnedMeshData; }
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_FEB155D0266B65E2_METHOD_1_3BC9430E920E18AE_OFFSET UNITYSDK_OFFSET(0x172032F0)
#define CLASS_1_FEB155D0266B65E2_METHOD_1_8B50C99A62E03A3E_OFFSET UNITYSDK_OFFSET(0x17203290)
#define CLASS_1_FEB155D0266B65E2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17203980)

inline static constexpr unsigned int Class_1_FEB155D0266B65E2_TypeDefinitionIndex = 70320;

class Class_1_FEB155D0266B65E2 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEB155D0266B65E2_TypeDefinitionIndex)->GetStaticField(0x87E0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEB155D0266B65E2_TypeDefinitionIndex)->GetStaticField(0x87E1);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEB155D0266B65E2_TypeDefinitionIndex)->GetStaticField(0x87E4);
	}
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
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x40; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x30; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x20; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x10; // 0x0
	// static const ::System::Single Field_1_24; // 0x0
	// static const ::System::Single Field_1_25; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x400; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x20; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x20; // 0x0
	// static const ::System::Single Field_1_29; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEB155D0266B65E2__CCTOR_OFFSET))();
	}

	static ::UnityEngine::ComputeShader* Method_1_8B50C99A62E03A3E(::System::String* a1)
	{
		return ((::UnityEngine::ComputeShader*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FEB155D0266B65E2_METHOD_1_8B50C99A62E03A3E_OFFSET))(a1);
	}

	static ::UnityEngine::Texture2D* Method_1_3BC9430E920E18AE(::UnityEngine::Mesh* a1, ::RPG::Client::CrowdAnimator::SkinnedMeshData* a2)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Mesh*, ::RPG::Client::CrowdAnimator::SkinnedMeshData*))((::PBYTE)hIl2Cpp + CLASS_1_FEB155D0266B65E2_METHOD_1_3BC9430E920E18AE_OFFSET))(a1, a2);
	}
};
