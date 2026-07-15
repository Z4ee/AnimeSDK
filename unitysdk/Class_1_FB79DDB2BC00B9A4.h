#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class EnvWindReceiverBehavior; }
namespace RPG::Client { class EnvWindTriggerBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x15863960)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_1287BF27D6AE216A_OFFSET UNITYSDK_OFFSET(0x15861EC0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_188FC28421330085_OFFSET UNITYSDK_OFFSET(0x15861770)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15863AA0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x15863EE0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_6C2BC763DC725395_OFFSET UNITYSDK_OFFSET(0x15861D60)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_7E80A9733BB68061_OFFSET UNITYSDK_OFFSET(0x15861BF0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8768DB5C5F1C9E04_OFFSET UNITYSDK_OFFSET(0x15861FF0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_882594C8427BC253_OFFSET UNITYSDK_OFFSET(0x15861D20)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8E53278E2D15105D_OFFSET UNITYSDK_OFFSET(0x15864040)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_90016C036FAFD56D_OFFSET UNITYSDK_OFFSET(0x158627D0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x15861910)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C073A23C563BCC9F_OFFSET UNITYSDK_OFFSET(0x15863B80)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x15863D00)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_CF94C38BDCE016F0_OFFSET UNITYSDK_OFFSET(0x15861820)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_D2C95880CD3B2D8E_OFFSET UNITYSDK_OFFSET(0x15862040)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x158615C0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x158623A0)
#define CLASS_1_FB79DDB2BC00B9A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x15864BF0)
#define CLASS_1_FB79DDB2BC00B9A4__CTOR_OFFSET UNITYSDK_OFFSET(0x15861700)

inline static constexpr unsigned int Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex = 47776;

class Class_1_FB79DDB2BC00B9A4 : public ::System::Object
{
public:
	static ::Class_1_FB79DDB2BC00B9A4** StaticGet_Field_1_0()
	{
		return (::Class_1_FB79DDB2BC00B9A4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x29A60);
	}
	static ::UnityEngine::Vector3Int* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x7980);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x798C);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x7990);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x7994);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x7998);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x799C);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x79A0);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x79A4);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x79A8);
	}
	static ::UnityEngine::Vector3Int* StaticGet_Field_1_10()
	{
		return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x79AC);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x79B8);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x79BC);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x79C0);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x79C4);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x79C8);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x79CC);
	}
	::UnityEngine::RenderTexture* Field_1_17; // 0x10
	::UnityEngine::ComputeShader* Field_1_18; // 0x18
	::UnityEngine::Texture3D* Field_1_19; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* Field_1_20; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* Field_1_21; // 0x30
	::UnityEngine::ComputeBuffer* Field_1_22; // 0x38
	::System::Int32 Field_1_23; // 0x40
	::UnityEngine::Vector4 Field_1_24; // 0x44
	::UnityEngine::Vector3 Field_1_25; // 0x54
	::UnityEngine::Vector3Int Field_1_26; // 0x60
	::System::Boolean Field_1_27; // 0x6C
	::System::Boolean Field_1_28; // 0x6D
	::UnityEngine::Vector3 Field_1_29; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4__CCTOR_OFFSET))();
	}

	static ::Class_1_FB79DDB2BC00B9A4* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_FB79DDB2BC00B9A4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_E4886687508BA48F_OFFSET))();
	}

	::UnityEngine::ComputeShader* Method_1_188FC28421330085()
	{
		return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_188FC28421330085_OFFSET))(this);
	}

	::System::Void Method_1_CF94C38BDCE016F0(::RPG::Client::EnvWindTriggerBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindTriggerBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_CF94C38BDCE016F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E80A9733BB68061(::RPG::Client::EnvWindTriggerBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindTriggerBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_7E80A9733BB68061_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* Method_1_882594C8427BC253()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_882594C8427BC253_OFFSET))(this);
	}

	::System::Void Method_1_6C2BC763DC725395(::RPG::Client::EnvWindReceiverBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_6C2BC763DC725395_OFFSET))(this, a1);
	}

	::System::Void Method_1_1287BF27D6AE216A(::RPG::Client::EnvWindReceiverBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_1287BF27D6AE216A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* Method_1_8768DB5C5F1C9E04()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8768DB5C5F1C9E04_OFFSET))(this);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_D2C95880CD3B2D8E(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_D2C95880CD3B2D8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_C8EED11299FD17DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C8EED11299FD17DB_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_C073A23C563BCC9F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C073A23C563BCC9F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_90016C036FAFD56D(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3Int a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_90016C036FAFD56D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_1_8E53278E2D15105D(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8E53278E2D15105D_OFFSET))(this, a1);
	}
};
