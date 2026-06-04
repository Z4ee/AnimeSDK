#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0x135B01E0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_0A9532FAEAAC0B12_OFFSET UNITYSDK_OFFSET(0x135B0100)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x135AFA10)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_2B43621760F6D081_OFFSET UNITYSDK_OFFSET(0x135B0090)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x135B0240)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_42CCF630B15654B3_OFFSET UNITYSDK_OFFSET(0x135AFE20)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_510117FB185393B1_OFFSET UNITYSDK_OFFSET(0x135B0360)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x135B03C0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x135B0420)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x135B0480)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x135B04E0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x135B0300)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_582A1DD1E3B84C82_OFFSET UNITYSDK_OFFSET(0x135AF920)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_8BC536D520573A26_OFFSET UNITYSDK_OFFSET(0x135AFC10)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x135AFFB0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x135AFAB0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x135AF610)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_BA9F244927357C17_OFFSET UNITYSDK_OFFSET(0x135B02A0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x135AFCF0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x135B0050)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x135AFBA0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CEAC9CDAE2EF9114_OFFSET UNITYSDK_OFFSET(0x135AFB50)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_E7B58F15867D5BA9_OFFSET UNITYSDK_OFFSET(0x135B0170)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x135AF570)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x135AF4E0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroPrefabProperty_TypeDefinitionIndex = 46791;

	class EnviroPrefabProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::UnityEngine::GameObject* m_Value; // 0x50
		::System::String* m_Path; // 0x58
		::UnityEngine::GameObject* m_Target_Value; // 0x60

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroPrefabProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroPrefabProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_AF2CFBAAD2629B3B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_AF2CFBAAD2629B3B_OFFSET))(this, a1);
		}

		::System::Void Method_3_582A1DD1E3B84C82(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_582A1DD1E3B84C82_OFFSET))(this, a1);
		}

		::System::Void Method_3_CEAC9CDAE2EF9114(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CEAC9CDAE2EF9114_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_8BC536D520573A26(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_8BC536D520573A26_OFFSET))(this, a1);
		}

		::System::Void Method_3_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_3_42CCF630B15654B3(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_42CCF630B15654B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_2B43621760F6D081(::UnityEngine::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_2B43621760F6D081_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_10054BB010E03EDD_OFFSET))(this);
		}

		::System::Void Method_3_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_3_0A9532FAEAAC0B12(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_0A9532FAEAAC0B12_OFFSET))(this, a1);
		}

		::System::Void Method_3_E7B58F15867D5BA9(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_E7B58F15867D5BA9_OFFSET))(this, a1);
		}

		::System::Void Method_3_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_004598EA5EBAC892_OFFSET))(this, a1);
		}

		::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_BA9F244927357C17(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_BA9F244927357C17_OFFSET))(this, a1);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_510117FB185393B1(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_510117FB185393B1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}
	};
}
