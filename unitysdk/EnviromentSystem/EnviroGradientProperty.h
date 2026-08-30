#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Color.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x10692440)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x10691CA0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10691010)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0x106927F0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_77703FEE4F0E8C39_OFFSET UNITYSDK_OFFSET(0x106916C0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_9C79A520038973E2_OFFSET UNITYSDK_OFFSET(0x10692740)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68F2DE513D46E04_OFFSET UNITYSDK_OFFSET(0x10691180)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x10691710)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_C580ED84DBCAD8A8_OFFSET UNITYSDK_OFFSET(0x10691960)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10692700)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x10692870)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x10691F10)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_FF222CAFD529588D_OFFSET UNITYSDK_OFFSET(0x10691D40)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0x106928E0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10691400)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x10689840)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGradientProperty_TypeDefinitionIndex = 50029;

	class EnviroGradientProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet__TmpColorArrayForGradient()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x64770);
		}
		static ::UnityEngine::Texture2D** StaticGet_EnviroGradientAtlas()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x64778);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_EnviromentGradientAtlasID()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x64780);
		}
		static ::System::Int32* StaticGet_EnviroGradientAtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x14A90);
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

		::System::Void Method_2_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_30D1209326FA87FC_OFFSET))(this);
		}

		::UnityEngine::Gradient* Method_2_A68F2DE513D46E04()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68F2DE513D46E04_OFFSET))(this);
		}

		::System::Boolean Method_2_77703FEE4F0E8C39(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_77703FEE4F0E8C39_OFFSET))(this, a1);
		}

		::System::Void Method_2_AF2CFBAAD2629B3B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_AF2CFBAAD2629B3B_OFFSET))(this, a1);
		}

		::System::Void Method_2_C580ED84DBCAD8A8(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_C580ED84DBCAD8A8_OFFSET))(this, a1);
		}

		::System::Void Method_2_FF222CAFD529588D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_FF222CAFD529588D_OFFSET))(this);
		}

		static ::System::Void Method_2_092CD57850778EFC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_092CD57850778EFC_OFFSET))();
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_CD9F3CEFB366C27A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
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

		::System::Void Method_2_228E3444D290BEE7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_228E3444D290BEE7_OFFSET))(this);
		}
	};
}
