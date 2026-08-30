#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PropCableLine; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_DCACF1A724007C54_CLEAR_OFFSET UNITYSDK_OFFSET(0x19916EA0)
#define CLASS_1_DCACF1A724007C54_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x19916DB0)
#define CLASS_1_DCACF1A724007C54_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x19916E20)
#define CLASS_1_DCACF1A724007C54_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x19916DC0)
#define CLASS_1_DCACF1A724007C54_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x19916E60)
#define CLASS_1_DCACF1A724007C54__CTOR_OFFSET UNITYSDK_OFFSET(0x19916EF0)

inline static constexpr unsigned int Class_1_DCACF1A724007C54_TypeDefinitionIndex = 68733;

class Class_1_DCACF1A724007C54 : public ::System::Object
{
public:
	::RPG::Client::PropCableLine* IIHMHJBOJEB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCACF1A724007C54__CTOR_OFFSET))(this);
	}

	::RPG::Client::GameObjectSpawnPriority get_Priority()
	{
		return ((::RPG::Client::GameObjectSpawnPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCACF1A724007C54_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_DCACF1A724007C54_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCACF1A724007C54_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCACF1A724007C54_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCACF1A724007C54_CLEAR_OFFSET))(this);
	}
};
