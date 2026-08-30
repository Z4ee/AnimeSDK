#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16652FD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleSwitchData_TypeDefinitionIndex = 78339;

	class RotatePillarPuzzleSwitchData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Obj; // 0x10
		::UnityEngine::GameObject* AttachPillar; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCHDATA__CTOR_OFFSET))(this);
		}
	};
}
