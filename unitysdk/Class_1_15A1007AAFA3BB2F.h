#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_293;
class Class_1_303D5A33D1401D59;
class SceneLightVolume;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define CLASS_1_15A1007AAFA3BB2F_EQUALS_OFFSET UNITYSDK_OFFSET(0xDE67E20)
#define CLASS_1_15A1007AAFA3BB2F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDE67EC0)
#define CLASS_1_15A1007AAFA3BB2F_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0xDE68080)
#define CLASS_1_15A1007AAFA3BB2F_GET_NAMEEX_OFFSET UNITYSDK_OFFSET(0xE452C90)
#define CLASS_1_15A1007AAFA3BB2F_GET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0xE452C70)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_0B8716EFED590CF5_OFFSET UNITYSDK_OFFSET(0xE452FC0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_0C843B41E67E996F_OFFSET UNITYSDK_OFFSET(0xE452E10)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_18B8B3C7AE5E95BB_OFFSET UNITYSDK_OFFSET(0xE4541A0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_193E00E83BC3E6E8_OFFSET UNITYSDK_OFFSET(0xE453B00)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xDE68200)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0xE452B80)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0xE453CA0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xDE68110)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_2002970A27968D84_OFFSET UNITYSDK_OFFSET(0xE453980)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_2395F429740EC13A_OFFSET UNITYSDK_OFFSET(0xE4535C0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_2827A13C8FBC24CA_OFFSET UNITYSDK_OFFSET(0xE454240)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_30802FF4CA4AC818_OFFSET UNITYSDK_OFFSET(0xE452E80)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_3A5B6CC96C6DD14D_OFFSET UNITYSDK_OFFSET(0xE452DA0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_3E7A053DF81C1024_OFFSET UNITYSDK_OFFSET(0xDE67F80)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_475152738E41962F_OFFSET UNITYSDK_OFFSET(0xE453EE0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_4E0D7E6519F278CA_OFFSET UNITYSDK_OFFSET(0xDE68010)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_56181E3FE1C89E6C_OFFSET UNITYSDK_OFFSET(0xE4536C0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_579B4B6C9C309749_OFFSET UNITYSDK_OFFSET(0xE453A50)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_5B837EC82F8886F9_OFFSET UNITYSDK_OFFSET(0xE453100)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_605552F1EE2530DA_OFFSET UNITYSDK_OFFSET(0xDE67D50)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_605FAABBA2DB4DF1_OFFSET UNITYSDK_OFFSET(0xDE678B0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_730A63A8308600B8_OFFSET UNITYSDK_OFFSET(0xE453080)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_75F53A06EEAF2683_OFFSET UNITYSDK_OFFSET(0xE4534E0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_77FD543600E00498_1_OFFSET UNITYSDK_OFFSET(0xE453E30)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xE453D80)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_7AB2A7695E303980_OFFSET UNITYSDK_OFFSET(0xE454100)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_7AD49E91EE08A468_OFFSET UNITYSDK_OFFSET(0xE453740)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_7EE8A1F9BFA04990_OFFSET UNITYSDK_OFFSET(0xE454320)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_A1C464B05BB7A5C1_1_OFFSET UNITYSDK_OFFSET(0xE453210)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0xE453170)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_AD58DAB98B95C6DC_OFFSET UNITYSDK_OFFSET(0xE453010)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_AF8F864E28D6E4FA_OFFSET UNITYSDK_OFFSET(0xDE67480)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_B8A8F4F120B2F6D5_1_OFFSET UNITYSDK_OFFSET(0xDE68270)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_B8A8F4F120B2F6D5_2_OFFSET UNITYSDK_OFFSET(0xE452BF0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0xDE68180)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_BE6ECC5CA6D6C5A5_OFFSET UNITYSDK_OFFSET(0xE452EF0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE453FC0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE452CB0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_D25CE55A19A14D5C_OFFSET UNITYSDK_OFFSET(0xE4537C0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_DB4A7431148323CB_OFFSET UNITYSDK_OFFSET(0xE452D10)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_E9F90DCA5DE73CFE_1_OFFSET UNITYSDK_OFFSET(0xE453350)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_E9F90DCA5DE73CFE_OFFSET UNITYSDK_OFFSET(0xE4532B0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_EA8587082301D8CE_1_OFFSET UNITYSDK_OFFSET(0xE454080)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_EA8587082301D8CE_OFFSET UNITYSDK_OFFSET(0xE454000)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_EB44EFCB44CBA9C1_OFFSET UNITYSDK_OFFSET(0xE453D10)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xE453F60)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_F26AFC15917F0D52_OFFSET UNITYSDK_OFFSET(0xE453890)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_F6D8B25630BBFEEF_OFFSET UNITYSDK_OFFSET(0xDE67CE0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_FAE46DEDB7732427_OFFSET UNITYSDK_OFFSET(0xE4533F0)
#define CLASS_1_15A1007AAFA3BB2F_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0xDE68090)
#define CLASS_1_15A1007AAFA3BB2F_SET_NAMEEX_OFFSET UNITYSDK_OFFSET(0xE452CA0)
#define CLASS_1_15A1007AAFA3BB2F_SET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0xE452C80)
#define CLASS_1_15A1007AAFA3BB2F__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4545F0)
#define CLASS_1_15A1007AAFA3BB2F__CTOR_OFFSET UNITYSDK_OFFSET(0xE4545E0)
#define CLASS_1_15A1007AAFA3BB2F___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xE454660)
#define CLASS_1_15A1007AAFA3BB2F___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE454670)

