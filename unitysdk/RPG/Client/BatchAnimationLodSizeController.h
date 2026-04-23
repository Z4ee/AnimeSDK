#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::Rendering { class BatchAnimation; }

#define RPG_CLIENT_BATCHANIMATIONLODSIZECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9DE11D0)
#define RPG_CLIENT_BATCHANIMATIONLODSIZECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE1300)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationLodSizeController_TypeDefinitionIndex = 64061;

	class BatchAnimationLodSizeController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::BatchAnimation* BatchAnimation; // 0x18
		::Il2CppArray<::UnityEngine::Vector2>* LodSize; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONLODSIZECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONLODSIZECONTROLLER_ONENABLE_OFFSET))(this);
		}
	};
}
