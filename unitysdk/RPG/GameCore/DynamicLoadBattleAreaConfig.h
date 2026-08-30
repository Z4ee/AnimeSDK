#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicLoadBlockDataList.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelBattleAreaInfo; }

#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_8B69CA91FE573207_OFFSET UNITYSDK_OFFSET(0x1DB1C770)
#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_B6858DA48901388B_OFFSET UNITYSDK_OFFSET(0x1DB1C7D0)
#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1C7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicLoadBattleAreaConfig_TypeDefinitionIndex = 18936;

	class DynamicLoadBattleAreaConfig : public ::RPG::GameCore::DynamicLoadBlockDataList
	{
	public:
		::RPG::GameCore::LevelBattleAreaInfo* BattleAreaInfo; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B69CA91FE573207(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicLoadBattleAreaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicLoadBattleAreaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_8B69CA91FE573207_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6858DA48901388B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicLoadBattleAreaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicLoadBattleAreaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_B6858DA48901388B_OFFSET))(a1, a2);
		}
	};
}
