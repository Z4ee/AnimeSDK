#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IslandStateConfig; }
namespace RPG::GameCore { class StageIslandHLODConfig; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEISLANDCONFIG_METHOD_2_D1B29F0D4421A310_OFFSET UNITYSDK_OFFSET(0x177685B0)
#define RPG_GAMECORE_STAGEISLANDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177687E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageIslandConfig_TypeDefinitionIndex = 17542;

	class StageIslandConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 IslandID; // 0x10
		::System::String* HLODPath; // 0x18
		::Il2CppArray<::RPG::GameCore::StageIslandHLODConfig*>* HLODConfigs; // 0x20
		::Il2CppArray<::RPG::GameCore::IslandStateConfig*>* StateConfig; // 0x28
		::Il2CppArray<::RPG::GameCore::StageIslandConfig*>* ChildIslandList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D1B29F0D4421A310(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageIslandConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageIslandConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDCONFIG_METHOD_2_D1B29F0D4421A310_OFFSET))(a1, a2);
		}
	};
}
