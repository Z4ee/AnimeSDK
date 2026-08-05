#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_PARENTHASH__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStateDrivenCamera_ParentHash_TypeDefinitionIndex = 34680;

	struct alignas(4) CinemachineStateDrivenCamera_ParentHash
	{
		::System::Int32 m_Hash; // 0x10
		::System::Int32 m_ParentHash; // 0x14

		::System::Void _ctor(::System::Int32 h, ::System::Int32 p)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTATEDRIVENCAMERA_PARENTHASH__CTOR_OFFSET))(this, h, p);
		}
	};
}
