#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET UNITYSDK_OFFSET(0xFB8C9A0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_21C7DA41AA04BA92_OFFSET UNITYSDK_OFFSET(0xFB8C340)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET UNITYSDK_OFFSET(0xFB8C940)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_4329D8CC8C08D0C1_OFFSET UNITYSDK_OFFSET(0xFB8C8A0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_5693914D0131014B_OFFSET UNITYSDK_OFFSET(0xFB8C490)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xFB8C7F0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB8C9F0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_FE7FF4C237F0DE57_OFFSET UNITYSDK_OFFSET(0xFB8C5A0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFB8C2A0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8C220)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroEffectLightProperty_TypeDefinitionIndex = 40284;

	class EnviroEffectLightProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::UnityEngine::Vector3 m_EffectCustomLightDirection; // 0x48
		::UnityEngine::Vector3 m_EffectLightPosition; // 0x54

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroEffectLightProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroEffectLightProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_21C7DA41AA04BA92(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_21C7DA41AA04BA92_OFFSET))(this, a1);
		}

		::System::Void Method_2_5693914D0131014B(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_5693914D0131014B_OFFSET))(this, a1);
		}

		::System::Void Method_2_FE7FF4C237F0DE57(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_FE7FF4C237F0DE57_OFFSET))(this, a1);
		}

		::System::Void Method_2_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_A1781348F0A89177_OFFSET))(this);
		}

		::System::Boolean Method_2_4329D8CC8C08D0C1(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_4329D8CC8C08D0C1_OFFSET))(this, P0);
		}

		::System::Void Method_2_221AD7CB52B41597(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET))(this, P0);
		}

		::System::Void Method_2_19295F9E95CC8034(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET))(this, P0);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
