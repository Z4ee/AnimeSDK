#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE___C_METHOD_1_61EB500992E3BB5A_OFFSET UNITYSDK_OFFSET(0x1A378A00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3789B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3789F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange___c_TypeDefinitionIndex = 40408;

	class ESAvatarMatChange___c : public ::System::Object
	{
	public:
		static ::MoleMole::EffectSimulate::ESAvatarMatChange___c** StaticGet___9()
		{
			return (::MoleMole::EffectSimulate::ESAvatarMatChange___c**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange___c_TypeDefinitionIndex)->GetStaticField(0x305B0);
		}
		static ::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>** StaticGet___9__66_0()
		{
			return (::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange___c_TypeDefinitionIndex)->GetStaticField(0x305B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_61EB500992E3BB5A(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE___C_METHOD_1_61EB500992E3BB5A_OFFSET))(this, a1, a2, a3);
		}
	};
}
