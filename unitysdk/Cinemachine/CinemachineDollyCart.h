#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineDollyCart_UpdateMethod.h"
#include "unitysdk/Cinemachine/CinemachinePathBase_PositionUnits.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachinePathBase; }

#define CINEMACHINE_CINEMACHINEDOLLYCART_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12B7BD80)
#define CINEMACHINE_CINEMACHINEDOLLYCART_INITPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x12B7C0E0)
#define CINEMACHINE_CINEMACHINEDOLLYCART_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12B7BF70)
#define CINEMACHINE_CINEMACHINEDOLLYCART_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x12B7BFE0)
#define CINEMACHINE_CINEMACHINEDOLLYCART_SETCARTPOSITION_OFFSET UNITYSDK_OFFSET(0x12B7BDE0)
#define CINEMACHINE_CINEMACHINEDOLLYCART_UPDATE_OFFSET UNITYSDK_OFFSET(0x12B7BF00)
#define CINEMACHINE_CINEMACHINEDOLLYCART__CTOR_OFFSET UNITYSDK_OFFSET(0x12B7C0F0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineDollyCart_TypeDefinitionIndex = 36495;

	class CinemachineDollyCart : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachinePathBase* m_Path; // 0x18
		::Cinemachine::CinemachineDollyCart_UpdateMethod m_UpdateMethod; // 0x20
		::Cinemachine::CinemachinePathBase_PositionUnits m_PositionUnits; // 0x24
		::System::Single m_Speed; // 0x28
		::System::Single m_Position; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART__CTOR_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void SetCartPosition(::System::Single distanceAlongPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_SETCARTPOSITION_OFFSET))(this, distanceAlongPath);
		}

		::System::Void InitPositionAndRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_INITPOSITIONANDROTATION_OFFSET))(this);
		}
	};
}
