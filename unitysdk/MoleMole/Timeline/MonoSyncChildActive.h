#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_MONOSYNCCHILDACTIVE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19999C60)
#define MOLEMOLE_TIMELINE_MONOSYNCCHILDACTIVE_SYNCACTIVE_OFFSET UNITYSDK_OFFSET(0x19999CB0)
#define MOLEMOLE_TIMELINE_MONOSYNCCHILDACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19999F70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoSyncChildActive_TypeDefinitionIndex = 87941;

	class MonoSyncChildActive : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* syncTarget; // 0x18
		::UnityEngine::GameObject* syncChild; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOSYNCCHILDACTIVE__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOSYNCCHILDACTIVE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SyncActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOSYNCCHILDACTIVE_SYNCACTIVE_OFFSET))(this);
		}
	};
}