inline static constexpr unsigned int Class_1_15A1007AAFA3BB2F_TypeDefinitionIndex = 57086;

class Class_1_15A1007AAFA3BB2F : public ::System::Object
{
public:
	static ::UnityEngine::Rendering::VolumeProfile** StaticGet_Field_1_3()
	{
		return (::UnityEngine::Rendering::VolumeProfile**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A1007AAFA3BB2F_TypeDefinitionIndex)->GetStaticField(0x47AA0);
	}
	static ::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A1007AAFA3BB2F_TypeDefinitionIndex)->GetStaticField(0x47AA8);
	}
	::System::String* _ProfilePathEx_k__BackingField; // 0x10
	::System::String* _NameEx_k__BackingField; // 0x18
	::System::Int32 Field_1_7; // 0x20
	::System::Int32 Field_1_10; // 0x24
	::System::Int32 Field_1_6; // 0x28
	::System::Int32 Field_1_5; // 0x2C
	::System::Int32 Field_1_8; // 0x30
	::System::Int32 Field_1_9; // 0x34
	::System::Int32 Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_AF8F864E28D6E4FA(::Il2CppArray<::System::String*>*& a1, ::Il2CppArray<::System::Type*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_AF8F864E28D6E4FA_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_605FAABBA2DB4DF1(::System::String* a1, ::Il2CppArray<::System::String*>*& a2, ::Il2CppArray<::System::Type*>*& a3)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_605FAABBA2DB4DF1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F6D8B25630BBFEEF(::Class_1_15A1007AAFA3BB2F* a1, ::Class_1_15A1007AAFA3BB2F* a2)
	{
		return ((::System::Boolean(*)(::Class_1_15A1007AAFA3BB2F*, ::Class_1_15A1007AAFA3BB2F*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_F6D8B25630BBFEEF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_605552F1EE2530DA(::Class_1_15A1007AAFA3BB2F* a1, ::Class_1_15A1007AAFA3BB2F* a2)
	{
		return ((::System::Boolean(*)(::Class_1_15A1007AAFA3BB2F*, ::Class_1_15A1007AAFA3BB2F*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_605552F1EE2530DA_OFFSET))(a1, a2);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Void Method_1_3E7A053DF81C1024(::Class_1_15A1007AAFA3BB2F* a1)
	{
		return ((::System::Void(*)(::Class_1_15A1007AAFA3BB2F*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_3E7A053DF81C1024_OFFSET))(a1);
	}

	static ::Class_1_15A1007AAFA3BB2F* Method_1_4E0D7E6519F278CA(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_1_15A1007AAFA3BB2F*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_4E0D7E6519F278CA_OFFSET))(a1, a2);
	}

	::Class_0_16E4307DCC419505_293* get_ActiveProfileTransitionTarget()
	{
		return ((::Class_0_16E4307DCC419505_293*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this);
	}

	::System::Void set_ActiveProfileTransitionTarget(::Class_0_16E4307DCC419505_293* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_293*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_B8A8F4F120B2F6D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_B8A8F4F120B2F6D5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_B8A8F4F120B2F6D5_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_B8A8F4F120B2F6D5_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Void Method_1_B8A8F4F120B2F6D5_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_B8A8F4F120B2F6D5_2_OFFSET))(this, a1);
	}

	::System::String* get_ProfilePathEx()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_GET_PROFILEPATHEX_OFFSET))(this);
	}

	::System::Void set_ProfilePathEx(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_SET_PROFILEPATHEX_OFFSET))(this, value);
	}

	::System::String* get_NameEx()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_GET_NAMEEX_OFFSET))(this);
	}

	::System::Void set_NameEx(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_SET_NAMEEX_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_1_DB4A7431148323CB(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_DB4A7431148323CB_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_3A5B6CC96C6DD14D(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_3A5B6CC96C6DD14D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0C843B41E67E996F(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_0C843B41E67E996F_OFFSET))(this, a1);
	}

	::System::Single Method_1_30802FF4CA4AC818(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Single(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_30802FF4CA4AC818_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_BE6ECC5CA6D6C5A5(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_BE6ECC5CA6D6C5A5_OFFSET))(this, a1);
	}

	::UnityEngine::Gradient* Method_1_0B8716EFED590CF5(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::UnityEngine::Gradient*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_0B8716EFED590CF5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_AD58DAB98B95C6DC(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_AD58DAB98B95C6DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_730A63A8308600B8(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_730A63A8308600B8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B837EC82F8886F9(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_5B837EC82F8886F9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_A1C464B05BB7A5C1_1_OFFSET))(this);
	}

	::UnityEngine::Light* Method_1_E9F90DCA5DE73CFE(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_E9F90DCA5DE73CFE_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_1_E9F90DCA5DE73CFE_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_E9F90DCA5DE73CFE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAE46DEDB7732427(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_FAE46DEDB7732427_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Rendering::VolumeProfile* Method_1_75F53A06EEAF2683()
	{
		return ((::UnityEngine::Rendering::VolumeProfile*(*)())((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_75F53A06EEAF2683_OFFSET))();
	}

	::UnityEngine::Rendering::VolumeProfile* Method_1_2395F429740EC13A()
	{
		return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_2395F429740EC13A_OFFSET))(this);
	}

	::System::Void Method_1_56181E3FE1C89E6C(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Gradient* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_56181E3FE1C89E6C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7AD49E91EE08A468(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_7AD49E91EE08A468_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D25CE55A19A14D5C(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_D25CE55A19A14D5C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F26AFC15917F0D52(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_F26AFC15917F0D52_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2002970A27968D84(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_2002970A27968D84_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_579B4B6C9C309749(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_579B4B6C9C309749_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_193E00E83BC3E6E8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_193E00E83BC3E6E8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_3_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_EB44EFCB44CBA9C1()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_EB44EFCB44CBA9C1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_77FD543600E00498_1_OFFSET))(this);
	}

	::System::Void Method_1_475152738E41962F(::Class_0_16E4307DCC419505_293* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_293*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_475152738E41962F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_EA8587082301D8CE(::Class_0_16E4307DCC419505_293* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_293*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_EA8587082301D8CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA8587082301D8CE_1(::Class_0_16E4307DCC419505_293* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_293*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_EA8587082301D8CE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AB2A7695E303980(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_7AB2A7695E303980_OFFSET))(this, a1);
	}

	::System::Void Method_1_18B8B3C7AE5E95BB(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_18B8B3C7AE5E95BB_OFFSET))(this, a1);
	}

	::SceneLightVolume* Method_1_2827A13C8FBC24CA()
	{
		return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_2827A13C8FBC24CA_OFFSET))(this);
	}

	::System::Void Method_1_7EE8A1F9BFA04990(::UnityEngine::Rendering::AmbientVolumneData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_7EE8A1F9BFA04990_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
