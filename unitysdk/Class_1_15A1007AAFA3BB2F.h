#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_312;
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

#define CLASS_1_15A1007AAFA3BB2F_EQUALS_OFFSET UNITYSDK_OFFSET(0xA865BA0)
#define CLASS_1_15A1007AAFA3BB2F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA865C50)
#define CLASS_1_15A1007AAFA3BB2F_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0xA865E20)
#define CLASS_1_15A1007AAFA3BB2F_GET_NAMEEX_OFFSET UNITYSDK_OFFSET(0xA8661A0)
#define CLASS_1_15A1007AAFA3BB2F_GET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0xA866180)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_0B8716EFED590CF5_OFFSET UNITYSDK_OFFSET(0xA8664D0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_193E00E83BC3E6E8_OFFSET UNITYSDK_OFFSET(0xA867010)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1A7F9F3B13A09C96_1_OFFSET UNITYSDK_OFFSET(0xA866010)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1A7F9F3B13A09C96_2_OFFSET UNITYSDK_OFFSET(0xA866100)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0xA865F20)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1A804598C98D707C_OFFSET UNITYSDK_OFFSET(0xA865AC0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1C6021B5A278C1E5_OFFSET UNITYSDK_OFFSET(0xA8663B0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xA865FA0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0xA866090)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0xA8671B0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA865EB0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1FCD2D53490C980D_1_OFFSET UNITYSDK_OFFSET(0xA867590)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_1FCD2D53490C980D_OFFSET UNITYSDK_OFFSET(0xA867510)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_2002970A27968D84_OFFSET UNITYSDK_OFFSET(0xA866E90)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_2395F429740EC13A_OFFSET UNITYSDK_OFFSET(0xA866AD0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_26EA6756F39F4D15_OFFSET UNITYSDK_OFFSET(0xA867830)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_2B6FC03FCF0CAB75_OFFSET UNITYSDK_OFFSET(0xA8652F0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_39245349E55FBE9F_OFFSET UNITYSDK_OFFSET(0xA866590)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_3E7A053DF81C1024_OFFSET UNITYSDK_OFFSET(0xA865D10)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_46AF51271A0DDE06_OFFSET UNITYSDK_OFFSET(0xA866220)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_4E0D7E6519F278CA_OFFSET UNITYSDK_OFFSET(0xA865DA0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_538F7238C53ACA06_OFFSET UNITYSDK_OFFSET(0xA8656A0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_56181E3FE1C89E6C_OFFSET UNITYSDK_OFFSET(0xA866BD0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_6AB0047A1E525732_OFFSET UNITYSDK_OFFSET(0xA8676B0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_75F53A06EEAF2683_OFFSET UNITYSDK_OFFSET(0xA8669F0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_77A0CEBA1C6B5ADF_OFFSET UNITYSDK_OFFSET(0xA866520)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_77FD543600E00498_1_OFFSET UNITYSDK_OFFSET(0xA867340)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xA867290)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_7AD49E91EE08A468_OFFSET UNITYSDK_OFFSET(0xA866C50)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_7E08D375D59A8D08_OFFSET UNITYSDK_OFFSET(0xA8673F0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_7FADA506F8493D3F_OFFSET UNITYSDK_OFFSET(0xA866F60)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_81955FF4FD66D2A0_OFFSET UNITYSDK_OFFSET(0xA866610)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_81A74BEB1BAB62E9_OFFSET UNITYSDK_OFFSET(0xA867750)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_A1C464B05BB7A5C1_1_OFFSET UNITYSDK_OFFSET(0xA866720)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0xA866680)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_A6DC504D01E84002_OFFSET UNITYSDK_OFFSET(0xA866320)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA8674D0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA8661C0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_D25CE55A19A14D5C_OFFSET UNITYSDK_OFFSET(0xA866CD0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_D3884011DB647498_OFFSET UNITYSDK_OFFSET(0xA866290)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_D41059BB825399DF_OFFSET UNITYSDK_OFFSET(0xA867610)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_E9F90DCA5DE73CFE_1_OFFSET UNITYSDK_OFFSET(0xA866860)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_E9F90DCA5DE73CFE_OFFSET UNITYSDK_OFFSET(0xA8667C0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_EB44EFCB44CBA9C1_OFFSET UNITYSDK_OFFSET(0xA867220)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_EC861120F410BADC_OFFSET UNITYSDK_OFFSET(0xA866440)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xA867470)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_F26AFC15917F0D52_OFFSET UNITYSDK_OFFSET(0xA866DA0)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_F6D8B25630BBFEEF_OFFSET UNITYSDK_OFFSET(0xA865A50)
#define CLASS_1_15A1007AAFA3BB2F_METHOD_1_FAE46DEDB7732427_OFFSET UNITYSDK_OFFSET(0xA866900)
#define CLASS_1_15A1007AAFA3BB2F_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0xA865E30)
#define CLASS_1_15A1007AAFA3BB2F_SET_NAMEEX_OFFSET UNITYSDK_OFFSET(0xA8661B0)
#define CLASS_1_15A1007AAFA3BB2F_SET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0xA866190)
#define CLASS_1_15A1007AAFA3BB2F__CCTOR_OFFSET UNITYSDK_OFFSET(0xA867CF0)
#define CLASS_1_15A1007AAFA3BB2F__CTOR_OFFSET UNITYSDK_OFFSET(0xA865E10)
#define CLASS_1_15A1007AAFA3BB2F___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA867D60)
#define CLASS_1_15A1007AAFA3BB2F___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA867D70)

