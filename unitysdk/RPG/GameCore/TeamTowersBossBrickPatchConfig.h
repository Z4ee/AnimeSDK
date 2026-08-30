#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamTowersBossBrickEntryConfig; }

#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKPATCHCONFIG_METHOD_2_2A23699BE64B2DD5_OFFSET UNITYSDK_OFFSET(0x1E1CD410)
#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKPATCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CD500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersBossBrickPatchConfig_TypeDefinitionIndex = 18734;

	class TeamTowersBossBrickPatchConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamTowersBossBrickEntryConfig*>* Bricks; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKPATCHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2A23699BE64B2DD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersBossBrickPatchConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersBossBrickPatchConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKPATCHCONFIG_METHOD_2_2A23699BE64B2DD5_OFFSET))(a1, a2);
		}
	};
}
