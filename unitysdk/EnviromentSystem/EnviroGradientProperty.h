#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Color.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0xF30B910)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0xF30C980)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_438A9AA49EC7C989_OFFSET UNITYSDK_OFFSET(0xF30CC30)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xF30CD10)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xF30CE50)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF30CCB0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0xF30CD70)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_77703FEE4F0E8C39_OFFSET UNITYSDK_OFFSET(0xF30B8C0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0xF30CDE0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0xF30BEF0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_8C7189BCDE3E66BF_OFFSET UNITYSDK_OFFSET(0xF30CB40)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_9C79A520038973E2_OFFSET UNITYSDK_OFFSET(0xF30C8D0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68A2E1014D00283_OFFSET UNITYSDK_OFFSET(0xF30BBC0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68F2DE513D46E04_OFFSET UNITYSDK_OFFSET(0xF30B350)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xF30B200)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF30C890)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xF30CA00)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xF30C630)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0xF30C150)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_F33D58546A03D87E_OFFSET UNITYSDK_OFFSET(0xF30CBB0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_FF05AC0AB0D75A04_OFFSET UNITYSDK_OFFSET(0xF30BFA0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0xF30CA70)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF30B5E0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xF304090)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGradientProperty_TypeDefinitionIndex = 46200;

	class EnviroGradientProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet__TmpColorArrayForGradient()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x130C0);
		}
		static ::UnityEngine::Texture2D** StaticGet_EnviroGradientAtlas()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x130C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_EnviromentGradientAtlasID()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x130D0);
		}
		static ::System::Int32* StaticGet_EnviroGradientAtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x59E0);
		}
		// static const ::System::Int32 Atlas_Height = 0x8; // 0x0
		// static const ::System::Int32 Atlas_Width = 0x200; // 0x0
		::UnityEngine::Gradient* m_Value; // 0x48
		::UnityEngine::Gradient* m_TargetValue; // 0x50
		::System::Single m_TraisRate; // 0x58
		::System::Int32 _AtlasID; // 0x5C
		::System::Boolean m_TransReGen; // 0x60

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroGradientProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroGradientProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CCTOR_OFFSET))();
		}

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}

		::UnityEngine::Gradient* Method_2_A68F2DE513D46E04()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68F2DE513D46E04_OFFSET))(this);
		}

		::System::Boolean Method_2_77703FEE4F0E8C39(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_77703FEE4F0E8C39_OFFSET))(this, a1);
		}

		::System::Void Method_2_28F3459B67DFCFFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET))(this, a1);
		}

		::System::Void Method_2_A68A2E1014D00283(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68A2E1014D00283_OFFSET))(this, a1);
		}

		::System::Void Method_2_FF05AC0AB0D75A04()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_FF05AC0AB0D75A04_OFFSET))(this);
		}

		static ::System::Void Method_2_CBDC22058B67F0FE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CBDC22058B67F0FE_OFFSET))();
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_F04C04E6DB6D6224()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_F04C04E6DB6D6224_OFFSET))(this);
		}

		::System::Boolean Method_2_9C79A520038973E2(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_9C79A520038973E2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_42BA9D7CE19718CB(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_2_8594010D6A57C9BB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_8594010D6A57C9BB_OFFSET))(this);
		}

		::System::Boolean Method_2_8C7189BCDE3E66BF(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_8C7189BCDE3E66BF_OFFSET))(this, P0);
		}

		::System::Void Method_2_F33D58546A03D87E(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_F33D58546A03D87E_OFFSET))(this, P0);
		}

		::System::Void Method_2_438A9AA49EC7C989(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_438A9AA49EC7C989_OFFSET))(this, P0);
		}

		::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_2_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
		}

		::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
		}

		::System::Void Method_2_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
		}
	};
}
