#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESEmptyNodeInitTransformBehavior.h"

namespace MoleMole::EffectSimulate { class EffectMeshRendererBillboardComponent; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT_METHOD_4_7E2F0F52DBCB5BCD_OFFSET UNITYSDK_OFFSET(0x158DAE80)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT_METHOD_4_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x158DB290)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT__CTOR_OFFSET UNITYSDK_OFFSET(0x158DB270)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESEmptyNodeInitSetRot_TypeDefinitionIndex = 79519;

	class ESEmptyNodeInitSetRot : public ::MoleMole::EffectSimulate::ESEmptyNodeInitTransformBehavior
	{
	public:
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* m_stBillboardCom; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_7E2F0F52DBCB5BCD(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT_METHOD_4_7E2F0F52DBCB5BCD_OFFSET))(this, a1);
		}

		::System::Void Method_4_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT_METHOD_4_C433AF37CE9D6E5B_OFFSET))(this, a1);
		}
	};
}
