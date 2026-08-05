#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_UIADAPTORRECTTRANSFORM_REINITFROMRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F3A06A0)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_UIADAPTORRECTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A0690)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int GameObjectPosBehavior_UIAdaptorRectTransform_TypeDefinitionIndex = 32852;

	class GameObjectPosBehavior_UIAdaptorRectTransform : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 localScale; // 0x2C

		::System::Void _ctor(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_UIADAPTORRECTTRANSFORM__CTOR_OFFSET))(this, transform);
		}

		::System::Boolean ReInitFromRectTransform(::UnityEngine::Transform* transform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSBEHAVIOR_UIADAPTORRECTTRANSFORM_REINITFROMRECTTRANSFORM_OFFSET))(this, transform);
		}
	};
}
