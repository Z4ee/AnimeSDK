#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesDynamicCollider_DynamicCollider.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_DRONESDYNAMICCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDC50070)
#define RPG_CLIENT_PROP_DRONESDYNAMICCOLLIDER_SWITCH_OFFSET UNITYSDK_OFFSET(0xDC50110)
#define RPG_CLIENT_PROP_DRONESDYNAMICCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xDC50270)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesDynamicCollider_TypeDefinitionIndex = 78091;

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
