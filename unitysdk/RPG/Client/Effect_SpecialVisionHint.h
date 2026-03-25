#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SpecialVisionEntityType.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x957FAF0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_3FBFF32C81033F7A_OFFSET UNITYSDK_OFFSET(0x9580190)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x9580660)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0x957F7B0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x957F670)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_DAE67D4DC8B67113_OFFSET UNITYSDK_OFFSET(0x9580590)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x957FC70)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x957F730)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x957F5F0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x957FCF0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x957F890)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x9580840)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SpecialVisionHint_TypeDefinitionIndex = 57782;

	class Effect_SpecialVisionHint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::SpecialVisionEntityType EntityType; // 0x18
		::RPG::GameCore::SpecialVisionType VisionType; // 0x1C
		::Il2CppArray<::UnityEngine::GameObject*>* SpecialVisonSmells; // 0x20
		::System::Single ShowSmellPerformDelay; // 0x28
		::System::Boolean CheckIsVisionInUpdate; // 0x2C
		::System::String* OnScanEffectPath; // 0x30
		::System::Boolean IsTriggerScanEffectOn; // 0x38
		::System::Boolean Field_5_7; // 0x39
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_5_8; // 0x40
		::RPG::GameCore::GameEntity* Field_5_9; // 0x48
		::RPG::GameCore::CharacterVisibleComponent* Field_5_10; // 0x50
		::System::Int32 Field_5_11; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void Method_5_3FBFF32C81033F7A(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_3FBFF32C81033F7A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_7443AD94E7275ABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_7443AD94E7275ABA_OFFSET))(this);
		}

		::System::Void Method_5_DAE67D4DC8B67113(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_DAE67D4DC8B67113_OFFSET))(this, a1);
		}

		::System::Void Method_5_1CD1133DC003C11C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_1CD1133DC003C11C_OFFSET))(this, a1);
		}

		::System::Void Method_5_4389275F4099DE36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_4389275F4099DE36_OFFSET))(this);
		}

		::System::Void Method_5_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_METHOD_5_7744894CEC41BF06_OFFSET))(this);
		}
	};
}
