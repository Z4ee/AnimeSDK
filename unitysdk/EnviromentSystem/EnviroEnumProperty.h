#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0x13587D40)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_0A9532FAEAAC0B12_OFFSET UNITYSDK_OFFSET(0x13587C60)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x135879F0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x13587710)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13587DA0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0x13587B80)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13587E00)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET UNITYSDK_OFFSET(0x13587A90)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x13587BF0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_E7B58F15867D5BA9_OFFSET UNITYSDK_OFFSET(0x13587CD0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13587680)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x135875E0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroEnumProperty_TypeDefinitionIndex = 46777;

	class EnviroEnumProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Int32 m_Value; // 0x48
		::Il2CppArray<::System::String*>* m_Words; // 0x50

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Int32 a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroEnumProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroEnumProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Method_2_1C409C2CC83887DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_1C409C2CC83887DC_OFFSET))(this, a1);
		}

		::System::Void Method_2_582A1DD1E3B84C82(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET))(this, a1);
		}

		::System::Void Method_2_42BA9D7CE19718CB(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_2_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET))(this);
		}

		::System::Void Method_2_0A9532FAEAAC0B12(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_0A9532FAEAAC0B12_OFFSET))(this, a1);
		}

		::System::Void Method_2_E7B58F15867D5BA9(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_E7B58F15867D5BA9_OFFSET))(this, a1);
		}

		::System::Void Method_2_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_004598EA5EBAC892_OFFSET))(this, a1);
		}

		::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
		}

		::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_5790A55946AA509D_OFFSET))(this);
		}
	};
}
