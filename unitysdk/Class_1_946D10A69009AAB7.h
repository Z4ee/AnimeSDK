#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0F16E8144E7D67AC.h"
#include "unitysdk/Struct_2_313DB38E01B148C7.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2181504E881DDEE4;
class Class_1_76DB84416A8BD8BA;
class Class_1_B890BA8430A32496_Class_2_B57A8ED4EE569CA0;
class Class_1_C0C09ABD309C60F2;
class Class_1_D0A2F53B2806C61B;
class Class_2_208CC9941471731A_352;
class Class_3_53ABC26766CE1F30;
class Class_3_5D6E6A4B36F53E3B;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_946D10A69009AAB7_METHOD_1_0CF8E49FB6B8C01F_OFFSET UNITYSDK_OFFSET(0x119B8840)
#define CLASS_1_946D10A69009AAB7_METHOD_1_2031472E7D0D0FC5_OFFSET UNITYSDK_OFFSET(0x119B8600)
#define CLASS_1_946D10A69009AAB7_METHOD_1_35D2868F291B8004_OFFSET UNITYSDK_OFFSET(0x119B2CF0)
#define CLASS_1_946D10A69009AAB7_METHOD_1_428DEC61BE1E3C16_1_OFFSET UNITYSDK_OFFSET(0x119B7B60)
#define CLASS_1_946D10A69009AAB7_METHOD_1_428DEC61BE1E3C16_OFFSET UNITYSDK_OFFSET(0x119B5200)
#define CLASS_1_946D10A69009AAB7_METHOD_1_472A819FDF2C1D8D_OFFSET UNITYSDK_OFFSET(0x119B7590)
#define CLASS_1_946D10A69009AAB7_METHOD_1_4EAF8AA425CCCA0D_OFFSET UNITYSDK_OFFSET(0x119B5090)
#define CLASS_1_946D10A69009AAB7_METHOD_1_50F8171BBD4F6D2D_OFFSET UNITYSDK_OFFSET(0x119B7690)
#define CLASS_1_946D10A69009AAB7_METHOD_1_5808BF7CBD565C41_OFFSET UNITYSDK_OFFSET(0x119B3980)
#define CLASS_1_946D10A69009AAB7_METHOD_1_652B37C8DFB8993F_OFFSET UNITYSDK_OFFSET(0x119B30A0)
#define CLASS_1_946D10A69009AAB7_METHOD_1_66AE6D4476EE7AD1_OFFSET UNITYSDK_OFFSET(0x119B6480)
#define CLASS_1_946D10A69009AAB7_METHOD_1_7102DE829D59FC44_OFFSET UNITYSDK_OFFSET(0x119B4F10)
#define CLASS_1_946D10A69009AAB7_METHOD_1_726314F9C16B0CC3_OFFSET UNITYSDK_OFFSET(0x119B5B60)
#define CLASS_1_946D10A69009AAB7_METHOD_1_7863965470E53831_OFFSET UNITYSDK_OFFSET(0x119B5380)
#define CLASS_1_946D10A69009AAB7_METHOD_1_7E41A9673599B867_OFFSET UNITYSDK_OFFSET(0x119B5C00)
#define CLASS_1_946D10A69009AAB7_METHOD_1_80F51F657550EBF0_OFFSET UNITYSDK_OFFSET(0x119B8870)
#define CLASS_1_946D10A69009AAB7_METHOD_1_85A26FB6CE698769_OFFSET UNITYSDK_OFFSET(0x119B8C10)
#define CLASS_1_946D10A69009AAB7_METHOD_1_88DFBA1FC20705AE_OFFSET UNITYSDK_OFFSET(0x119B7BE0)
#define CLASS_1_946D10A69009AAB7_METHOD_1_A841F8A2EF4793F6_OFFSET UNITYSDK_OFFSET(0x119B7800)
#define CLASS_1_946D10A69009AAB7_METHOD_1_AF2A1276CC9CA509_OFFSET UNITYSDK_OFFSET(0x119B34F0)
#define CLASS_1_946D10A69009AAB7_METHOD_1_B6FD934A796F960E_OFFSET UNITYSDK_OFFSET(0x119B50E0)
#define CLASS_1_946D10A69009AAB7_METHOD_1_B8D0F2CF6A6AF08F_OFFSET UNITYSDK_OFFSET(0x119B4040)
#define CLASS_1_946D10A69009AAB7_METHOD_1_B94D1220C76DDEBA_OFFSET UNITYSDK_OFFSET(0x119B6220)
#define CLASS_1_946D10A69009AAB7_METHOD_1_BFF848BBCFF35D84_OFFSET UNITYSDK_OFFSET(0x119B5500)
#define CLASS_1_946D10A69009AAB7_METHOD_1_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x119B5670)
#define CLASS_1_946D10A69009AAB7_METHOD_1_CECC9A810A1D5151_OFFSET UNITYSDK_OFFSET(0x119B2F80)
#define CLASS_1_946D10A69009AAB7_METHOD_1_DCAD38286D6C8395_OFFSET UNITYSDK_OFFSET(0x119B9690)
#define CLASS_1_946D10A69009AAB7_METHOD_1_E3F071054F221B1D_OFFSET UNITYSDK_OFFSET(0x119B5280)
#define CLASS_1_946D10A69009AAB7_METHOD_1_F37C8CCFBD4D28E3_OFFSET UNITYSDK_OFFSET(0x119B7F20)
#define CLASS_1_946D10A69009AAB7_METHOD_1_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x119B9FE0)
#define CLASS_1_946D10A69009AAB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x119B2CA0)

