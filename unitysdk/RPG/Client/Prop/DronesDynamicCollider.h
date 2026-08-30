#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesDynamicCollider_DynamicCollider.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_DRONESDYNAMICCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A90CE00)
#define RPG_CLIENT_PROP_DRONESDYNAMICCOLLIDER_SWITCH_OFFSET UNITYSDK_OFFSET(0x1A90CEA0)
#define RPG_CLIENT_PROP_DRONESDYNAMICCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90D000)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesDynamicCollider_TypeDefinitionIndex = 78090;

	class DronesDynamicCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::Prop::DronesDynamicCollider_DynamicCollider>* colliders; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESDYNAMICCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESDYNAMICCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void Switch(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESDYNAMICCOLLIDER_SWITCH_OFFSET))(this, a1);
		}
	};
}
