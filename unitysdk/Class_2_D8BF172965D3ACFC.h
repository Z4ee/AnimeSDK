#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D8BF172965D3ACFC_CharaProp.h"
#include "unitysdk/Class_2_D8BF172965D3ACFC_FaceProp.h"
#include "unitysdk/Class_2_D8BF172965D3ACFC_HairProp.h"
#include "unitysdk/Class_2_D8BF172965D3ACFC_OtherProp.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_1_1342B57709FD7AC5;
namespace RPG::Client { class MonoEffectPluginCharaEffectBase; }
namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace RPG::Client { class MonoEffectPluginCharaPropBloom; }
namespace RPG::Client { class MonoEffectPluginCharaPropCrystal; }
namespace RPG::Client { class MonoEffectPluginCharaPropCustomLightDir; }
namespace RPG::Client { class MonoEffectPluginCharaPropDiffuseLighting; }
namespace RPG::Client { class MonoEffectPluginCharaPropDirectionDissolve; }
namespace RPG::Client { class MonoEffectPluginCharaPropDissolve; }
namespace RPG::Client { class MonoEffectPluginCharaPropEmission; }
namespace RPG::Client { class MonoEffectPluginCharaPropFaceDiffuse; }
namespace RPG::Client { class MonoEffectPluginCharaPropFaceExpression; }
namespace RPG::Client { class MonoEffectPluginCharaPropFaceOutline; }
namespace RPG::Client { class MonoEffectPluginCharaPropFaceRim; }
namespace RPG::Client { class MonoEffectPluginCharaPropFaceSpecialEye; }
namespace RPG::Client { class MonoEffectPluginCharaPropHairRimLight; }
namespace RPG::Client { class MonoEffectPluginCharaPropManager; }
namespace RPG::Client { class MonoEffectPluginCharaPropMaps; }
namespace RPG::Client { class MonoEffectPluginCharaPropOutline; }
namespace RPG::Client { class MonoEffectPluginCharaPropOverlayManager; }
namespace RPG::Client { class MonoEffectPluginCharaPropOverrideLight; }
namespace RPG::Client { class MonoEffectPluginCharaPropPartsSelection; }
namespace RPG::Client { class MonoEffectPluginCharaPropRefSpecular; }
namespace RPG::Client { class MonoEffectPluginCharaPropRimLight; }
namespace RPG::Client { class MonoEffectPluginCharaPropRimShadow; }
namespace RPG::Client { class MonoEffectPluginCharaPropSpecularLighting; }
namespace RPG::Client { class MonoEffectPluginCharaPropStarrySky; }
namespace RPG::Client { class MonoEffectPluginCharaPropStencil; }
namespace RPG::Client { class MonoEffectPluginCharaPropStock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define CLASS_2_D8BF172965D3ACFC_METHOD_2_183D8B84AAEF1CFE_OFFSET UNITYSDK_OFFSET(0x179AC290)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_19B14977ABA39612_OFFSET UNITYSDK_OFFSET(0x179AB1E0)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_1B2AF0E12F485205_OFFSET UNITYSDK_OFFSET(0x179AA190)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_1BB180DEFA16B6A3_OFFSET UNITYSDK_OFFSET(0x179A9F60)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_30A3D87FD8CB777D_OFFSET UNITYSDK_OFFSET(0x179AC1F0)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x179AB170)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_4463F216B4D79EB1_OFFSET UNITYSDK_OFFSET(0x179A9E10)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_60BBA8C928D4389B_OFFSET UNITYSDK_OFFSET(0x179AA1E0)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_794BE9ACEA5F9F74_OFFSET UNITYSDK_OFFSET(0x179A9E90)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_7E3F0E2D1DBE0276_OFFSET UNITYSDK_OFFSET(0x179ABF30)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_801844C5ED7181B2_OFFSET UNITYSDK_OFFSET(0x179A9D40)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_8152FEEB3B988FBB_OFFSET UNITYSDK_OFFSET(0x179AC1A0)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_9455E25743BCB594_OFFSET UNITYSDK_OFFSET(0x179AC240)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_9F7CE35CFA5CCC7D_OFFSET UNITYSDK_OFFSET(0x179AADB0)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_A03BCE6471ADC02C_OFFSET UNITYSDK_OFFSET(0x179AAE90)
#define CLASS_2_D8BF172965D3ACFC_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x179A9CD0)
#define CLASS_2_D8BF172965D3ACFC__CTOR_OFFSET UNITYSDK_OFFSET(0x179AC2E0)

inline static constexpr unsigned int Class_2_D8BF172965D3ACFC_TypeDefinitionIndex = 66829;

