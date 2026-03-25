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

#define CLASS_1_D1BA5286C36F3926_METHOD_1_16670DB329511C8C_OFFSET UNITYSDK_OFFSET(0xA1BB7B0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_188FC28421330085_OFFSET UNITYSDK_OFFSET(0xA1BB360)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0xA1BB4B0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_409C728D46688DDD_OFFSET UNITYSDK_OFFSET(0xA1BBB40)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_44C64E801CDFD25B_OFFSET UNITYSDK_OFFSET(0xA1BB9E0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xA1BD5F0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_6EE03B4F9BC0C9F3_OFFSET UNITYSDK_OFFSET(0xA1BC2F0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_8768DB5C5F1C9E04_OFFSET UNITYSDK_OFFSET(0xA1BBAF0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_882594C8427BC253_OFFSET UNITYSDK_OFFSET(0xA1BB8C0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_8E53278E2D15105D_OFFSET UNITYSDK_OFFSET(0xA1BD930)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xA1BD3B0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0xA1BD820)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_C073A23C563BCC9F_OFFSET UNITYSDK_OFFSET(0xA1BD450)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_CF94C38BDCE016F0_OFFSET UNITYSDK_OFFSET(0xA1BB410)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xA1BD2C0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0xA1BB1B0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xA1BBEC0)
#define CLASS_1_D1BA5286C36F3926_METHOD_1_FE532D41618BFAF2_OFFSET UNITYSDK_OFFSET(0xA1BB900)
#define CLASS_1_D1BA5286C36F3926__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1BE520)
#define CLASS_1_D1BA5286C36F3926__CTOR_OFFSET UNITYSDK_OFFSET(0xA1BB2F0)

inline static constexpr unsigned int Class_1_D1BA5286C36F3926_TypeDefinitionIndex = 40319;

class Class_1_D1BA5286C36F3926 : public ::System::Object
{
public:
	static ::Class_1_D1BA5286C36F3926** StaticGet_Field_1_0()
	{
		return (::Class_1_D1BA5286C36F3926**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x22C10);
	}
	static ::System::Int32* StaticGet_Field_1_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x90F0);
	}
	static ::UnityEngine::Vector3Int* StaticGet_Field_1_6()
	{
		return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x90F4);
	}
	static ::System::Int32* StaticGet_Field_1_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9100);
	}
	static ::System::Int32* StaticGet_Field_1_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9104);
	}
	static ::System::Int32* StaticGet_Field_1_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9108);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x910C);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9110);
	}
	static ::System::Int32* StaticGet_Field_1_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9114);
	}
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9118);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x911C);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9120);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9124);
	}
	static ::System::Int32* StaticGet_Field_1_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9128);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x912C);
	}
	static ::System::Int32* StaticGet_Field_1_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9130);
	}
	static ::UnityEngine::Vector3Int* StaticGet_Field_1_7()
	{
		return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1BA5286C36F3926_TypeDefinitionIndex)->GetStaticField(0x9134);
	}
	::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* Field_1_1; // 0x18
	::UnityEngine::ComputeShader* Field_1_3; // 0x20
	::UnityEngine::Texture3D* Field_1_14; // 0x28
	::UnityEngine::RenderTexture* Field_1_13; // 0x30
	::UnityEngine::ComputeBuffer* Field_1_4; // 0x38
	::UnityEngine::Vector4 Field_1_11; // 0x40
	::UnityEngine::Vector3 Field_1_10; // 0x50
	::System::Boolean Field_1_8; // 0x5C
	::System::Boolean Field_1_5; // 0x5D
	::UnityEngine::Vector3Int Field_1_12; // 0x60
	::System::Int32 Field_1_18; // 0x6C
	::UnityEngine::Vector3 Field_1_9; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926__CCTOR_OFFSET))();
	}

	static ::Class_1_D1BA5286C36F3926* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_D1BA5286C36F3926*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_E4886687508BA48F_OFFSET))();
	}

	::UnityEngine::ComputeShader* Method_1_188FC28421330085()
	{
		return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_188FC28421330085_OFFSET))(this);
	}

	::System::Void Method_1_CF94C38BDCE016F0(::RPG::Client::EnvWindTriggerBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindTriggerBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_CF94C38BDCE016F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_16670DB329511C8C(::RPG::Client::EnvWindTriggerBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindTriggerBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_16670DB329511C8C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* Method_1_882594C8427BC253()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_882594C8427BC253_OFFSET))(this);
	}

	::System::Void Method_1_FE532D41618BFAF2(::RPG::Client::EnvWindReceiverBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_FE532D41618BFAF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_44C64E801CDFD25B(::RPG::Client::EnvWindReceiverBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_44C64E801CDFD25B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* Method_1_8768DB5C5F1C9E04()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_8768DB5C5F1C9E04_OFFSET))(this);
	}

	::System::Void Method_1_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_226842F6044F973B_OFFSET))(this);
	}

	::System::Void Method_1_409C728D46688DDD(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_409C728D46688DDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_C073A23C563BCC9F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_C073A23C563BCC9F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6EE03B4F9BC0C9F3(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3Int a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_6EE03B4F9BC0C9F3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_1_8E53278E2D15105D(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_D1BA5286C36F3926_METHOD_1_8E53278E2D15105D_OFFSET))(this, a1);
	}
};
