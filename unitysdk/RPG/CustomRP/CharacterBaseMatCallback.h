#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MaterialIDLUTColor.h"
#include "unitysdk/RPG/CustomRP/MaterialIDLUTFloat.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_CREATELUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x192BE740)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DEEPCOPYLUT_OFFSET UNITYSDK_OFFSET(0x192BE710)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DESTROYDEEPCOPYLUT_OFFSET UNITYSDK_OFFSET(0x192BEA40)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DESTROYLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x192BEA80)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTCOLOR_1_OFFSET UNITYSDK_OFFSET(0x192BF9E0)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTCOLOR_OFFSET UNITYSDK_OFFSET(0x192BF6E0)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTFLOAT_1_OFFSET UNITYSDK_OFFSET(0x192C08F0)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTFLOAT_OFFSET UNITYSDK_OFFSET(0x192C0470)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTCOLOR_1_OFFSET UNITYSDK_OFFSET(0x192BEF70)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTCOLOR_OFFSET UNITYSDK_OFFSET(0x192BEE00)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTFLOAT_1_OFFSET UNITYSDK_OFFSET(0x192BFCE0)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTFLOAT_OFFSET UNITYSDK_OFFSET(0x192BFB70)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_TRYCREATELUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x192BED30)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_UPDATEANDAPPLYLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x192BEC70)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x192C1BA0)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATEOUTLINEPACKLUT_OFFSET UNITYSDK_OFFSET(0x192C1150)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATERIMLIGHTPACKLUT_OFFSET UNITYSDK_OFFSET(0x192C1390)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATERIMSHADOWPACKLUT_OFFSET UNITYSDK_OFFSET(0x192C1730)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATESPECULARPACKLUT_OFFSET UNITYSDK_OFFSET(0x192C0A50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CharacterBaseMatCallback_TypeDefinitionIndex = 37192;

	class CharacterBaseMatCallback : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_SpecularColor()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34F60);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_CustomParamB()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34F68);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SpecularShininess()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34F70);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimShadowWidth()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34F78);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimEdgeSoftness()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34F80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SpecularIntensity()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34F88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimShadowFeather()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34F90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimDark()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34F98);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_OutlineColor()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34FA0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimColor()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34FA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_CustomParamA()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34FB0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimShadowColor()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34FB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_mBloomIntensity()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34FC0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_mBloomColor()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34FC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SpecularRoughness()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34FD0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimType()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x34FD8);
		}
		static ::System::Int32* StaticGet_MaterialLUTProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0xDE60);
		}
		static ::System::Int32* StaticGet_UseMaterialLUTProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0xDE64);
		}
		// static const ::System::Int32 MaterialIDPackHeight = 0x8; // 0x0
		// static const ::System::Int32 MaterialIDCount = 0x8; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__CCTOR_OFFSET))();
		}

		static ::System::Void DeepCopyLUT(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DEEPCOPYLUT_OFFSET))(a1, a2);
		}

		static ::System::Void DestroyDeepCopyLUT(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DESTROYDEEPCOPYLUT_OFFSET))(a1);
		}

		static ::System::Void CreateLUTTexture(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_CREATELUTTEXTURE_OFFSET))(a1);
		}

		static ::System::Void TryCreateLUTTexture(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_TRYCREATELUTTEXTURE_OFFSET))(a1);
		}

		static ::System::Void DestroyLUTTexture(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DESTROYLUTTEXTURE_OFFSET))(a1);
		}

		static ::System::Void SetCharLUTColor(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTCOLOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetCharLUTColor_1(::UnityEngine::Material* a1, ::RPG::CustomRP::MaterialIDLUTColor a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::RPG::CustomRP::MaterialIDLUTColor, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTCOLOR_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Color GetCharLUTColor(::UnityEngine::Material* a1, ::RPG::CustomRP::MaterialIDLUTColor a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Material*, ::RPG::CustomRP::MaterialIDLUTColor, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTCOLOR_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Color GetCharLUTColor_1(::UnityEngine::Material* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTCOLOR_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetCharLUTFloat(::UnityEngine::Material* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTFLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetCharLUTFloat_1(::UnityEngine::Material* a1, ::RPG::CustomRP::MaterialIDLUTFloat a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::RPG::CustomRP::MaterialIDLUTFloat, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTFLOAT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetCharLUTFloat(::UnityEngine::Material* a1, ::RPG::CustomRP::MaterialIDLUTFloat a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Material*, ::RPG::CustomRP::MaterialIDLUTFloat, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTFLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetCharLUTFloat_1(::UnityEngine::Material* a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTFLOAT_1_OFFSET))(a1, a2);
		}

		static ::System::Void UpdateAndApplyLUTTexture(::UnityEngine::Material* a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_UPDATEANDAPPLYLUTTEXTURE_OFFSET))(a1, a2);
		}

		static ::System::Void _UpdateSpecularPackLUT(::UnityEngine::Texture2D* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATESPECULARPACKLUT_OFFSET))(a1, a2);
		}

		static ::System::Void _UpdateOutlinePackLUT(::UnityEngine::Texture2D* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATEOUTLINEPACKLUT_OFFSET))(a1, a2);
		}

		static ::System::Void _UpdateRimLightPackLUT(::UnityEngine::Texture2D* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATERIMLIGHTPACKLUT_OFFSET))(a1, a2);
		}

		static ::System::Void _UpdateRimShadowPackLUT(::UnityEngine::Texture2D* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATERIMSHADOWPACKLUT_OFFSET))(a1, a2);
		}
	};
}
