#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EVOLVEBUILDMIXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF2C20)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildMixData_TypeDefinitionIndex = 61033;

	class EvolveBuildMixData : public ::System::Object
	{
	public:
		::System::UInt32 WeaponID; // 0x10
		::System::UInt32 ForgeID; // 0x14
		::System::UInt32 AccessoryID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMIXDATA__CTOR_OFFSET))(this);
		}
	};
}
