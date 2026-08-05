#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIBehavior.h"

namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_METHOD_4_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13A7A6C0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_METHOD_4_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0x13A7A3B0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_METHOD_4_990C94EC15D6CE86_OFFSET UNITYSDK_OFFSET(0x13A7A760)
#define MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_METHOD_4_B179D9338896C46D_OFFSET UNITYSDK_OFFSET(0x13A7A110)
#define MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7A570)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIPivot_TypeDefinitionIndex = 41075;

	class ESUIPivot : public ::MoleMole::EffectSimulate::ESUIBehavior
	{
	public:
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* pivot; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_B179D9338896C46D(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_METHOD_4_B179D9338896C46D_OFFSET))(this, a1);
		}

		::System::Void Method_4_49AA86D9F19FB057(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_METHOD_4_49AA86D9F19FB057_OFFSET))(this, a1);
		}

		::System::Void Method_4_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_METHOD_4_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_4_990C94EC15D6CE86(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIPIVOT_METHOD_4_990C94EC15D6CE86_OFFSET))(this, a1);
		}
	};
}
