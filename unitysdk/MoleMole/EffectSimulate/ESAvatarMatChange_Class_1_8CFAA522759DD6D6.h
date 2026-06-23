#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_8CFAA522759DD6D6_METHOD_1_90DB2C5B7909C632_OFFSET UNITYSDK_OFFSET(0x1AA87C20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_8CFAA522759DD6D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA87C10)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_Class_1_8CFAA522759DD6D6_TypeDefinitionIndex = 40409;

	class ESAvatarMatChange_Class_1_8CFAA522759DD6D6 : public ::System::Object
	{
	public:
		::MoleMole::EffectSimulate::ESAvatarMatChange* Field_1_0; // 0x10
		::System::Boolean Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_8CFAA522759DD6D6__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_90DB2C5B7909C632(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_8CFAA522759DD6D6_METHOD_1_90DB2C5B7909C632_OFFSET))(this, a1, a2, a3);
		}
	};
}
