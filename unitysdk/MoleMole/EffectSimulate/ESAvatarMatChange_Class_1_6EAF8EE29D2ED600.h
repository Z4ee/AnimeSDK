#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_6EAF8EE29D2ED600_METHOD_1_AA0E6420939AFC3D_OFFSET UNITYSDK_OFFSET(0x157DA4F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_6EAF8EE29D2ED600__CTOR_OFFSET UNITYSDK_OFFSET(0x157DA4E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_Class_1_6EAF8EE29D2ED600_TypeDefinitionIndex = 40410;

	class ESAvatarMatChange_Class_1_6EAF8EE29D2ED600 : public ::System::Object
	{
	public:
		::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_6EAF8EE29D2ED600__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_AA0E6420939AFC3D(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_6EAF8EE29D2ED600_METHOD_1_AA0E6420939AFC3D_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