class Class_2_D8BF172965D3ACFC : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::MonoEffectPluginCharaPropDiffuseLighting* Field_2_0; // 0x18
	::RPG::Client::MonoEffectPluginCharaPropStencil* Field_2_1; // 0x20
	::RPG::Client::MonoEffectPluginCharaPropOverrideLight* Field_2_2; // 0x28
	::RPG::Client::MonoEffectPluginCharaPropStock* Field_2_3; // 0x30
	::RPG::Client::MonoEffectPluginCharaPropBloom* Field_2_4; // 0x38
	::RPG::Client::MonoEffectPluginCharaPropDirectionDissolve* Field_2_5; // 0x40
	::RPG::Client::MonoEffectPluginCharaPropOutline* Field_2_6; // 0x48
	::RPG::Client::MonoEffectPluginCharaPropHairRimLight* Field_2_7; // 0x50
	::RPG::Client::MonoEffectPluginCharaPropFaceDiffuse* Field_2_8; // 0x58
	::RPG::Client::MonoEffectPluginCharaPropPartsSelection* Field_2_9; // 0x60
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>* Field_2_10; // 0x68
	::RPG::Client::MonoEffectPluginCharaPropCustomLightDir* Field_2_11; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_2_12; // 0x78
	::RPG::Client::MonoEffectPluginCharaPropStarrySky* Field_2_13; // 0x80
	::RPG::Client::MonoEffectPluginCharaPropFaceRim* Field_2_14; // 0x88
	::RPG::Client::MonoEffectPluginCharaPropDissolve* Field_2_15; // 0x90
	::RPG::Client::MonoEffectPluginCharaPropSpecularLighting* Field_2_16; // 0x98
	::RPG::Client::MonoEffectPluginCharaPropRimShadow* Field_2_17; // 0xA0
	::RPG::Client::MonoEffectPluginCharaPropRefSpecular* Field_2_18; // 0xA8
	::RPG::Client::MonoEffectPluginCharaPropFaceExpression* Field_2_19; // 0xB0
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_2_20; // 0xB8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* Field_2_21; // 0xC0
	::RPG::Client::MonoEffectPluginCharaPropFaceOutline* Field_2_22; // 0xC8
	::RPG::Client::MonoEffectPluginCharaPropMaps* Field_2_23; // 0xD0
	::RPG::Client::MonoEffectPluginCharaPropCrystal* Field_2_24; // 0xD8
	::RPG::Client::MonoEffectPluginCharaPropFaceSpecialEye* Field_2_25; // 0xE0
	::RPG::Client::MonoEffectPluginCharaPropEmission* Field_2_26; // 0xE8
	::RPG::Client::MonoEffectPluginCharaPropRimLight* Field_2_27; // 0xF0
	::Class_2_D8BF172965D3ACFC_FaceProp Field_2_28; // 0xF8
	::Class_2_D8BF172965D3ACFC_HairProp Field_2_29; // 0xFC
	::Class_2_D8BF172965D3ACFC_CharaProp Field_2_30; // 0x100
	::Class_2_D8BF172965D3ACFC_OtherProp Field_2_31; // 0x104
	::System::Boolean Field_2_32; // 0x108
	::System::Boolean Field_2_33; // 0x109

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_801844C5ED7181B2(::RPG::Client::MonoEffectPluginCharaPropManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaPropManager*))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_801844C5ED7181B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_794BE9ACEA5F9F74(::RPG::Client::MonoEffectPluginCharaPropOverlayManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaPropOverlayManager*))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_794BE9ACEA5F9F74_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BB180DEFA16B6A3(::Class_1_1342B57709FD7AC5*& a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*&, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_1BB180DEFA16B6A3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9F7CE35CFA5CCC7D(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::Class_2_D8BF172965D3ACFC_CharaProp a2, ::Class_2_D8BF172965D3ACFC_FaceProp a3, ::Class_2_D8BF172965D3ACFC_HairProp a4, ::Class_2_D8BF172965D3ACFC_OtherProp a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::Class_2_D8BF172965D3ACFC_CharaProp, ::Class_2_D8BF172965D3ACFC_FaceProp, ::Class_2_D8BF172965D3ACFC_HairProp, ::Class_2_D8BF172965D3ACFC_OtherProp))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_9F7CE35CFA5CCC7D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_60BBA8C928D4389B(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_60BBA8C928D4389B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A03BCE6471ADC02C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_A03BCE6471ADC02C_OFFSET))(this);
	}

	::System::Void Method_2_19B14977ABA39612()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_19B14977ABA39612_OFFSET))(this);
	}

	::System::Void Method_2_4463F216B4D79EB1(::Class_2_D8BF172965D3ACFC_CharaProp a1, ::Class_2_D8BF172965D3ACFC_FaceProp a2, ::Class_2_D8BF172965D3ACFC_HairProp a3, ::Class_2_D8BF172965D3ACFC_OtherProp a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D8BF172965D3ACFC_CharaProp, ::Class_2_D8BF172965D3ACFC_FaceProp, ::Class_2_D8BF172965D3ACFC_HairProp, ::Class_2_D8BF172965D3ACFC_OtherProp))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_4463F216B4D79EB1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Method_2_7E3F0E2D1DBE0276()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_7E3F0E2D1DBE0276_OFFSET))(this);
	}

	::System::Void Method_2_8152FEEB3B988FBB(::Class_2_D8BF172965D3ACFC_CharaProp a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D8BF172965D3ACFC_CharaProp))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_8152FEEB3B988FBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_30A3D87FD8CB777D(::Class_2_D8BF172965D3ACFC_FaceProp a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D8BF172965D3ACFC_FaceProp))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_30A3D87FD8CB777D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9455E25743BCB594(::Class_2_D8BF172965D3ACFC_HairProp a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D8BF172965D3ACFC_HairProp))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_9455E25743BCB594_OFFSET))(this, a1);
	}

	::System::Void Method_2_183D8B84AAEF1CFE(::Class_2_D8BF172965D3ACFC_OtherProp a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D8BF172965D3ACFC_OtherProp))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_183D8B84AAEF1CFE_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginCharaEffectBase* Method_2_1B2AF0E12F485205()
	{
		return ((::RPG::Client::MonoEffectPluginCharaEffectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8BF172965D3ACFC_METHOD_2_1B2AF0E12F485205_OFFSET))(this);
	}
};
