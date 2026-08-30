#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B947D336595B4072;
namespace RPG::Client { class IRIManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }

#define CLASS_1_295E8BB3D2CFC112_GET_NAMEPREFIX_OFFSET UNITYSDK_OFFSET(0xB6FDE40)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_00E983B7B1CF9C88_OFFSET UNITYSDK_OFFSET(0xB700650)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0xB703A20)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_122E4D3C85C44B1F_OFFSET UNITYSDK_OFFSET(0xB702560)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_31119B1336ADBB17_OFFSET UNITYSDK_OFFSET(0xB703490)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0xB7039C0)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0xB6FE080)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_3A7AB6A3EF7DB649_OFFSET UNITYSDK_OFFSET(0xB705B40)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_4A4515201D6864D6_OFFSET UNITYSDK_OFFSET(0xB7038E0)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_589D24CC09AEFD72_OFFSET UNITYSDK_OFFSET(0xB700850)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_591DB40D94381FB1_OFFSET UNITYSDK_OFFSET(0xB701470)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_66B24763A40A9459_OFFSET UNITYSDK_OFFSET(0xB703A80)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_6EE01089A7DB7B99_OFFSET UNITYSDK_OFFSET(0xB704D90)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_7C1D7BEA01F5112B_OFFSET UNITYSDK_OFFSET(0xB7019F0)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_7E5F0DEAB1A4660F_OFFSET UNITYSDK_OFFSET(0xB6FFC90)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_8206F674DC5E9047_OFFSET UNITYSDK_OFFSET(0xB701300)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_85018EE526A8087D_OFFSET UNITYSDK_OFFSET(0xB7010D0)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_85E43FE58216B6E3_OFFSET UNITYSDK_OFFSET(0xB701650)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_8C75C8487EB97431_OFFSET UNITYSDK_OFFSET(0xB704230)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_8CD7978861C9A524_OFFSET UNITYSDK_OFFSET(0xB7002C0)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_9404E60A4C29EB0B_OFFSET UNITYSDK_OFFSET(0xB6FDDE0)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_98EFF476B0C91E90_OFFSET UNITYSDK_OFFSET(0xB6FE000)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xB704730)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_A35B3CBC9DADB798_OFFSET UNITYSDK_OFFSET(0xB7004E0)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_A7F299268469013A_OFFSET UNITYSDK_OFFSET(0xB6FED50)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_A869A2D944B4A769_OFFSET UNITYSDK_OFFSET(0xB703950)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0xB701C00)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_ABD6371ACA48CEC8_OFFSET UNITYSDK_OFFSET(0xB703EE0)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_C9D6F9890A05C022_OFFSET UNITYSDK_OFFSET(0xB703170)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_DE2A6852EC2E6039_OFFSET UNITYSDK_OFFSET(0xB704C90)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_E10EA10A9FAD3128_OFFSET UNITYSDK_OFFSET(0xB6FDF00)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_E351A30854F091B4_OFFSET UNITYSDK_OFFSET(0xB6FDF80)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_F22B224C1F7A9C72_OFFSET UNITYSDK_OFFSET(0xB6FE330)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_F35B6652E77F557B_OFFSET UNITYSDK_OFFSET(0xB6FE6B0)
#define CLASS_1_295E8BB3D2CFC112_METHOD_1_FE8A4C9B26FAE9AF_OFFSET UNITYSDK_OFFSET(0xB6FE4A0)
#define CLASS_1_295E8BB3D2CFC112_SET_NAMEPREFIX_OFFSET UNITYSDK_OFFSET(0xB6FDEA0)
#define CLASS_1_295E8BB3D2CFC112__CCTOR_OFFSET UNITYSDK_OFFSET(0xB705E90)
#define CLASS_1_295E8BB3D2CFC112__CTOR_OFFSET UNITYSDK_OFFSET(0xB705E80)

inline static constexpr unsigned int Class_1_295E8BB3D2CFC112_TypeDefinitionIndex = 47939;

