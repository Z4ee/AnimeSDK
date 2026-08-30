#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5F753285A84494D_InfoType.h"
#include "unitysdk/Class_1_D5F753285A84494D_Struct_2_6DD8A4C3C136E201.h"
#include "unitysdk/RPG/CustomRP/AABB.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_367;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D5F753285A84494D_METHOD_1_037A1A53574EAB40_OFFSET UNITYSDK_OFFSET(0x1A819EC0)
#define CLASS_1_D5F753285A84494D_METHOD_1_049F6846C822DAB4_OFFSET UNITYSDK_OFFSET(0x1A81BC90)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_1_OFFSET UNITYSDK_OFFSET(0x1A81CAB0)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_2_OFFSET UNITYSDK_OFFSET(0x1A81CB10)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_3_OFFSET UNITYSDK_OFFSET(0x1A81CB80)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_4_OFFSET UNITYSDK_OFFSET(0x1A81CBE0)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_5_OFFSET UNITYSDK_OFFSET(0x1A81CC50)
#define CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_OFFSET UNITYSDK_OFFSET(0x1A81CA40)
#define CLASS_1_D5F753285A84494D_METHOD_1_20D1790D29D35F82_OFFSET UNITYSDK_OFFSET(0x1A81B550)
#define CLASS_1_D5F753285A84494D_METHOD_1_2AA2EA1578D45CF5_OFFSET UNITYSDK_OFFSET(0x1A81B3E0)
#define CLASS_1_D5F753285A84494D_METHOD_1_33468D52342F8AF8_OFFSET UNITYSDK_OFFSET(0x1A81CCC0)
#define CLASS_1_D5F753285A84494D_METHOD_1_3E4F38E12ACBCE4A_OFFSET UNITYSDK_OFFSET(0x1A819A60)
#define CLASS_1_D5F753285A84494D_METHOD_1_57E22D6A7003BF96_OFFSET UNITYSDK_OFFSET(0x1A81A7F0)
#define CLASS_1_D5F753285A84494D_METHOD_1_5DE9667DA47C9DE0_OFFSET UNITYSDK_OFFSET(0x1A81A850)
#define CLASS_1_D5F753285A84494D_METHOD_1_60EB1E863BB9FF33_OFFSET UNITYSDK_OFFSET(0x1A81C0F0)
#define CLASS_1_D5F753285A84494D_METHOD_1_6169B85EF61768B0_OFFSET UNITYSDK_OFFSET(0x1A81C3D0)
#define CLASS_1_D5F753285A84494D_METHOD_1_62CB39CF94F2C0E5_OFFSET UNITYSDK_OFFSET(0x1A81CDB0)
#define CLASS_1_D5F753285A84494D_METHOD_1_633BD41FEBF1F191_OFFSET UNITYSDK_OFFSET(0x1A81B740)
#define CLASS_1_D5F753285A84494D_METHOD_1_68FA18482EBFD3B9_OFFSET UNITYSDK_OFFSET(0x1A81A280)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_1_OFFSET UNITYSDK_OFFSET(0x1A81CE90)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_2_OFFSET UNITYSDK_OFFSET(0x1A81CF00)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_3_OFFSET UNITYSDK_OFFSET(0x1A81CF70)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_4_OFFSET UNITYSDK_OFFSET(0x1A81CFE0)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_5_OFFSET UNITYSDK_OFFSET(0x1A81D050)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_6_OFFSET UNITYSDK_OFFSET(0x1A81D0C0)
#define CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_OFFSET UNITYSDK_OFFSET(0x1A81CD40)
#define CLASS_1_D5F753285A84494D_METHOD_1_6BFDEA292847ED02_OFFSET UNITYSDK_OFFSET(0x1A81C140)
#define CLASS_1_D5F753285A84494D_METHOD_1_6DC710354BE30C42_OFFSET UNITYSDK_OFFSET(0x1A819F50)
#define CLASS_1_D5F753285A84494D_METHOD_1_72B9BA4F04CBB3F4_OFFSET UNITYSDK_OFFSET(0x1A81BE00)
#define CLASS_1_D5F753285A84494D_METHOD_1_74535969734C75CB_OFFSET UNITYSDK_OFFSET(0x1A81AA70)
#define CLASS_1_D5F753285A84494D_METHOD_1_77DA78E77407F003_OFFSET UNITYSDK_OFFSET(0x1A81AFF0)
#define CLASS_1_D5F753285A84494D_METHOD_1_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0x1A81C810)
#define CLASS_1_D5F753285A84494D_METHOD_1_81D191FDC0633772_OFFSET UNITYSDK_OFFSET(0x1A81AB00)
#define CLASS_1_D5F753285A84494D_METHOD_1_905CF6772C26FD13_OFFSET UNITYSDK_OFFSET(0x1A81A0D0)
#define CLASS_1_D5F753285A84494D_METHOD_1_97607FDD1D4C443A_OFFSET UNITYSDK_OFFSET(0x1A819DE0)
#define CLASS_1_D5F753285A84494D_METHOD_1_A94A2ECD034033DF_OFFSET UNITYSDK_OFFSET(0x1A81B810)
#define CLASS_1_D5F753285A84494D_METHOD_1_B9CB2A09B8BFBD50_OFFSET UNITYSDK_OFFSET(0x1A81ADB0)
#define CLASS_1_D5F753285A84494D_METHOD_1_CA0EDDB4CB41568B_OFFSET UNITYSDK_OFFSET(0x1A81A8C0)
#define CLASS_1_D5F753285A84494D_METHOD_1_CA66F06205F1BED0_1_OFFSET UNITYSDK_OFFSET(0x1A81B690)
#define CLASS_1_D5F753285A84494D_METHOD_1_CA66F06205F1BED0_OFFSET UNITYSDK_OFFSET(0x1A81B5E0)
#define CLASS_1_D5F753285A84494D_METHOD_1_DAEB8A0C99C60D85_OFFSET UNITYSDK_OFFSET(0x1A81C850)
#define CLASS_1_D5F753285A84494D_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1A81D130)
#define CLASS_1_D5F753285A84494D_METHOD_1_FDC7958A99D11191_OFFSET UNITYSDK_OFFSET(0x1A81A6E0)
#define CLASS_1_D5F753285A84494D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A81D170)

