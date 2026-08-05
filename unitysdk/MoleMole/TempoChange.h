#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TEMPOCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1190F3A0)

namespace MoleMole
{
	inline static constexpr unsigned int TempoChange_TypeDefinitionIndex = 72892;

	class TempoChange : public ::System::Object
	{
	public:
		::System::Double AtBeat; // 0x10
		::System::Double BPM; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEMPOCHANGE__CTOR_OFFSET))(this);
		}
	};
}
