#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B226C8FD1D4397E7_SizeSetting.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_B226C8FD1D4397E7;
namespace UnityEngine { class Shader; }

#define OCEANSYSTEM_OCEANSHAREDWAVE_METHOD_5_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0x98363C0)
#define OCEANSYSTEM_OCEANSHAREDWAVE_METHOD_5_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x9836370)
#define OCEANSYSTEM_OCEANSHAREDWAVE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x98367C0)
#define OCEANSYSTEM_OCEANSHAREDWAVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x98367A0)
#define OCEANSYSTEM_OCEANSHAREDWAVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x98367B0)
#define OCEANSYSTEM_OCEANSHAREDWAVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9836850)
#define OCEANSYSTEM_OCEANSHAREDWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9836820)

namespace OceanSystem
{
	inline static constexpr unsigned int OceanSharedWave_TypeDefinitionIndex = 45591;

	class OceanSharedWave : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_DomainSize()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OceanSharedWave_TypeDefinitionIndex)->GetStaticField(0x51A0);
		}
		::UnityEngine::Shader* m_ComputeNormalShader; // 0x18
		::UnityEngine::Shader* m_BlurShader; // 0x20
		::Class_1_B226C8FD1D4397E7_SizeSetting m_SimulationSize; // 0x28
		::System::Single m_WindSpeed; // 0x2C
		::System::Single m_WindRotation; // 0x30
		::System::Single m_WindTurbulence; // 0x34
		::System::Single m_TimeScale; // 0x38
		::System::Single jacobianRange; // 0x3C
		::System::Single jacobianScaling; // 0x40
		::System::Single jacobianBlur; // 0x44
		::Class_1_B226C8FD1D4397E7* Field_5_11; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE__CCTOR_OFFSET))();
		}

		::Class_1_B226C8FD1D4397E7* Method_5_9B39F7D7C1FF70D6()
		{
			return ((::Class_1_B226C8FD1D4397E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_METHOD_5_9B39F7D7C1FF70D6_OFFSET))(this);
		}

		::System::Void Method_5_41F5D9C0F0A306F5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_METHOD_5_41F5D9C0F0A306F5_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANSHAREDWAVE_ONDESTROY_OFFSET))(this);
		}
	};
}
