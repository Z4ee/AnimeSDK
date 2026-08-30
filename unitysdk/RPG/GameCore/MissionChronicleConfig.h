#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleGraphType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChronicleLogicConnectionNodeConfig; }
namespace RPG::GameCore { class ChronicleNodeConfig; }

#define RPG_GAMECORE_MISSIONCHRONICLECONFIG_METHOD_2_2636A5C6923DDDA0_OFFSET UNITYSDK_OFFSET(0x1D1A8AE0)
#define RPG_GAMECORE_MISSIONCHRONICLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A8CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionChronicleConfig_TypeDefinitionIndex = 18755;

	class MissionChronicleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChronicleGraphType GraphType; // 0x10
		::Il2CppArray<::RPG::GameCore::ChronicleNodeConfig*>* NodeList; // 0x18
		::Il2CppArray<::RPG::GameCore::ChronicleLogicConnectionNodeConfig*>* LogicConnectionList; // 0x20
		::System::UInt32 StartNodeID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHRONICLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2636A5C6923DDDA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionChronicleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionChronicleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHRONICLECONFIG_METHOD_2_2636A5C6923DDDA0_OFFSET))(a1, a2);
		}
	};
}
