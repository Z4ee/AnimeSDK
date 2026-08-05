#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_MONOSYNCTRANSFORM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x190BEB00)
#define MOLEMOLE_TIMELINE_MONOSYNCTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x190BEED0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoSyncTransform_TypeDefinitionIndex = 73749;

	class MonoSyncTransform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* syncTarget; // 0x18
		::System::Boolean controlScale; // 0x20
		::System::Boolean controlRotate; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOSYNCTRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOSYNCTRANSFORM_LATEUPDATE_OFFSET))(this);
		}
	};
}
