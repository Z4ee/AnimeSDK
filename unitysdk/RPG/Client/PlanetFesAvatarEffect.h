#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoUILayerOrderAdjuster; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Canvas; }

#define RPG_CLIENT_PLANETFESAVATAREFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A956AE0)
#define RPG_CLIENT_PLANETFESAVATAREFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1A956B20)
#define RPG_CLIENT_PLANETFESAVATAREFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1A956CC0)
#define RPG_CLIENT_PLANETFESAVATAREFFECT_SETBASECANVAS_OFFSET UNITYSDK_OFFSET(0x1A956C40)
#define RPG_CLIENT_PLANETFESAVATAREFFECT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A956BB0)
#define RPG_CLIENT_PLANETFESAVATAREFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1A956AA0)
#define RPG_CLIENT_PLANETFESAVATAREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A956DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEffect_TypeDefinitionIndex = 63521;

	class PlanetFesAvatarEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoUILayerOrderAdjuster* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECT_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetBaseCanvas(::UnityEngine::Canvas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECT_SETBASECANVAS_OFFSET))(this, a1);
		}

		::System::Void Play(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREFFECT_PLAY_OFFSET))(this, a1, a2);
		}
	};
}
