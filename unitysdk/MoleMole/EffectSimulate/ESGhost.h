#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace MoleMole::Config { class ConfigGhostEffect; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_194379CF448E61D8_OFFSET UNITYSDK_OFFSET(0x18AEE010)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_2CEC3D9B31E4F8F1_OFFSET UNITYSDK_OFFSET(0x18AEE650)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x18AEF320)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18AEDFD0)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18AEF3B0)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x18AEF440)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_76A1664A40625620_OFFSET UNITYSDK_OFFSET(0x18AEE250)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEE5D0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESGhost_TypeDefinitionIndex = 41555;

	class ESGhost : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::UnityEngine::GameObject* ghostObject; // 0x58
		::UnityEngine::Material* ghostMaterial; // 0x60
		::System::Int32 maxGhostCount; // 0x68
		::System::Single echoTime; // 0x6C
		::System::Single lifeTime; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_194379CF448E61D8(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_194379CF448E61D8_OFFSET))(this, a1);
		}

		::System::Void Method_3_76A1664A40625620(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_76A1664A40625620_OFFSET))(this, a1);
		}

		::System::Void Method_3_2CEC3D9B31E4F8F1(::MoleMole::Config::ConfigGhostEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffect*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_2CEC3D9B31E4F8F1_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}
	};
}
