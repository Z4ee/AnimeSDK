#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINPARTYLOOPCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xB366720)
#define RPG_CLIENT_TRAINPARTYLOOPCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB366950)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyLoopControl_TypeDefinitionIndex = 55555;

	class TrainPartyLoopControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsFollow; // 0x18
		::UnityEngine::Transform* Target; // 0x20
		::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x28
		::Cinemachine::CinemachineDollyCart* cart; // 0x30
		::System::Boolean IsLoop; // 0x38
		::System::Single MoveLength; // 0x3C
		::System::Nullable_1<::System::Single> Field_5_6; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYLOOPCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYLOOPCONTROL_UPDATE_OFFSET))(this);
		}
	};
}
