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

#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x143B8120)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_1287BF27D6AE216A_OFFSET UNITYSDK_OFFSET(0x143B6680)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_188FC28421330085_OFFSET UNITYSDK_OFFSET(0x143B5F40)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x143B8670)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_7E80A9733BB68061_OFFSET UNITYSDK_OFFSET(0x143B63C0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8768DB5C5F1C9E04_OFFSET UNITYSDK_OFFSET(0x143B67B0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_882594C8427BC253_OFFSET UNITYSDK_OFFSET(0x143B64F0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x143B8250)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8E53278E2D15105D_OFFSET UNITYSDK_OFFSET(0x143B87B0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_90016C036FAFD56D_OFFSET UNITYSDK_OFFSET(0x143B6F90)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x143B60E0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C073A23C563BCC9F_OFFSET UNITYSDK_OFFSET(0x143B8310)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C159D70B87D874CC_OFFSET UNITYSDK_OFFSET(0x143B6530)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x143B8490)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_CF94C38BDCE016F0_OFFSET UNITYSDK_OFFSET(0x143B5FF0)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_D2C95880CD3B2D8E_OFFSET UNITYSDK_OFFSET(0x143B6800)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x143B5D90)
#define CLASS_1_FB79DDB2BC00B9A4_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x143B6B60)
#define CLASS_1_FB79DDB2BC00B9A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x143B9360)
#define CLASS_1_FB79DDB2BC00B9A4__CTOR_OFFSET UNITYSDK_OFFSET(0x143B5ED0)

inline static constexpr unsigned int Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex = 46811;

class Class_1_FB79DDB2BC00B9A4 : public ::System::Object
{
public:
	static ::Class_1_FB79DDB2BC00B9A4** StaticGet_Field_1_0()
	{
		return (::Class_1_FB79DDB2BC00B9A4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0x33110);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA190);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA194);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA198);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA19C);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1A0);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1A4);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1A8);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1AC);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1B0);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1B4);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1B8);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1BC);
	}
	static ::UnityEngine::Vector3Int* StaticGet_Field_1_13()
	{
		return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1C0);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1CC);
	}
	static ::UnityEngine::Vector3Int* StaticGet_Field_1_15()
	{
		return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1D0);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB79DDB2BC00B9A4_TypeDefinitionIndex)->GetStaticField(0xA1DC);
	}
	::UnityEngine::Texture3D* Field_1_17; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* Field_1_18; // 0x18
	::UnityEngine::ComputeBuffer* Field_1_19; // 0x20
	::UnityEngine::RenderTexture* Field_1_20; // 0x28
	::UnityEngine::ComputeShader* Field_1_21; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* Field_1_22; // 0x38
	::UnityEngine::Vector3 Field_1_23; // 0x40
	::System::Boolean Field_1_24; // 0x4C
	::System::Boolean Field_1_25; // 0x4D
	::UnityEngine::Vector3Int Field_1_26; // 0x50
	::UnityEngine::Vector4 Field_1_27; // 0x5C
	::System::Int32 Field_1_28; // 0x6C
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

	::System::Void Method_1_C159D70B87D874CC(::RPG::Client::EnvWindReceiverBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_C159D70B87D874CC_OFFSET))(this, a1);
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

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
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

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_8E53278E2D15105D(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_FB79DDB2BC00B9A4_METHOD_1_8E53278E2D15105D_OFFSET))(this, a1);
	}
};
