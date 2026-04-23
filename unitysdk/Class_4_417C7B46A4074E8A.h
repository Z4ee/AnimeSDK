#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B76BCE1DE5BE597.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_6BB3CCD14C3350D4;
namespace EnviromentSystemV2Space { class ImageCurveAsset; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define CLASS_4_417C7B46A4074E8A_METHOD_4_6302ED79A2E71E8B_OFFSET UNITYSDK_OFFSET(0x11981A00)
#define CLASS_4_417C7B46A4074E8A_METHOD_4_63FEA79849598753_OFFSET UNITYSDK_OFFSET(0x119818D0)
#define CLASS_4_417C7B46A4074E8A_METHOD_4_B69C8857E861C815_OFFSET UNITYSDK_OFFSET(0x11981BB0)
#define CLASS_4_417C7B46A4074E8A_METHOD_4_E574C73D1D4F7611_OFFSET UNITYSDK_OFFSET(0x11982050)
#define CLASS_4_417C7B46A4074E8A__CCTOR_OFFSET UNITYSDK_OFFSET(0x11982770)
#define CLASS_4_417C7B46A4074E8A__CTOR_OFFSET UNITYSDK_OFFSET(0x11982730)
#define CLASS_4_417C7B46A4074E8A__INTERPOLATERES_B__11_0_OFFSET UNITYSDK_OFFSET(0x11982810)

inline static constexpr unsigned int Class_4_417C7B46A4074E8A_TypeDefinitionIndex = 46092;

class Class_4_417C7B46A4074E8A : public ::Class_3_3B76BCE1DE5BE597<::UnityEngine::Texture*>
{
public:
	static ::UnityEngine::Texture** StaticGet_Field_4_0()
	{
		return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0x2F7F0);
	}
	static ::System::Int32* StaticGet_Field_4_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBE30);
	}
	static ::System::Int32* StaticGet_Field_4_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBE34);
	}
	static ::System::Int32* StaticGet_Field_4_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBE38);
	}
	static ::System::Int32* StaticGet_Field_4_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBE3C);
	}
	static ::System::Int32* StaticGet_Field_4_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBE40);
	}
	static ::System::Int32* StaticGet_Field_4_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBE44);
	}
	::UnityEngine::RenderTexture* Field_4_4; // 0x48
	::UnityEngine::ComputeShader* Field_4_5; // 0x50
	::Class_1_6BB3CCD14C3350D4* Field_4_6; // 0x58
	::RPG::GameCore::GraphicQuality Field_4_3; // 0x60
	::System::Single Field_4_2; // 0x64
	::UnityEngine::Vector2Int Field_4_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A__CCTOR_OFFSET))();
	}

	::UnityEngine::Texture* Method_4_63FEA79849598753()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A_METHOD_4_63FEA79849598753_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_4_6302ED79A2E71E8B()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A_METHOD_4_6302ED79A2E71E8B_OFFSET))(this);
	}

	::System::Void Method_4_B69C8857E861C815(::EnviromentSystemV2Space::ImageCurveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::ImageCurveAsset*))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A_METHOD_4_B69C8857E861C815_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_4_E574C73D1D4F7611(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A_METHOD_4_E574C73D1D4F7611_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _InterpolateRes_b__11_0(::UnityEngine::ComputeShader* obj)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A__INTERPOLATERES_B__11_0_OFFSET))(this, obj);
	}
};
