#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Color.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0x13596AB0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x13596380)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_0A9532FAEAAC0B12_OFFSET UNITYSDK_OFFSET(0x13596910)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x135955A0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x13595BE0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13594EA0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13596B10)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0x13596730)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13596A50)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x13596B70)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x135969F0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_77703FEE4F0E8C39_OFFSET UNITYSDK_OFFSET(0x13595550)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_9C79A520038973E2_OFFSET UNITYSDK_OFFSET(0x13596680)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68F2DE513D46E04_OFFSET UNITYSDK_OFFSET(0x13595010)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_BA9F244927357C17_OFFSET UNITYSDK_OFFSET(0x135968B0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_C580ED84DBCAD8A8_OFFSET UNITYSDK_OFFSET(0x135958A0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13596640)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x135967B0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x13595E50)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_E7B58F15867D5BA9_OFFSET UNITYSDK_OFFSET(0x13596980)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_FF222CAFD529588D_OFFSET UNITYSDK_OFFSET(0x13595C80)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0x13596820)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13595290)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1358D380)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGradientProperty_TypeDefinitionIndex = 46783;

	class EnviroGradientProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_EnviromentGradientAtlasID()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x45090);
		}
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet__TmpColorArrayForGradient()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x45098);
		}
		static ::UnityEngine::Texture2D** StaticGet_EnviroGradientAtlas()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x450A0);
		}
		static ::System::Int32* StaticGet_EnviroGradientAtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0xC620);
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

		::System::Void Method_2_1C409C2CC83887DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_1C409C2CC83887DC_OFFSET))(this, a1);
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

		::System::Boolean Method_2_BA9F244927357C17(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_BA9F244927357C17_OFFSET))(this, a1);
		}

		::System::Void Method_2_0A9532FAEAAC0B12(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_0A9532FAEAAC0B12_OFFSET))(this, a1);
		}

		::System::Void Method_2_E7B58F15867D5BA9(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_E7B58F15867D5BA9_OFFSET))(this, a1);
		}

		::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_2_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_2_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_004598EA5EBAC892_OFFSET))(this, a1);
		}

		::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
		}

		::System::Void Method_2_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
		}
	};
}
