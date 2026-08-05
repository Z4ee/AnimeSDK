#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESGeneratedPlugin.h"

class VolumetricMist;
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_194379CF448E61D8_OFFSET UNITYSDK_OFFSET(0x1BDACFD0)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1BDADA20)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x1BDADC90)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x1BDADD30)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1BDAD9E0)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1BDADDC0)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x1BDADD20)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_49B631EF1DEFEC16_OFFSET UNITYSDK_OFFSET(0x1BDAD200)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_AF53AC45ED2466EB_OFFSET UNITYSDK_OFFSET(0x1BDAD800)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_D14801A69F4D309C_OFFSET UNITYSDK_OFFSET(0x1BDAD380)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDADA60)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESVolumetricMist_TypeDefinitionIndex = 81220;

	class ESVolumetricMist : public ::MoleMole::EffectSimulate::ESGeneratedPlugin
	{
	public:
		// static const ::System::Int32 DrawOrder = 0x14; // 0x0
		::VolumetricMist* _volumetricMist; // 0x60
		::MoleMole::EffectSimulate::FloatKeyframeCurve* volumetricMistDensityCurve; // 0x68
		::System::Single _volumetricMistDensityLastValue; // 0x70
		::System::Boolean _volumetricMistDensityChanged; // 0x74
		::MoleMole::EffectSimulate::FloatKeyframeCurve* volumetricMistCoverageCurve; // 0x78
		::System::Single _volumetricMistCoverageLastValue; // 0x80
		::System::Boolean _volumetricMistCoverageChanged; // 0x84
		::MoleMole::EffectSimulate::FloatKeyframeCurve* volumetricMistFallOffCurve; // 0x88
		::System::Single _volumetricMistFallOffLastValue; // 0x90
		::System::Boolean _volumetricMistFallOffChanged; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_194379CF448E61D8(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_194379CF448E61D8_OFFSET))(this, a1);
		}

		::System::Void Method_5_49B631EF1DEFEC16(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_49B631EF1DEFEC16_OFFSET))(this, a1);
		}

		::System::Void Method_5_D14801A69F4D309C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_D14801A69F4D309C_OFFSET))(this, a1);
		}

		::System::Void Method_5_AF53AC45ED2466EB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_AF53AC45ED2466EB_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_391A84BCD9F51317_2_OFFSET))(this);
		}

		::System::Void Method_5_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_4272BE5198E6F216_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_391A84BCD9F51317_3_OFFSET))(this);
		}

		::System::Void Method_5_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_METHOD_5_3E7178C5ECF017DB_OFFSET))(this, a1);
		}
	};
}
