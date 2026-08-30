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

#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x15328160)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_2B43621760F6D081_OFFSET UNITYSDK_OFFSET(0x153287F0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_42CCF630B15654B3_OFFSET UNITYSDK_OFFSET(0x15328570)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_582A1DD1E3B84C82_OFFSET UNITYSDK_OFFSET(0x15328070)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_8BC536D520573A26_OFFSET UNITYSDK_OFFSET(0x15328360)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x15328710)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15328200)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x15327DF0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x15328440)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x153287B0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x153282F0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CEAC9CDAE2EF9114_OFFSET UNITYSDK_OFFSET(0x153282A0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15327D50)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x15327CC0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroPrefabProperty_TypeDefinitionIndex = 50037;

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
	};
}
