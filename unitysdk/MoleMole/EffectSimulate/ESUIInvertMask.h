#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIBehavior.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_METHOD_4_1471EFD2EDBD5779_OFFSET UNITYSDK_OFFSET(0x149CDA90)
#define MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_METHOD_4_23C10DE8FC25A0DA_OFFSET UNITYSDK_OFFSET(0x149CE130)
#define MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_METHOD_4_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x149CE470)
#define MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_METHOD_4_990C94EC15D6CE86_OFFSET UNITYSDK_OFFSET(0x149CE460)
#define MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x149CE3F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIInvertMask_TypeDefinitionIndex = 64335;

	class ESUIInvertMask : public ::MoleMole::EffectSimulate::ESUIBehavior
	{
	public:
		::System::Boolean invertMask; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_1471EFD2EDBD5779(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_METHOD_4_1471EFD2EDBD5779_OFFSET))(this, a1);
		}

		::System::Void Method_4_23C10DE8FC25A0DA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_METHOD_4_23C10DE8FC25A0DA_OFFSET))(this, a1);
		}

		::System::Void Method_4_990C94EC15D6CE86(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_METHOD_4_990C94EC15D6CE86_OFFSET))(this, a1);
		}

		::System::Void Method_4_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIINVERTMASK_METHOD_4_3E7178C5ECF017DB_OFFSET))(this, a1);
		}
	};
}
