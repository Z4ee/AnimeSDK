#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0x135886F0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_0A9532FAEAAC0B12_OFFSET UNITYSDK_OFFSET(0x135885B0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x13588340)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x13588030)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13588690)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0x13588540)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13588750)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET UNITYSDK_OFFSET(0x135883E0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x135884D0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_E7B58F15867D5BA9_OFFSET UNITYSDK_OFFSET(0x13588620)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13587EF0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x13587FA0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x13587E60)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroFloatProperty_TypeDefinitionIndex = 46778;

	class EnviroFloatProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Single m_Value; // 0x48
		::System::Single m_Min; // 0x4C
		::System::Single m_Max; // 0x50

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_2(::EnviromentSystem::EnviroFloatProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroFloatProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void Method_2_1C409C2CC83887DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_1C409C2CC83887DC_OFFSET))(this, a1);
		}

		::System::Void Method_2_582A1DD1E3B84C82(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_2_42BA9D7CE19718CB(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET))(this, a1);
		}

		::System::Void Method_2_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET))(this);
		}

		::System::Void Method_2_0A9532FAEAAC0B12(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_0A9532FAEAAC0B12_OFFSET))(this, a1);
		}

		::System::Void Method_2_E7B58F15867D5BA9(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_E7B58F15867D5BA9_OFFSET))(this, a1);
		}

		::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
		}

		::System::Void Method_2_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_004598EA5EBAC892_OFFSET))(this, a1);
		}

		::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_5790A55946AA509D_OFFSET))(this);
		}
	};
}
