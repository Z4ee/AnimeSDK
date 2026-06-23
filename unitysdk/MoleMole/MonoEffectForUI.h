#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOEFFECTFORUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x10D64070)
#define MOLEMOLE_MONOEFFECTFORUI_GET_PARTICLESYS_OFFSET UNITYSDK_OFFSET(0x10D63F90)
#define MOLEMOLE_MONOEFFECTFORUI_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x10D63EB0)
#define MOLEMOLE_MONOEFFECTFORUI_METHOD_5_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x10D64170)
#define MOLEMOLE_MONOEFFECTFORUI_UPDATEALPHA_OFFSET UNITYSDK_OFFSET(0x10D647A0)
#define MOLEMOLE_MONOEFFECTFORUI_UPDATE_OFFSET UNITYSDK_OFFSET(0x10D64120)
#define MOLEMOLE_MONOEFFECTFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x10D64C20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectForUI_TypeDefinitionIndex = 78910;

	class MonoEffectForUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ignoreWorldTimeScale; // 0x18
		::System::Boolean useAlphaControl; // 0x19
		::System::Single alpha; // 0x1C
		::System::Int32 Field_5_3; // 0x20
		::System::Int32 Field_5_4; // 0x24
		::System::Single Field_5_5; // 0x28
		::UnityEngine::MaterialPropertyBlock* Field_5_6; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* Field_5_7; // 0x38
		::Il2CppArray<::UnityEngine::ParticleSystem*>* Field_5_8; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_Renderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_GET_RENDERERS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ParticleSystem*>* get_ParticleSys()
		{
			return ((::Il2CppArray<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_GET_PARTICLESYS_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_UPDATEALPHA_OFFSET))(this);
		}

		::System::Void Method_5_A5B6063FFC26FC8F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_METHOD_5_A5B6063FFC26FC8F_OFFSET))(this);
		}
	};
}
