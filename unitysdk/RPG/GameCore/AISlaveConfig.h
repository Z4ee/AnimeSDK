#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AISLAVECONFIG_METHOD_2_999D75FFA63B561E_OFFSET UNITYSDK_OFFSET(0x1CD677F0)
#define RPG_GAMECORE_AISLAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD67960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISlaveConfig_TypeDefinitionIndex = 17036;

	class AISlaveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::MVector3 PatrolOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISLAVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_999D75FFA63B561E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AISlaveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AISlaveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISLAVECONFIG_METHOD_2_999D75FFA63B561E_OFFSET))(a1, a2);
		}
	};
}
