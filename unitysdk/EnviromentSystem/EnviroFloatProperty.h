#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0xFB8D9D0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET UNITYSDK_OFFSET(0xFB8DA30)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET UNITYSDK_OFFSET(0xFB8D970)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_289256236CBF6273_OFFSET UNITYSDK_OFFSET(0xFB8D900)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0xFB8D3F0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0xFB8D890)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xFB8D6B0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB8DA80)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xFB8D820)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_E28590AB02897994_OFFSET UNITYSDK_OFFSET(0xFB8D760)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFB8D2B0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0xFB8D360)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8D220)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroFloatProperty_TypeDefinitionIndex = 40286;

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

		::System::Void Method_2_28F3459B67DFCFFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET))(this, a1);
		}

		::System::Void Method_2_E28590AB02897994(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_E28590AB02897994_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_2_42BA9D7CE19718CB(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET))(this, a1);
		}

		::System::Void Method_2_82E992240300FB30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_82E992240300FB30_OFFSET))(this);
		}

		::System::Void Method_2_289256236CBF6273(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_289256236CBF6273_OFFSET))(this, P0);
		}

		::System::Void Method_2_221AD7CB52B41597(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET))(this, P0);
		}

		::System::Void Method_2_0414B7E68ABA5085(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_0414B7E68ABA5085_OFFSET))(this, P0);
		}

		::System::Void Method_2_19295F9E95CC8034(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET))(this, P0);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
