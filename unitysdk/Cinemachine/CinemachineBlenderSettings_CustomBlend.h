#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlenderSettings_CustomBlend_TypeDefinitionIndex = 37652;

	struct alignas(8) CinemachineBlenderSettings_CustomBlend
	{
		::System::String* m_From; // 0x10
		::System::String* m_To; // 0x18
		::Cinemachine::CinemachineBlendDefinition m_Blend; // 0x20
	};
}
