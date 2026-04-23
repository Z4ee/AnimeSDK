#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicLoadBlockDataList.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelBattleAreaInfo; }

#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_5BA641472350F671_OFFSET UNITYSDK_OFFSET(0x18892040)
#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_E71AC4FF05BCC114_OFFSET UNITYSDK_OFFSET(0x18891FE0)
#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18892020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicLoadBattleAreaConfig_TypeDefinitionIndex = 18186;

	class DynamicLoadBattleAreaConfig : public ::RPG::GameCore::DynamicLoadBlockDataList
	{
	public:
		::RPG::GameCore::LevelBattleAreaInfo* BattleAreaInfo; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E71AC4FF05BCC114(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicLoadBattleAreaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicLoadBattleAreaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_E71AC4FF05BCC114_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5BA641472350F671(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicLoadBattleAreaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicLoadBattleAreaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_5BA641472350F671_OFFSET))(a1, a2);
		}
	};
}
