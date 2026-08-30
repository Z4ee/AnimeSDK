#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x152FEDC0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET UNITYSDK_OFFSET(0x152FEA60)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_90B50727532778C1_OFFSET UNITYSDK_OFFSET(0x152FE910)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_FE7FF4C237F0DE57_OFFSET UNITYSDK_OFFSET(0x152FEB70)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x152FE870)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x152FE7F0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroEffectLightProperty_TypeDefinitionIndex = 50022;

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

		::System::Boolean Method_2_90B50727532778C1(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_90B50727532778C1_OFFSET))(this, a1);
		}

		::System::Void Method_2_582A1DD1E3B84C82(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET))(this, a1);
		}

		::System::Void Method_2_FE7FF4C237F0DE57(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_FE7FF4C237F0DE57_OFFSET))(this, a1);
		}

		::System::Void Method_2_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET))(this);
		}
	};
}
