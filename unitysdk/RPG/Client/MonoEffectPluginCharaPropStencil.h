#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropStencil_CharacterShader.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTENCIL_INIT_OFFSET UNITYSDK_OFFSET(0x1911EC60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTENCIL_UNINIT_OFFSET UNITYSDK_OFFSET(0x1911F010)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTENCIL_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1911F0B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTENCIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1911FBE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTENCIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1911FB10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropStencil_TypeDefinitionIndex = 66845;

	class MonoEffectPluginCharaPropStencil : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		static ::System::Int32* StaticGet_Field_6_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE840);
		}
		static ::System::Int32* StaticGet_Field_6_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE844);
		}
		static ::System::Int32* StaticGet_Field_6_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE848);
		}
		static ::System::Int32* StaticGet_Field_6_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE84C);
		}
		static ::System::Int32* StaticGet_Field_6_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE850);
		}
		static ::System::Int32* StaticGet_Field_6_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE854);
		}
		static ::System::Int32* StaticGet_Field_6_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE858);
		}
		static ::System::Int32* StaticGet_Field_6_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE85C);
		}
		static ::System::Int32* StaticGet_Field_6_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE860);
		}
		static ::System::Int32* StaticGet_Field_6_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE864);
		}
		static ::System::Int32* StaticGet_Field_6_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE868);
		}
		static ::System::Int32* StaticGet_Field_6_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE86C);
		}
		static ::System::Int32* StaticGet_Field_6_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE870);
		}
		static ::System::Int32* StaticGet_Field_6_13()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE874);
		}
		static ::System::Int32* StaticGet_Field_6_14()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE878);
		}
		static ::System::Int32* StaticGet_Field_6_15()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE87C);
		}
		static ::System::Int32* StaticGet_Field_6_16()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE880);
		}
		static ::System::Int32* StaticGet_Field_6_17()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropStencil_TypeDefinitionIndex)->GetStaticField(0xE884);
		}
		::RPG::Client::MonoEffectPluginCharaPropStencil_CharacterShader Global_Shaders; // 0x40
		::System::Boolean Global_UseGBufferEmission; // 0x44
		::System::Int32 Base_StencilRef; // 0x48
		::UnityEngine::Rendering::StencilOp Base_StencilOP; // 0x4C
		::UnityEngine::Rendering::CompareFunction Base_StencilComp; // 0x50
		::System::Int32 Base_StencilMask; // 0x54
		::System::Int32 Base_RenderQueue; // 0x58
		::System::Int32 Hair_StencilEye; // 0x5C
		::UnityEngine::Rendering::StencilOp Hair_HairStencilOp; // 0x60
		::UnityEngine::Rendering::CompareFunction Hair_HairStencilComp; // 0x64
		::System::Int32 Hair_HairStencilMask; // 0x68
		::UnityEngine::Rendering::StencilOp Hair_EyeMaskStencilOp; // 0x6C
		::System::Int32 Hair_ForwardStencilRef; // 0x70
		::UnityEngine::Rendering::CompareFunction Hair_ForwardStencilComp; // 0x74
		::UnityEngine::Rendering::CompareFunction Hair_OutlineStencilComp; // 0x78
		::System::Int32 Hair_RenderQueue; // 0x7C
		::System::Int32 Face_StencilEye; // 0x80
		::System::Int32 Face_StencilFace; // 0x84
		::System::Int32 Face_StencilMask; // 0x88
		::UnityEngine::Rendering::CompareFunction Face_StencilComp; // 0x8C
		::UnityEngine::Rendering::StencilOp Face_StencilOp; // 0x90
		::UnityEngine::Rendering::CompareFunction Face_EyeMaskStencilComp; // 0x94
		::UnityEngine::Rendering::StencilOp Face_EyeMaskStencilOp; // 0x98
		::System::Int32 Face_ForwardStencilRef; // 0x9C
		::UnityEngine::Rendering::CompareFunction Face_ForwardStencilComp; // 0xA0
		::UnityEngine::Rendering::StencilOp Face_ForwardStencilOp; // 0xA4
		::UnityEngine::Rendering::CompareFunction Face_OutlineStencilComp; // 0xA8
		::UnityEngine::Rendering::StencilOp Face_OutlineStencilOp; // 0xAC
		::System::Int32 Face_RenderQueue; // 0xB0
		::System::Int32 EyeShadow_StencilRef; // 0xB4
		::UnityEngine::Rendering::CompareFunction EyeShadow_StencilComp; // 0xB8
		::System::Int32 EyeShadow_StencilEye; // 0xBC
		::System::Int32 EyeShadow_RenderQueue; // 0xC0
		::System::Boolean EyeShadow_EnableEyeHairShader; // 0xC4
		::System::Int32 SpecialWeapon_GBufferStencilRef; // 0xC8
		::System::Int32 SpecialWeapon_StencilRef; // 0xCC
		::UnityEngine::Rendering::StencilOp SpecialWeapon_StencilOP; // 0xD0
		::UnityEngine::Rendering::CompareFunction SpecialWeapon_StencilComp; // 0xD4
		::UnityEngine::Rendering::CompareFunction SpecialWeapon_OutlineStencilComp; // 0xD8
		::System::Int32 SpecialWeapon_StencilMask; // 0xDC
		::System::Int32 SpecialWeapon_RenderQueue; // 0xE0
		::System::Int32 Clear_StencilRef; // 0xE4
		::UnityEngine::Rendering::StencilOp Clear_StencilOP; // 0xE8
		::UnityEngine::Rendering::CompareFunction Clear_StencilComp; // 0xEC
		::System::Int32 Clear_StencilMask; // 0xF0
		::System::Int32 Clear_RenderQueue; // 0xF4
		::Il2CppArray<::System::Int32>* Field_6_64; // 0xF8
		::UnityEngine::Material* Field_6_65; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTENCIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTENCIL__CCTOR_OFFSET))();
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTENCIL_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTENCIL_UNINIT_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTENCIL_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}
	};
}
