#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EVOLVEBUILDSCMIXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCEE9920)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildScMixData_TypeDefinitionIndex = 63887;

	class EvolveBuildScMixData : public ::System::Object
	{
	public:
		::System::UInt32 FirstGearID; // 0x10
		::System::UInt32 MixGearID; // 0x14
		::System::UInt32 SecondGearID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSCMIXDATA__CTOR_OFFSET))(this);
		}
	};
}
