#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare::CriTimeline::Atom { class CriAtomClipBase; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xAC5B00)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomClipPlayConfig_TypeDefinitionIndex = 35038;

	struct alignas(8) CriAtomClipPlayConfig
	{
		::CriWare::CriTimeline::Atom::CriAtomClipBase* clip; // 0x10
		::System::Int64 startTimeMs; // 0x18
		::System::Double speedRate; // 0x20
		::System::Boolean loop; // 0x28

		::System::Void _ctor(::CriWare::CriTimeline::Atom::CriAtomClipBase* clip, ::System::Int64 startTimeMs, ::System::Double speedRate, ::System::Boolean loop)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriTimeline::Atom::CriAtomClipBase*, ::System::Int64, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIPPLAYCONFIG__CTOR_OFFSET))(this, clip, startTimeMs, speedRate, loop);
		}
	};
}
