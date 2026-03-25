#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MaterialIDLUTColor.h"
#include "unitysdk/RPG/CustomRP/MaterialIDLUTFloat.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_CREATELUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x16A81150)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DEEPCOPYLUT_OFFSET UNITYSDK_OFFSET(0x16A81120)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DESTROYDEEPCOPYLUT_OFFSET UNITYSDK_OFFSET(0x16A81450)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DESTROYLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x16A81490)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTCOLOR_1_OFFSET UNITYSDK_OFFSET(0x16A82320)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTCOLOR_OFFSET UNITYSDK_OFFSET(0x16A82020)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTFLOAT_1_OFFSET UNITYSDK_OFFSET(0x16A83270)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTFLOAT_OFFSET UNITYSDK_OFFSET(0x16A82DF0)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTCOLOR_1_OFFSET UNITYSDK_OFFSET(0x16A819A0)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTCOLOR_OFFSET UNITYSDK_OFFSET(0x16A81810)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTFLOAT_1_OFFSET UNITYSDK_OFFSET(0x16A82660)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTFLOAT_OFFSET UNITYSDK_OFFSET(0x16A824D0)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_TRYCREATELUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x16A81740)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_UPDATEANDAPPLYLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x16A81680)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A84480)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATEOUTLINEPACKLUT_OFFSET UNITYSDK_OFFSET(0x16A83AD0)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATERIMLIGHTPACKLUT_OFFSET UNITYSDK_OFFSET(0x16A83CF0)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATERIMSHADOWPACKLUT_OFFSET UNITYSDK_OFFSET(0x16A84060)
#define RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATESPECULARPACKLUT_OFFSET UNITYSDK_OFFSET(0x16A833F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CharacterBaseMatCallback_TypeDefinitionIndex = 29484;

	class CharacterBaseMatCallback : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_RimEdgeSoftness()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30930);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SpecularRoughness()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30938);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimDark()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30940);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SpecularShininess()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30948);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SpecularIntensity()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30950);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_OutlineColor()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30958);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimShadowColor()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30960);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_CustomParamB()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30968);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_mBloomColor()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30970);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SpecularColor()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30978);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimShadowFeather()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30980);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_CustomParamA()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30988);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimColor()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30990);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimShadowWidth()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x30998);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_mBloomIntensity()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x309A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RimType()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0x309A8);
		}
		static ::System::Int32* StaticGet_MaterialLUTProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0xFC40);
		}
		static ::System::Int32* StaticGet_UseMaterialLUTProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterBaseMatCallback_TypeDefinitionIndex)->GetStaticField(0xFC44);
		}
		// static const ::System::Int32 MaterialIDPackHeight = 0x8; // 0x0
		// static const ::System::Int32 MaterialIDCount = 0x8; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__CCTOR_OFFSET))();
		}

		static ::System::Void DeepCopyLUT(::UnityEngine::Material* material, ::UnityEngine::Material* sourceMaterial)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DEEPCOPYLUT_OFFSET))(material, sourceMaterial);
		}

		static ::System::Void DestroyDeepCopyLUT(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DESTROYDEEPCOPYLUT_OFFSET))(material);
		}

		static ::System::Void CreateLUTTexture(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_CREATELUTTEXTURE_OFFSET))(material);
		}

		static ::System::Void TryCreateLUTTexture(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_TRYCREATELUTTEXTURE_OFFSET))(material);
		}

		static ::System::Void DestroyLUTTexture(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_DESTROYLUTTEXTURE_OFFSET))(material);
		}

		static ::System::Void SetCharLUTColor(::UnityEngine::Material* material, ::System::String* parameterName, ::UnityEngine::Color col)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTCOLOR_OFFSET))(material, parameterName, col);
		}

		static ::System::Void SetCharLUTColor_1(::UnityEngine::Material* material, ::RPG::CustomRP::MaterialIDLUTColor parameter, ::System::Int32 materialID, ::UnityEngine::Color col)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::RPG::CustomRP::MaterialIDLUTColor, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTCOLOR_1_OFFSET))(material, parameter, materialID, col);
		}

		static ::UnityEngine::Color GetCharLUTColor(::UnityEngine::Material* material, ::RPG::CustomRP::MaterialIDLUTColor parameter, ::System::Int32 materialID)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Material*, ::RPG::CustomRP::MaterialIDLUTColor, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTCOLOR_OFFSET))(material, parameter, materialID);
		}

		static ::UnityEngine::Color GetCharLUTColor_1(::UnityEngine::Material* material, ::System::String* parameterName)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTCOLOR_1_OFFSET))(material, parameterName);
		}

		static ::System::Void SetCharLUTFloat(::UnityEngine::Material* material, ::System::String* parameterName, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTFLOAT_OFFSET))(material, parameterName, value);
		}

		static ::System::Void SetCharLUTFloat_1(::UnityEngine::Material* material, ::RPG::CustomRP::MaterialIDLUTFloat parameter, ::System::Int32 materialID, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::RPG::CustomRP::MaterialIDLUTFloat, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_SETCHARLUTFLOAT_1_OFFSET))(material, parameter, materialID, value);
		}

		static ::System::Single GetCharLUTFloat(::UnityEngine::Material* material, ::RPG::CustomRP::MaterialIDLUTFloat parameter, ::System::Int32 materialID)
		{
			return ((::System::Single(*)(::UnityEngine::Material*, ::RPG::CustomRP::MaterialIDLUTFloat, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTFLOAT_OFFSET))(material, parameter, materialID);
		}

		static ::System::Single GetCharLUTFloat_1(::UnityEngine::Material* material, ::System::String* parameterName)
		{
			return ((::System::Single(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_GETCHARLUTFLOAT_1_OFFSET))(material, parameterName);
		}

		static ::System::Void UpdateAndApplyLUTTexture(::UnityEngine::Material* material, ::UnityEngine::Texture2D* LUTTex)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK_UPDATEANDAPPLYLUTTEXTURE_OFFSET))(material, LUTTex);
		}

		static ::System::Void _UpdateSpecularPackLUT(::UnityEngine::Texture2D* MaterialValuesPackLUT, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATESPECULARPACKLUT_OFFSET))(MaterialValuesPackLUT, material);
		}

		static ::System::Void _UpdateOutlinePackLUT(::UnityEngine::Texture2D* MaterialValuesPackLUT, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATEOUTLINEPACKLUT_OFFSET))(MaterialValuesPackLUT, material);
		}

		static ::System::Void _UpdateRimLightPackLUT(::UnityEngine::Texture2D* MaterialValuesPackLUT, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATERIMLIGHTPACKLUT_OFFSET))(MaterialValuesPackLUT, material);
		}

		static ::System::Void _UpdateRimShadowPackLUT(::UnityEngine::Texture2D* MaterialValuesPackLUT, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERBASEMATCALLBACK__UPDATERIMSHADOWPACKLUT_OFFSET))(MaterialValuesPackLUT, material);
		}
	};
}
