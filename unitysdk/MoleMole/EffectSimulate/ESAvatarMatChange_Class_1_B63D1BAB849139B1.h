#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_B63D1BAB849139B1_METHOD_1_325049DD60B4AA4C_OFFSET UNITYSDK_OFFSET(0x17551A80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_B63D1BAB849139B1__CTOR_OFFSET UNITYSDK_OFFSET(0x17551A70)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_Class_1_B63D1BAB849139B1_TypeDefinitionIndex = 63015;

	class ESAvatarMatChange_Class_1_B63D1BAB849139B1 : public ::System::Object
	{
	public:
		::MoleMole::EffectSimulate::ESAvatarMatChange* Field_1_0; // 0x10
		::System::String* Field_1_1; // 0x18
		::System::Boolean Field_1_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_B63D1BAB849139B1__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_325049DD60B4AA4C(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_B63D1BAB849139B1_METHOD_1_325049DD60B4AA4C_OFFSET))(this, a1, a2, a3);
		}
	};
}
