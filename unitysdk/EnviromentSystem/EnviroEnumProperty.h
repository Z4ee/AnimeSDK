#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0xFB8D180)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET UNITYSDK_OFFSET(0xFB8D130)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET UNITYSDK_OFFSET(0xFB8D0D0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_289256236CBF6273_OFFSET UNITYSDK_OFFSET(0xFB8D060)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0xFB8CB60)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0xFB8CF80)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_5693914D0131014B_OFFSET UNITYSDK_OFFSET(0xFB8CEA0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xFB8CDF0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB8D1E0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xFB8CFF0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFB8CAD0)
#define ENVIROMENTSYSTEM_ENVIROENUMPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8CA30)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroEnumProperty_TypeDefinitionIndex = 40285;

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

		::System::Void Method_2_28F3459B67DFCFFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET))(this, a1);
		}

		::System::Void Method_2_5693914D0131014B(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_5693914D0131014B_OFFSET))(this, a1);
		}

		::System::Void Method_2_42BA9D7CE19718CB(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_2_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_A1781348F0A89177_OFFSET))(this);
		}

		::System::Void Method_2_289256236CBF6273(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_289256236CBF6273_OFFSET))(this, P0);
		}

		::System::Void Method_2_221AD7CB52B41597(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET))(this, P0);
		}

		::System::Void Method_2_19295F9E95CC8034(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET))(this, P0);
		}

		::System::Void Method_2_0414B7E68ABA5085(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_0414B7E68ABA5085_OFFSET))(this, P0);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROENUMPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
