#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineOrbitalTransposer_Heading_HeadingDefinition.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_HEADING__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE6E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_Heading_TypeDefinitionIndex = 36544;

	struct alignas(4) CinemachineOrbitalTransposer_Heading
	{
		::Cinemachine::CinemachineOrbitalTransposer_Heading_HeadingDefinition m_Definition; // 0x10
		::System::Int32 m_VelocityFilterStrength; // 0x14
		::System::Single m_Bias; // 0x18

		::System::Void _ctor(::Cinemachine::CinemachineOrbitalTransposer_Heading_HeadingDefinition def, ::System::Int32 filterStrength, ::System::Single bias)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer_Heading_HeadingDefinition, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_HEADING__CTOR_OFFSET))(this, def, filterStrength, bias);
		}
	};
}