class Class_1_295E8BB3D2CFC112 : public ::System::Object
{
public:
	static ::UnityEngine::Texture3D** StaticGet_DOPMFGCCPHN()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66940);
	}
	static ::RPG::Client::IRIManager** StaticGet_KJEGMPNCGEH()
	{
		return (::RPG::Client::IRIManager**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66948);
	}
	static ::UnityEngine::Texture2D** StaticGet_DAJDFLBAFID()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66950);
	}
	static ::UnityEngine::GameObject** StaticGet_PJBHBLKMMCA()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66958);
	}
	static ::UnityEngine::GameObject** StaticGet_GBOMGICCGFD()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66960);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_NCIGENDIFEM()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66968);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_MHGKHFDKJNF()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66970);
	}
	static ::UnityEngine::Material** StaticGet_OLFGMFHAFOH()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66978);
	}
	static ::UnityEngine::GameObject** StaticGet_GFCPIDAPCDA()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66980);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_EIKALCLPBII()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66988);
	}
	static ::UnityEngine::GameObject** StaticGet_IEOHDABDBNH()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66990);
	}
	static ::Class_1_B947D336595B4072** StaticGet_JOOGPAFFGNM()
	{
		return (::Class_1_B947D336595B4072**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x66998);
	}
	static ::UnityEngine::GameObject** StaticGet_EPAFDKJAIJM()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x669A0);
	}
	static ::System::String** StaticGet_KBMCPCFJCGC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x669A8);
	}
	static ::System::String** StaticGet__NamePrefix_k__BackingField()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x669B0);
	}
	static ::UnityEngine::GameObject** StaticGet_ELGBEFHDFFJ()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x669B8);
	}
	static ::UnityEngine::Cubemap** StaticGet_DKOIHLOONGC()
	{
		return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x669C0);
	}
	static ::UnityEngine::GameObject** StaticGet_JIIHDNLJMLH()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x669C8);
	}
	static ::System::Int32* StaticGet_OJLGNPNFEDM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x15270);
	}
	static ::UnityEngine::Vector3* StaticGet_MMAPJAOMPAC()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x15274);
	}
	static ::UnityEngine::Bounds* StaticGet_BMKHMEDKICK()
	{
		return (::UnityEngine::Bounds*)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x15280);
	}
	static ::System::Int32* StaticGet_JJBLNIPFIOG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x15298);
	}
	static ::System::Single* StaticGet_CMEOMFPMDMD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_295E8BB3D2CFC112_TypeDefinitionIndex)->GetStaticField(0x1529C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_9404E60A4C29EB0B()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_9404E60A4C29EB0B_OFFSET))();
	}

	static ::System::String* get_NamePrefix()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_GET_NAMEPREFIX_OFFSET))();
	}

	static ::System::Void set_NamePrefix(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_SET_NAMEPREFIX_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Material*>* Method_1_E10EA10A9FAD3128()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_E10EA10A9FAD3128_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_1_E351A30854F091B4()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_E351A30854F091B4_OFFSET))();
	}

	static ::System::Void Method_1_98EFF476B0C91E90(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_98EFF476B0C91E90_OFFSET))(a1);
	}

	static ::System::Void Method_1_F22B224C1F7A9C72(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_F22B224C1F7A9C72_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FE8A4C9B26FAE9AF(::UnityEngine::Shader* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Shader*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_FE8A4C9B26FAE9AF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8CD7978861C9A524(::UnityEngine::Material* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_8CD7978861C9A524_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A35B3CBC9DADB798(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_A35B3CBC9DADB798_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_00E983B7B1CF9C88(::UnityEngine::Shader* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Shader*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_00E983B7B1CF9C88_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_85018EE526A8087D(::UnityEngine::Material* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_85018EE526A8087D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8206F674DC5E9047(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_8206F674DC5E9047_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_591DB40D94381FB1(::UnityEngine::Shader* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Shader*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_591DB40D94381FB1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_7C1D7BEA01F5112B(::UnityEngine::Material* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_7C1D7BEA01F5112B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_A94BAB85685275CB_OFFSET))(a1);
	}

	static ::System::Void Method_1_C9D6F9890A05C022(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_C9D6F9890A05C022_OFFSET))(a1);
	}

	static ::System::Void Method_1_31119B1336ADBB17(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_31119B1336ADBB17_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_4A4515201D6864D6()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_4A4515201D6864D6_OFFSET))();
	}

	static ::System::Void Method_1_A869A2D944B4A769(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_A869A2D944B4A769_OFFSET))(a1);
	}

	static ::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_3150507749BCEAEC_OFFSET))();
	}

	static ::System::Void Method_1_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_055E3BF644BB741B_OFFSET))(a1);
	}

	static ::System::Void Method_1_66B24763A40A9459(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_66B24763A40A9459_OFFSET))(a1);
	}

	static ::UnityEngine::Bounds Method_1_ABD6371ACA48CEC8(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_ABD6371ACA48CEC8_OFFSET))(a1);
	}

	static ::System::Single Method_1_8C75C8487EB97431(::UnityEngine::Camera* a1, ::UnityEngine::Bounds a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_8C75C8487EB97431_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_9D8CB5E47C1952BD_OFFSET))();
	}

	static ::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_3411EC0F4D7F3117_OFFSET))(a1);
	}

	static ::System::Void Method_1_DE2A6852EC2E6039(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_DE2A6852EC2E6039_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F35B6652E77F557B(::UnityEngine::Material*& a1, ::Il2CppArray<::System::String*>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Material*&, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_F35B6652E77F557B_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Mesh* Method_1_122E4D3C85C44B1F(::System::Int32 a1)
	{
		return ((::UnityEngine::Mesh*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_122E4D3C85C44B1F_OFFSET))(a1);
	}

	static ::System::Void Method_1_85E43FE58216B6E3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_85E43FE58216B6E3_OFFSET))(a1);
	}

	static ::System::Void Method_1_589D24CC09AEFD72(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_589D24CC09AEFD72_OFFSET))(a1);
	}

	static ::System::Void Method_1_A7F299268469013A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_A7F299268469013A_OFFSET))(a1);
	}

	static ::UnityEngine::Mesh* Method_1_6EE01089A7DB7B99(::UnityEngine::Mesh* a1)
	{
		return ((::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_6EE01089A7DB7B99_OFFSET))(a1);
	}

	static ::System::Void Method_1_7E5F0DEAB1A4660F(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_7E5F0DEAB1A4660F_OFFSET))(a1, a2, a3);
	}

	::RPG::Client::IRIManager* Method_1_3A7AB6A3EF7DB649()
	{
		return ((::RPG::Client::IRIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_295E8BB3D2CFC112_METHOD_1_3A7AB6A3EF7DB649_OFFSET))(this);
	}
};
