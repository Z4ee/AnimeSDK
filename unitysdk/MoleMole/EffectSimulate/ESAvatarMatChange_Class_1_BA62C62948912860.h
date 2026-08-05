#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_BA62C62948912860_METHOD_1_628FDAD46E323DE7_OFFSET UNITYSDK_OFFSET(0x19BC6D50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_BA62C62948912860__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC6D40)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_Class_1_BA62C62948912860_TypeDefinitionIndex = 48680;

	class ESAvatarMatChange_Class_1_BA62C62948912860 : public ::System::Object
	{
	public:
		::MoleMole::EffectSimulate::ESAvatarMatChange* Field_1_0; // 0x10
		::System::Boolean Field_1_7; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_BA62C62948912860__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_628FDAD46E323DE7(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_BA62C62948912860_METHOD_1_628FDAD46E323DE7_OFFSET))(this, a1, a2, a3);
		}
	};
}
