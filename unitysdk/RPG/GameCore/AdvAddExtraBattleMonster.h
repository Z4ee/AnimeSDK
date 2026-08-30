#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_METHOD_3_7101D4F8FBA82C64_OFFSET UNITYSDK_OFFSET(0x1D6A7190)
#define RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_METHOD_3_75FFFA7C2F1F2BBF_OFFSET UNITYSDK_OFFSET(0x1D6A7150)
#define RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A7180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAddExtraBattleMonster_TypeDefinitionIndex = 21564;

	class AdvAddExtraBattleMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75FFFA7C2F1F2BBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddExtraBattleMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddExtraBattleMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_METHOD_3_75FFFA7C2F1F2BBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7101D4F8FBA82C64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddExtraBattleMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddExtraBattleMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDEXTRABATTLEMONSTER_METHOD_3_7101D4F8FBA82C64_OFFSET))(a1, a2);
		}
	};
}
