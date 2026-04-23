#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUEREWARDCONFIG_METHOD_2_93AE016657D20715_OFFSET UNITYSDK_OFFSET(0x18B2D280)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEREWARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2D400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValueRewardConfig_TypeDefinitionIndex = 18012;

	class MissionCustomValueRewardConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Index; // 0x10
		::System::String* Name; // 0x18
		::System::UInt32 Value; // 0x20
		::System::UInt32 RewardID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEREWARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_93AE016657D20715(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionCustomValueRewardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionCustomValueRewardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEREWARDCONFIG_METHOD_2_93AE016657D20715_OFFSET))(a1, a2);
		}
	};
}
