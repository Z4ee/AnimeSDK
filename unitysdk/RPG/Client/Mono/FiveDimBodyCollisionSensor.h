#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_ADD_ONENTER_OFFSET UNITYSDK_OFFSET(0xA90C250)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_ADD_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA90C310)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xA90C190)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0xA90C1F0)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_REMOVE_ONENTER_OFFSET UNITYSDK_OFFSET(0xA90C2B0)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_REMOVE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA90C370)
#define RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA90C3D0)

namespace RPG::Client::Mono
{
	inline static constexpr unsigned int FiveDimBodyCollisionSensor_TypeDefinitionIndex = 69781;

	class FiveDimBodyCollisionSensor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::UnityEngine::Collision*>* OnEnter; // 0x18
		::System::Action_1<::UnityEngine::Collision*>* OnExit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_ONCOLLISIONEXIT_OFFSET))(this, a1);
		}

		::System::Void add_OnEnter(::System::Action_1<::UnityEngine::Collision*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_ADD_ONENTER_OFFSET))(this, value);
		}

		::System::Void remove_OnEnter(::System::Action_1<::UnityEngine::Collision*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_REMOVE_ONENTER_OFFSET))(this, value);
		}

		::System::Void add_OnExit(::System::Action_1<::UnityEngine::Collision*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_ADD_ONEXIT_OFFSET))(this, value);
		}

		::System::Void remove_OnExit(::System::Action_1<::UnityEngine::Collision*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMBODYCOLLISIONSENSOR_REMOVE_ONEXIT_OFFSET))(this, value);
		}
	};
}
