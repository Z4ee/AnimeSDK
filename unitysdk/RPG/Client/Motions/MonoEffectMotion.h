#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_9C4E0E0141829F67;
namespace RPG::Client::Motions { class MonoEffectMotion_VoidDelegate; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_GET_OFFSET UNITYSDK_OFFSET(0xAACDBA0)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_INITEFFECTMOTION_OFFSET UNITYSDK_OFFSET(0xAACDCB0)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAACE030)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xAACDFB0)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__CREATEEFFECTMOTION_OFFSET UNITYSDK_OFFSET(0xAACDDA0)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0xAACE640)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__ENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAACE080)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoEffectMotion_TypeDefinitionIndex = 67634;

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

		static ::RPG::Client::Motions::MonoEffectMotion* Get(::UnityEngine::GameObject* go)
		{
			return ((::RPG::Client::Motions::MonoEffectMotion*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_GET_OFFSET))(go);
		}

		::System::Void InitEffectMotion(::UnityEngine::Transform* startPos, ::System::Single durationTime, ::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_INITEFFECTMOTION_OFFSET))(this, startPos, durationTime, x, y, z);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_ONDESTROY_OFFSET))(this);
		}

		::Class_2_9C4E0E0141829F67* _CreateEffectMotion(::System::Single durationTime, ::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__CREATEEFFECTMOTION_OFFSET))(this, durationTime, x, y, z);
		}

		::System::Void _EndCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION__ENDCALLBACK_OFFSET))(this);
		}
	};
}
