#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamTowersBossBrickPatchConfig; }

#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG_METHOD_3_FC89BDDFD6916FAB_OFFSET UNITYSDK_OFFSET(0x1E1CD550)
#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG_METHOD_3_FD25B3B750A8FCE0_OFFSET UNITYSDK_OFFSET(0x1E1CD510)
#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CD540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersBossBrickSequenceConfig_TypeDefinitionIndex = 18735;

	class TeamTowersBossBrickSequenceConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamTowersBossBrickPatchConfig*>* Patches; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD25B3B750A8FCE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersBossBrickSequenceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersBossBrickSequenceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG_METHOD_3_FD25B3B750A8FCE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC89BDDFD6916FAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersBossBrickSequenceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersBossBrickSequenceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKSEQUENCECONFIG_METHOD_3_FC89BDDFD6916FAB_OFFSET))(a1, a2);
		}
	};
}
