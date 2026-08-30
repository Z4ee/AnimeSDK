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

#define CLASS_4_417C7B46A4074E8A_METHOD_4_4F458FCE35C24499_OFFSET UNITYSDK_OFFSET(0x18B6F820)
#define CLASS_4_417C7B46A4074E8A_METHOD_4_6302ED79A2E71E8B_OFFSET UNITYSDK_OFFSET(0x18B6F4F0)
#define CLASS_4_417C7B46A4074E8A_METHOD_4_B7A3ACD6F29408C2_OFFSET UNITYSDK_OFFSET(0x18B6F690)
#define CLASS_4_417C7B46A4074E8A_METHOD_4_E574C73D1D4F7611_OFFSET UNITYSDK_OFFSET(0x18B6FCF0)
#define CLASS_4_417C7B46A4074E8A__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B705A0)
#define CLASS_4_417C7B46A4074E8A__CTOR_OFFSET UNITYSDK_OFFSET(0x18B70560)
#define CLASS_4_417C7B46A4074E8A__INTERPOLATERES_B__11_0_OFFSET UNITYSDK_OFFSET(0x18B70620)

inline static constexpr unsigned int Class_4_417C7B46A4074E8A_TypeDefinitionIndex = 49921;

class Class_4_417C7B46A4074E8A : public ::Class_3_3B76BCE1DE5BE597<::UnityEngine::Texture*>
{
public:
	static ::UnityEngine::Texture** StaticGet_DGHDEJOAHFO()
	{
		return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0x27550);
	}
	static ::System::Int32* StaticGet_KAKCAOFGJBM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBA40);
	}
	static ::System::Int32* StaticGet_IDBALFPIGFE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBA44);
	}
	static ::System::Int32* StaticGet_BAGFJOFEJEK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBA48);
	}
	static ::System::Int32* StaticGet_DPBKJHAEHLI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBA4C);
	}
	static ::System::Int32* StaticGet_GLHLKHCOOBF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBA50);
	}
	static ::System::Int32* StaticGet_MBJODJGHFII()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_417C7B46A4074E8A_TypeDefinitionIndex)->GetStaticField(0xBA54);
	}
	::UnityEngine::RenderTexture* NJJJEBNBDIL; // 0x40
	::UnityEngine::ComputeShader* CNIJBCAMNPG; // 0x48
	::Class_1_6BB3CCD14C3350D4* CKJEFIJNAMF; // 0x50
	::UnityEngine::Vector2Int KLHJPLELNNI; // 0x58
	::RPG::GameCore::GraphicQuality DAPKDIEKEGH; // 0x60
	::System::Single KJECILPBCOD; // 0x64

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
