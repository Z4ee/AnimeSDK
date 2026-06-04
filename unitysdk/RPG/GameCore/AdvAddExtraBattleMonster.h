#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_METHOD_3_1B6540409EC3F195_OFFSET UNITYSDK_OFFSET(0x19414D80)
#define RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_METHOD_3_7101D4F8FBA82C64_OFFSET UNITYSDK_OFFSET(0x19414E00)
#define RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19414DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAddExtraBattleMonster_TypeDefinitionIndex = 20591;

	class AdvAddExtraBattleMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B6540409EC3F195(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddExtraBattleMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddExtraBattleMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_METHOD_3_1B6540409EC3F195_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7101D4F8FBA82C64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddExtraBattleMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddExtraBattleMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_METHOD_3_7101D4F8FBA82C64_OFFSET))(a1, a2);
		}
	};
}
