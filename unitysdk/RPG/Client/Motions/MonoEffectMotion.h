#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_9C4E0E0141829F67;
namespace RPG::Client::Motions { class MonoEffectMotion_VoidDelegate; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_GET_OFFSET UNITYSDK_OFFSET(0xC19DEF0)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_INITEFFECTMOTION_OFFSET UNITYSDK_OFFSET(0xC19E000)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC19E3A0)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xC19E320)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__CREATEEFFECTMOTION_OFFSET UNITYSDK_OFFSET(0xC19E0F0)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC19E480)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__ENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC19E3F0)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoEffectMotion_TypeDefinitionIndex = 68592;

	class MonoEffectMotion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Motions::MonoEffectMotion_VoidDelegate* onMotionEnd; // 0x18
		::System::Boolean _IsInit; // 0x20
		::Class_2_9C4E0E0141829F67* _Motion; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Motions::MonoEffectMotion* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::Motions::MonoEffectMotion*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_GET_OFFSET))(a1);
		}

		::System::Void InitEffectMotion(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_INITEFFECTMOTION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_ONDESTROY_OFFSET))(this);
		}

		::Class_2_9C4E0E0141829F67* _CreateEffectMotion(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__CREATEEFFECTMOTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _EndCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__ENDCALLBACK_OFFSET))(this);
		}
	};
}
