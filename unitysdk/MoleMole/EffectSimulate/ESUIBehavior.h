#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace MoleMole::EffectSimulate { class NESUIDataCache; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR_METHOD_3_00B3DEE0F5490F85_OFFSET UNITYSDK_OFFSET(0x115FF9D0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x115FFBD0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x115FFB60)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIBehavior_TypeDefinitionIndex = 68299;

	class ESUIBehavior : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::MoleMole::EffectSimulate::NESUIDataCache* m_stUIDataCache; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_00B3DEE0F5490F85(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR_METHOD_3_00B3DEE0F5490F85_OFFSET))(this, a1);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIBEHAVIOR_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}
	};
}
