#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole { class SharedStrList; }

#define MOLEMOLE_FILTERANCHORBYAABBCOLLIDER_CREATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x182C91C0)
#define MOLEMOLE_FILTERANCHORBYAABBCOLLIDER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x182C88A0)
#define MOLEMOLE_FILTERANCHORBYAABBCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x182C94F0)
#define MOLEMOLE_FILTERANCHORBYAABBCOLLIDER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x182C9580)

namespace MoleMole
{
	inline static constexpr unsigned int FilterAnchorByAABBCollider_TypeDefinitionIndex = 62386;

	class FilterAnchorByAABBCollider : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedStrList* OutList; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::MoleMole::SharedStrList* AnchorList; // 0x68
		::UnityEngine::Vector3 PresetAnchorSize; // 0x70
		::UnityEngine::Vector3 PresetOwnerSize; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FILTERANCHORBYAABBCOLLIDER__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FILTERANCHORBYAABBCOLLIDER_ONUPDATE_OFFSET))(this);
		}

		::UnityEngine::Bounds CreateBounds(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_FILTERANCHORBYAABBCOLLIDER_CREATEBOUNDS_OFFSET))(this, center, size, rotation);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FILTERANCHORBYAABBCOLLIDER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
