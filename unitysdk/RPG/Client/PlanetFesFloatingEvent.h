#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6CC143B9599F1FCA;
namespace RPG::Client { class QuadricBezier; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PLANETFESFLOATINGEVENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xC411450)
#define RPG_CLIENT_PLANETFESFLOATINGEVENT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xC411490)
#define RPG_CLIENT_PLANETFESFLOATINGEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC4113C0)
#define RPG_CLIENT_PLANETFESFLOATINGEVENT_PLAY_OFFSET UNITYSDK_OFFSET(0xC4103A0)
#define RPG_CLIENT_PLANETFESFLOATINGEVENT_SETICON_OFFSET UNITYSDK_OFFSET(0xC4102F0)
#define RPG_CLIENT_PLANETFESFLOATINGEVENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xC411410)
#define RPG_CLIENT_PLANETFESFLOATINGEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC411600)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingEvent_TypeDefinitionIndex = 62177;

	class PlanetFesFloatingEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::Class_1_6CC143B9599F1FCA* Field_5_3; // 0x30
		::RPG::Client::QuadricBezier* Field_5_4; // 0x38
		::System::Single Field_5_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGEVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGEVENT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGEVENT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGEVENT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGEVENT_SETICON_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGEVENT_PLAY_OFFSET))(this, a1, a2, a3);
		}
	};
}
