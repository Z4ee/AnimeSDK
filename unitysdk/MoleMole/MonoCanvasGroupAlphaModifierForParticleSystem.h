#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoCanvasGroupAlphaModifierForParticleSystem_ParticleSystemInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class UIGlobalAlpha;
namespace System { class String; }
namespace UnityEngine { class CanvasRenderer; }

#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_METHOD_5_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x10BCD9C0)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_METHOD_5_8E3C32E62F530E35_OFFSET UNITYSDK_OFFSET(0x10BCE690)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10BCD970)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_RESET_OFFSET UNITYSDK_OFFSET(0x10BCD6C0)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_SETPARTICLESYSTEMALPHA_OFFSET UNITYSDK_OFFSET(0x10BCDCD0)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x10BCDC80)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BCE650)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10BCE5F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCanvasGroupAlphaModifierForParticleSystem_TypeDefinitionIndex = 64266;

	class MonoCanvasGroupAlphaModifierForParticleSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCanvasGroupAlphaModifierForParticleSystem_TypeDefinitionIndex)->GetStaticField(0xF4A0);
		}
		// static const ::System::String* Field_5_4; // 0x0
		::Il2CppArray<::MoleMole::MonoCanvasGroupAlphaModifierForParticleSystem_ParticleSystemInfo>* particleSystemInfoList; // 0x18
		::UnityEngine::CanvasRenderer* canvasRenderer; // 0x20
		::UIGlobalAlpha* Field_5_2; // 0x28
		::System::Single Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void SetParticleSystemAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_SETPARTICLESYSTEMALPHA_OFFSET))(this, a1);
		}

		::System::Void Method_5_8DC652D916C182B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_METHOD_5_8DC652D916C182B2_OFFSET))(this);
		}

		::UIGlobalAlpha* Method_5_8E3C32E62F530E35()
		{
			return ((::UIGlobalAlpha*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_METHOD_5_8E3C32E62F530E35_OFFSET))(this);
		}
	};
}
