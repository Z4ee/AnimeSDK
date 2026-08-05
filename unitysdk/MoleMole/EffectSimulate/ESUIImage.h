#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIBehavior.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_METHOD_4_23C10DE8FC25A0DA_OFFSET UNITYSDK_OFFSET(0x1B82AC40)
#define MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_METHOD_4_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1B82AE90)
#define MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_METHOD_4_6B5BBAB9118D01A9_OFFSET UNITYSDK_OFFSET(0x1B82A870)
#define MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_METHOD_4_990C94EC15D6CE86_OFFSET UNITYSDK_OFFSET(0x1B82AE80)
#define MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B82AE00)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIImage_TypeDefinitionIndex = 77086;

	class ESUIImage : public ::MoleMole::EffectSimulate::ESUIBehavior
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x60
		::UnityEngine::Color color; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6B5BBAB9118D01A9(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_METHOD_4_6B5BBAB9118D01A9_OFFSET))(this, a1);
		}

		::System::Void Method_4_23C10DE8FC25A0DA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_METHOD_4_23C10DE8FC25A0DA_OFFSET))(this, a1);
		}

		::System::Void Method_4_990C94EC15D6CE86(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_METHOD_4_990C94EC15D6CE86_OFFSET))(this, a1);
		}

		::System::Void Method_4_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_METHOD_4_3E7178C5ECF017DB_OFFSET))(this, a1);
		}
	};
}
