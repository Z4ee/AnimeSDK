#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0x13587520)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x135873B0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13587580)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET UNITYSDK_OFFSET(0x13587050)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_90B50727532778C1_OFFSET UNITYSDK_OFFSET(0x13586F00)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_BA9F244927357C17_OFFSET UNITYSDK_OFFSET(0x13587450)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_E7B58F15867D5BA9_OFFSET UNITYSDK_OFFSET(0x135874B0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_FE7FF4C237F0DE57_OFFSET UNITYSDK_OFFSET(0x13587160)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13586E60)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x13586DE0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroEffectLightProperty_TypeDefinitionIndex = 46776;

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

		::System::Boolean Method_2_BA9F244927357C17(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_BA9F244927357C17_OFFSET))(this, a1);
		}

		::System::Void Method_2_E7B58F15867D5BA9(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_E7B58F15867D5BA9_OFFSET))(this, a1);
		}

		::System::Void Method_2_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_004598EA5EBAC892_OFFSET))(this, a1);
		}

		::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_5790A55946AA509D_OFFSET))(this);
		}
	};
}
