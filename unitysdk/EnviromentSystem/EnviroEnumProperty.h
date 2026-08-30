#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x152FF1D0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0x152FF360)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET UNITYSDK_OFFSET(0x152FF270)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x152FEF90)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x152FF3D0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x152FEF00)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x152FEE60)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroEnumProperty_TypeDefinitionIndex = 50023;

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

		::System::Void Method_2_AF2CFBAAD2629B3B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_AF2CFBAAD2629B3B_OFFSET))(this, a1);
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
	};
}