inline static constexpr unsigned int Class_1_946D10A69009AAB7_TypeDefinitionIndex = 88630;

class Class_1_946D10A69009AAB7 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_946D10A69009AAB7_TypeDefinitionIndex)->GetStaticField(0x38D40);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_946D10A69009AAB7_TypeDefinitionIndex)->GetStaticField(0xD740);
	}
	// static const ::System::Int32 Field_1_7 = 0x3F6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_35D2868F291B8004(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_35D2868F291B8004_OFFSET))(a1);
	}

	static ::System::Void Method_1_AF2A1276CC9CA509(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_AF2A1276CC9CA509_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_B8D0F2CF6A6AF08F(::UnityEngine::Vector3 a1, ::MoleMole::Battle::Entity* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_B8D0F2CF6A6AF08F_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_D0A2F53B2806C61B* Method_1_B6FD934A796F960E(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
	{
		return ((::Class_1_D0A2F53B2806C61B*(*)(::System::Int32, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_B6FD934A796F960E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_428DEC61BE1E3C16(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_428DEC61BE1E3C16_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E3F071054F221B1D(::System::String* a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_E3F071054F221B1D_OFFSET))(a1, a2, a3);
	}

	static ::Class_3_53ABC26766CE1F30* Method_1_7863965470E53831(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::Class_3_53ABC26766CE1F30*(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_7863965470E53831_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BFF848BBCFF35D84(::Class_3_53ABC26766CE1F30* a1, ::Struct_2_313DB38E01B148C7& a2)
	{
		return ((::System::Boolean(*)(::Class_3_53ABC26766CE1F30*, ::Struct_2_313DB38E01B148C7&))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_BFF848BBCFF35D84_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CEA32FF190776922()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_CEA32FF190776922_OFFSET))();
	}

	static ::Class_1_D0A2F53B2806C61B* Method_1_726314F9C16B0CC3(::System::Int32 a1, ::System::String* a2, ::Class_2_208CC9941471731A_352* a3)
	{
		return ((::Class_1_D0A2F53B2806C61B*(*)(::System::Int32, ::System::String*, ::Class_2_208CC9941471731A_352*))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_726314F9C16B0CC3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_652B37C8DFB8993F(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_1_C0C09ABD309C60F2* a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::Class_1_C0C09ABD309C60F2*))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_652B37C8DFB8993F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_7E41A9673599B867(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_7E41A9673599B867_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_B94D1220C76DDEBA(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_B94D1220C76DDEBA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_66AE6D4476EE7AD1(::Struct_2_0F16E8144E7D67AC a1, ::Class_1_B890BA8430A32496_Class_2_B57A8ED4EE569CA0* a2, ::Class_1_C0C09ABD309C60F2* a3, ::Class_1_76DB84416A8BD8BA* a4)
	{
		return ((::System::Void(*)(::Struct_2_0F16E8144E7D67AC, ::Class_1_B890BA8430A32496_Class_2_B57A8ED4EE569CA0*, ::Class_1_C0C09ABD309C60F2*, ::Class_1_76DB84416A8BD8BA*))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_66AE6D4476EE7AD1_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_2181504E881DDEE4* Method_1_472A819FDF2C1D8D(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>* a2)
	{
		return ((::Class_1_2181504E881DDEE4*(*)(::System::Int32, ::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>*))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_472A819FDF2C1D8D_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_50F8171BBD4F6D2D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_50F8171BBD4F6D2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A841F8A2EF4793F6(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_A841F8A2EF4793F6_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_428DEC61BE1E3C16_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_428DEC61BE1E3C16_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_88DFBA1FC20705AE(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_88DFBA1FC20705AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F37C8CCFBD4D28E3(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_F37C8CCFBD4D28E3_OFFSET))(a1);
	}

	static ::System::Void Method_1_2031472E7D0D0FC5(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_2031472E7D0D0FC5_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_7102DE829D59FC44(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_7102DE829D59FC44_OFFSET))(a1);
	}

	static ::System::Void Method_1_0CF8E49FB6B8C01F(::Class_3_5D6E6A4B36F53E3B* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::Class_3_5D6E6A4B36F53E3B*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_0CF8E49FB6B8C01F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_80F51F657550EBF0(::Struct_2_76CCAEE20B3AE57C a1)
	{
		return ((::UnityEngine::Vector3(*)(::Struct_2_76CCAEE20B3AE57C))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_80F51F657550EBF0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CECC9A810A1D5151(::UnityEngine::Vector3& a1, ::System::Single& a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_CECC9A810A1D5151_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_85A26FB6CE698769(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_85A26FB6CE698769_OFFSET))(a1);
	}

	static ::System::Void Method_1_5808BF7CBD565C41(::System::Boolean a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::UInt32, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_5808BF7CBD565C41_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F53BAAE38A584428()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_F53BAAE38A584428_OFFSET))();
	}

	static ::System::Void Method_1_DCAD38286D6C8395(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_DCAD38286D6C8395_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4EAF8AA425CCCA0D(::System::UInt32& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_946D10A69009AAB7_METHOD_1_4EAF8AA425CCCA0D_OFFSET))(a1, a2);
	}
};
