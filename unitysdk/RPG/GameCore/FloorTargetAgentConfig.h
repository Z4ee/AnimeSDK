#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueConfig.h"
#include "unitysdk/RPG/GameCore/FloorInstanceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FLOORTARGETAGENTCONFIG_METHOD_3_667523E56EBF73E3_OFFSET UNITYSDK_OFFSET(0x1DCAEE30)
#define RPG_GAMECORE_FLOORTARGETAGENTCONFIG_METHOD_3_67F6D74BF3FD5E04_OFFSET UNITYSDK_OFFSET(0x1DCAE7C0)
#define RPG_GAMECORE_FLOORTARGETAGENTCONFIG_METHOD_3_692C8BDC7229A99A_OFFSET UNITYSDK_OFFSET(0x1DCAE050)
#define RPG_GAMECORE_FLOORTARGETAGENTCONFIG_METHOD_3_E3ED40292774A19A_OFFSET UNITYSDK_OFFSET(0x1DCAEE60)
#define RPG_GAMECORE_FLOORTARGETAGENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAE040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorTargetAgentConfig_TypeDefinitionIndex = 18070;

	class FloorTargetAgentConfig : public ::RPG::GameCore::FloorCustomValueConfig
	{
	public:
		::RPG::GameCore::FloorInstanceType AgentType; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::UInt32 InstanceID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORTARGETAGENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_667523E56EBF73E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorTargetAgentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorTargetAgentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORTARGETAGENTCONFIG_METHOD_3_667523E56EBF73E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_692C8BDC7229A99A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorTargetAgentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorTargetAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORTARGETAGENTCONFIG_METHOD_3_692C8BDC7229A99A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67F6D74BF3FD5E04(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorTargetAgentConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorTargetAgentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORTARGETAGENTCONFIG_METHOD_3_67F6D74BF3FD5E04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E3ED40292774A19A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorTargetAgentConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorTargetAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORTARGETAGENTCONFIG_METHOD_3_E3ED40292774A19A_OFFSET))(a1, a2);
		}
	};
}
