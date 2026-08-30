#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class BlendSourceVirtualCamera; }
namespace Cinemachine { class CinemachineBlend; }

#define CINEMACHINE_CINEMACHINEBRAIN_BRAINFRAME_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x164475F0)
#define CINEMACHINE_CINEMACHINEBRAIN_BRAINFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x16444C00)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_BrainFrame_TypeDefinitionIndex = 38425;

	class CinemachineBrain_BrainFrame : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineBlend* blend; // 0x10
		::Cinemachine::CinemachineBlend* workingBlend; // 0x18
		::Cinemachine::BlendSourceVirtualCamera* workingBlendSource; // 0x20
		::System::Int32 id; // 0x28
		::System::Single deltaTimeOverride; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_BRAINFRAME__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_BRAINFRAME_GET_ACTIVE_OFFSET))(this);
		}
	};
}
