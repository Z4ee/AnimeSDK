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

#define CLASS_4_417C7B46A4074E8A_METHOD_4_4F458FCE35C24499_OFFSET UNITYSDK_OFFSET(0x16C9A7A0)
#define CLASS_4_417C7B46A4074E8A_METHOD_4_6302ED79A2E71E8B_OFFSET UNITYSDK_OFFSET(0x16C9A470)
#define CLASS_4_417C7B46A4074E8A_METHOD_4_B7A3ACD6F29408C2_OFFSET UNITYSDK_OFFSET(0x16C9A610)
#define CLASS_4_417C7B46A4074E8A_METHOD_4_E574C73D1D4F7611_OFFSET UNITYSDK_OFFSET(0x16C9AC70)
#define CLASS_4_417C7B46A4074E8A__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C9B520)
#define CLASS_4_417C7B46A4074E8A__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9B4E0)
#define CLASS_4_417C7B46A4074E8A__INTERPOLATERES_B__11_0_OFFSET UNITYSDK_OFFSET(0x16C9B5A0)

inline static constexpr unsigned int Class_4_417C7B46A4074E8A_TypeDefinitionIndex = 47640;

class Class_4_417C7B46A4074E8A : public ::Class_3_3B76BCE1DE5BE597<::UnityEngine::Texture*>
{
public:
	static ::UnityEngine::Texture** StaticGet_Field_4_0()
	{
		return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0x3830);
	}
	static ::System::Int32* StaticGet_Field_4_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0x2720);
	}
	static ::System::Int32* StaticGet_Field_4_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0x2724);
	}
	static ::System::Int32* StaticGet_Field_4_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0x2728);
	}
	static ::System::Int32* StaticGet_Field_4_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0x272C);
	}
	static ::System::Int32* StaticGet_Field_4_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0x2730);
	}
	static ::System::Int32* StaticGet_Field_4_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0x2734);
	}
	::Class_1_6BB3CCD14C3350D4* Field_4_7; // 0x40
	::UnityEngine::ComputeShader* Field_4_8; // 0x48
	::UnityEngine::RenderTexture* Field_4_9; // 0x50
	::UnityEngine::Vector2Int Field_4_10; // 0x58
	::System::Single Field_4_11; // 0x60
	::RPG::GameCore::GraphicQuality Field_4_12; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A__CCTOR_OFFSET))();
	}

	::UnityEngine::Texture* Method_4_6302ED79A2E71E8B()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A_METHOD_4_6302ED79A2E71E8B_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_4_B7A3ACD6F29408C2()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A_METHOD_4_B7A3ACD6F29408C2_OFFSET))(this);
	}

	::System::Void Method_4_4F458FCE35C24499(::EnviromentSystemV2Space::ImageCurveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::ImageCurveAsset*))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A_METHOD_4_4F458FCE35C24499_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_4_E574C73D1D4F7611(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A_METHOD_4_E574C73D1D4F7611_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _InterpolateRes_b__11_0(::UnityEngine::ComputeShader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + CLASS_4_417C7B46A4074E8A__INTERPOLATERES_B__11_0_OFFSET))(this, a1);
	}
};