inline static constexpr unsigned int Class_1_D5F753285A84494D_TypeDefinitionIndex = 49565;

class Class_1_D5F753285A84494D : public ::System::Object
{
public:
	static ::System::String** StaticGet_NMNBFKCCHMN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0xC400);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_IJGALHLICJH()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0xC408);
	}
	static ::System::Int32* StaticGet_BCHOIJJPLPD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D20);
	}
	static ::System::UInt32* StaticGet_PLAMAHOCIIP()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D24);
	}
	static ::System::Int32* StaticGet_KNIFBMGGLEP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D28);
	}
	static ::System::UInt32* StaticGet_MBAOKMFKKEA()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D2C);
	}
	static ::System::Int32* StaticGet_JCBCHMBKNGC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D30);
	}
	static ::System::UInt32* StaticGet_HLFKPOMOENB()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D34);
	}
	static ::System::UInt32* StaticGet_KELODJPGNNE()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D38);
	}
	static ::System::UInt32* StaticGet_HJOGHBCEGDG()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D3C);
	}
	static ::System::Int32* StaticGet_PCOMOGBGHEK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D40);
	}
	static ::System::Int32* StaticGet_LFGGCEDOJFB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D44);
	}
	static ::System::UInt32* StaticGet_FGKFKIFLDGG()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D48);
	}
	static ::System::Int32* StaticGet_BCGMECNNGDG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5F753285A84494D_TypeDefinitionIndex)->GetStaticField(0x3D4C);
	}
	// static const ::System::Int32 MPKICONJOFO = 0xFFFFFFFF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Mesh* Method_1_3E4F38E12ACBCE4A(::UnityEngine::Mesh* a1)
	{
		return ((::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_3E4F38E12ACBCE4A_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_97607FDD1D4C443A(::UnityEngine::Matrix4x4 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_97607FDD1D4C443A_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_037A1A53574EAB40(::UnityEngine::Matrix4x4 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_037A1A53574EAB40_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_6DC710354BE30C42(::UnityEngine::Matrix4x4 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6DC710354BE30C42_OFFSET))(a1);
	}

	static ::UnityEngine::Matrix4x4 Method_1_905CF6772C26FD13(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_905CF6772C26FD13_OFFSET))(a1);
	}

	static ::System::Void Method_1_68FA18482EBFD3B9(::UnityEngine::Transform* a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_68FA18482EBFD3B9_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_FDC7958A99D11191(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_FDC7958A99D11191_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_57E22D6A7003BF96(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_57E22D6A7003BF96_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_5DE9667DA47C9DE0(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_5DE9667DA47C9DE0_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_CA0EDDB4CB41568B(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_CA0EDDB4CB41568B_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_74535969734C75CB(::UnityEngine::Vector3 a1)
	{
		return ((::System::UInt32(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_74535969734C75CB_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_81D191FDC0633772(::RPG::CustomRP::AABB a1)
	{
		return ((::System::UInt32(*)(::RPG::CustomRP::AABB))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_81D191FDC0633772_OFFSET))(a1);
	}

	static ::RPG::CustomRP::AABB Method_1_B9CB2A09B8BFBD50(::UnityEngine::Mesh* a1)
	{
		return ((::RPG::CustomRP::AABB(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_B9CB2A09B8BFBD50_OFFSET))(a1);
	}

	static ::RPG::CustomRP::AABB Method_1_77DA78E77407F003(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::RPG::CustomRP::AABB(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_77DA78E77407F003_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2AA2EA1578D45CF5(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_2AA2EA1578D45CF5_OFFSET))(a1);
	}

	static ::System::Void Method_1_20D1790D29D35F82(::Class_1_D5F753285A84494D_InfoType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_D5F753285A84494D_InfoType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_20D1790D29D35F82_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CA66F06205F1BED0(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_CA66F06205F1BED0_OFFSET))(a1);
	}

	static ::System::Void Method_1_CA66F06205F1BED0_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_CA66F06205F1BED0_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_633BD41FEBF1F191(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_633BD41FEBF1F191_OFFSET))(a1);
	}

	static ::RPG::CustomRP::CustomLightQualityFilter Method_1_A94A2ECD034033DF()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_A94A2ECD034033DF_OFFSET))();
	}

	static ::System::Void Method_1_049F6846C822DAB4(::System::String* a1, ::System::String*& a2, ::System::String*& a3, ::RPG::CustomRP::CustomLightQualityFilter& a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&, ::RPG::CustomRP::CustomLightQualityFilter&))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_049F6846C822DAB4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_72B9BA4F04CBB3F4(::System::String* a1, ::System::String*& a2, ::System::String*& a3, ::RPG::CustomRP::CustomLightQualityFilter& a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&, ::RPG::CustomRP::CustomLightQualityFilter&))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_72B9BA4F04CBB3F4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_60EB1E863BB9FF33(::UnityEngine::Object* a1)
	{
		return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_60EB1E863BB9FF33_OFFSET))(a1);
	}

	static ::System::Type* Method_1_6BFDEA292847ED02(::System::Type* a1, ::System::Type* a2)
	{
		return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6BFDEA292847ED02_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_367* Method_1_6169B85EF61768B0(::UnityEngine::Component* a1)
	{
		return ((::Class_0_16E4307DCC419505_367*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6169B85EF61768B0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_797B0DC3D00A8877(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_797B0DC3D00A8877_OFFSET))(a1);
	}

	static ::Class_1_D5F753285A84494D_Struct_2_6DD8A4C3C136E201 Method_1_DAEB8A0C99C60D85(::System::Int32 a1)
	{
		return ((::Class_1_D5F753285A84494D_Struct_2_6DD8A4C3C136E201(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_DAEB8A0C99C60D85_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68_2(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_2_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68_3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_3_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68_4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_4_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A010C928AC92A68_5(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_1A010C928AC92A68_5_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_33468D52342F8AF8(::System::Int32 a1, ::System::Int32 a2, ::ScenenLightManager::LightTypeID a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_33468D52342F8AF8_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_62CB39CF94F2C0E5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::ScenenLightManager::LightTypeID a4)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_62CB39CF94F2C0E5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_2_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_3_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_4_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_5(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_5_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_6A873F2D91BF4EED_6(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_6A873F2D91BF4EED_6_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}
};