inline static constexpr unsigned int Class_1_15A1007AAFA3BB2F_TypeDefinitionIndex = 65258;

class Class_1_15A1007AAFA3BB2F : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A1007AAFA3BB2F_TypeDefinitionIndex)->GetStaticField(0x65AA0);
	}
	static ::UnityEngine::Rendering::VolumeProfile** StaticGet_Field_1_1()
	{
		return (::UnityEngine::Rendering::VolumeProfile**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A1007AAFA3BB2F_TypeDefinitionIndex)->GetStaticField(0x65AA8);
	}
	::System::String* _ProfilePathEx_k__BackingField; // 0x10
	::System::String* _NameEx_k__BackingField; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::Int32 Field_1_5; // 0x24
	::System::Int32 Field_1_6; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::System::Int32 Field_1_8; // 0x30
	::System::Int32 Field_1_9; // 0x34
	::System::Int32 Field_1_10; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2B6FC03FCF0CAB75(::Il2CppArray<::System::String*>*& a1, ::Il2CppArray<::System::Type*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_2B6FC03FCF0CAB75_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_538F7238C53ACA06(::System::String* a1, ::Il2CppArray<::System::String*>*& a2, ::Il2CppArray<::System::Type*>*& a3)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_538F7238C53ACA06_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F6D8B25630BBFEEF(::Class_1_15A1007AAFA3BB2F* a1, ::Class_1_15A1007AAFA3BB2F* a2)
	{
		return ((::System::Boolean(*)(::Class_1_15A1007AAFA3BB2F*, ::Class_1_15A1007AAFA3BB2F*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_F6D8B25630BBFEEF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1A804598C98D707C(::Class_1_15A1007AAFA3BB2F* a1, ::Class_1_15A1007AAFA3BB2F* a2)
	{
		return ((::System::Boolean(*)(::Class_1_15A1007AAFA3BB2F*, ::Class_1_15A1007AAFA3BB2F*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1A804598C98D707C_OFFSET))(a1, a2);
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

	::Class_0_16E4307DCC419505_312* get_ActiveProfileTransitionTarget()
	{
		return ((::Class_0_16E4307DCC419505_312*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this);
	}

	::System::Void set_ActiveProfileTransitionTarget(::Class_0_16E4307DCC419505_312* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_312*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_1A7F9F3B13A09C96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1A7F9F3B13A09C96_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_1A7F9F3B13A09C96_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1A7F9F3B13A09C96_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Void Method_1_1A7F9F3B13A09C96_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1A7F9F3B13A09C96_2_OFFSET))(this, a1);
	}

	::System::String* get_ProfilePathEx()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_GET_PROFILEPATHEX_OFFSET))(this);
	}

	::System::Void set_ProfilePathEx(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_SET_PROFILEPATHEX_OFFSET))(this, a1);
	}

	::System::String* get_NameEx()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_GET_NAMEEX_OFFSET))(this);
	}

	::System::Void set_NameEx(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_SET_NAMEEX_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_1_46AF51271A0DDE06(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_46AF51271A0DDE06_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D3884011DB647498(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_D3884011DB647498_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A6DC504D01E84002(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_A6DC504D01E84002_OFFSET))(this, a1);
	}

	::System::Single Method_1_1C6021B5A278C1E5(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Single(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1C6021B5A278C1E5_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_EC861120F410BADC(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_EC861120F410BADC_OFFSET))(this, a1);
	}

	::UnityEngine::Gradient* Method_1_0B8716EFED590CF5(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::UnityEngine::Gradient*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_0B8716EFED590CF5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_77A0CEBA1C6B5ADF(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_77A0CEBA1C6B5ADF_OFFSET))(this, a1);
	}

	::System::Void Method_1_39245349E55FBE9F(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_39245349E55FBE9F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_81955FF4FD66D2A0(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_81955FF4FD66D2A0_OFFSET))(this, a1);
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

	::System::Void Method_1_7FADA506F8493D3F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_7FADA506F8493D3F_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_7E08D375D59A8D08(::Class_0_16E4307DCC419505_312* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_312*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_7E08D375D59A8D08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_1FCD2D53490C980D(::Class_0_16E4307DCC419505_312* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_312*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1FCD2D53490C980D_OFFSET))(this, a1);
	}

	::System::Void Method_1_1FCD2D53490C980D_1(::Class_0_16E4307DCC419505_312* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_312*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_1FCD2D53490C980D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D41059BB825399DF(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_D41059BB825399DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_6AB0047A1E525732(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_6AB0047A1E525732_OFFSET))(this, a1);
	}

	::SceneLightVolume* Method_1_81A74BEB1BAB62E9()
	{
		return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_81A74BEB1BAB62E9_OFFSET))(this);
	}

	::System::Void Method_1_26EA6756F39F4D15(::UnityEngine::Rendering::AmbientVolumneData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F_METHOD_1_26EA6756F39F4D15_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1007AAFA3BB2F___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
