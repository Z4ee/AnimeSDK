#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLESCALEANIMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAC49B60)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleScaleAnimData_TypeDefinitionIndex = 60869;

	class PenaconyEndmostChronicleScaleAnimData : public ::System::Object
	{
	public:
		::System::Single Scale; // 0x10
		::System::Single Time; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLESCALEANIMDATA__CTOR_OFFSET))(this);
		}
	};
}
