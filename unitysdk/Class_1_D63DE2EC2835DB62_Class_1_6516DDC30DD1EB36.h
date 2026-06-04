#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D63DE2EC2835DB62_Class_1_6516DDC30DD1EB36_ShowMatState.h"
#include "unitysdk/System/Object.h"

class Class_1_D63DE2EC2835DB62_Class_1_7454F79F911CC6C3;
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A500B0)
#define CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13A50BF0)
#define CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_METHOD_1_5B739A66F72977DE_OFFSET UNITYSDK_OFFSET(0x13A51360)
#define CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_METHOD_1_92193DE475EFDCC9_OFFSET UNITYSDK_OFFSET(0x13A50960)
#define CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x13A50C50)
#define CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_METHOD_1_F3044C7F0F775E6E_OFFSET UNITYSDK_OFFSET(0x13A50EC0)
#define CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A51CB0)
#define CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13A50E60)
#define CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36__CTOR_OFFSET UNITYSDK_OFFSET(0x13A512B0)

inline static constexpr unsigned int Class_1_D63DE2EC2835DB62_Class_1_6516DDC30DD1EB36_TypeDefinitionIndex = 56864;

class Class_1_D63DE2EC2835DB62_Class_1_6516DDC30DD1EB36 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D63DE2EC2835DB62_Class_1_6516DDC30DD1EB36_TypeDefinitionIndex)->GetStaticField(0x55E00);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D63DE2EC2835DB62_Class_1_6516DDC30DD1EB36_TypeDefinitionIndex)->GetStaticField(0x11010);
	}
	// static const ::System::String* Field_1_2; // 0x0
	::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_4; // 0x18
	::UnityEngine::GameObject* Field_1_5; // 0x20
	::Class_1_D63DE2EC2835DB62_Class_1_6516DDC30DD1EB36_ShowMatState Field_1_6; // 0x28
	::System::Single Field_1_7; // 0x2C
	::System::Single Field_1_8; // 0x30
	::System::Single Field_1_9; // 0x34
	::System::Single Field_1_10; // 0x38
	::System::Single Field_1_11; // 0x3C

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Material* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::UnityEngine::Transform* a1, ::UnityEngine::Material* a2, ::Class_1_D63DE2EC2835DB62_Class_1_7454F79F911CC6C3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::Class_1_D63DE2EC2835DB62_Class_1_7454F79F911CC6C3*))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36__CCTOR_OFFSET))();
	}

	::System::Void Method_1_5B739A66F72977DE(::UnityEngine::Transform* a1, ::UnityEngine::Material* a2, ::Class_1_D63DE2EC2835DB62_Class_1_7454F79F911CC6C3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::Class_1_D63DE2EC2835DB62_Class_1_7454F79F911CC6C3*))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_METHOD_1_5B739A66F72977DE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_F3044C7F0F775E6E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_METHOD_1_F3044C7F0F775E6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_92193DE475EFDCC9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_6516DDC30DD1EB36_METHOD_1_92193DE475EFDCC9_OFFSET))(this, a1);
	}
};
