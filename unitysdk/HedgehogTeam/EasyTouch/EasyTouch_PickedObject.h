#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_PICKEDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A5AD00)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_PickedObject_TypeDefinitionIndex = 31304;

	class EasyTouch_PickedObject : public ::System::Object
	{
	public:
		::UnityEngine::Camera* pickedCamera; // 0x10
		::UnityEngine::GameObject* pickedObj; // 0x18
		::System::Boolean isGUI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_PICKEDOBJECT__CTOR_OFFSET))(this);
		}
	};
}
