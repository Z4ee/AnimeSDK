#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE_METHOD_3_6F420CA0942F9CAE_OFFSET UNITYSDK_OFFSET(0x16F5A290)
#define RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE_METHOD_3_B40491D83480E3DF_OFFSET UNITYSDK_OFFSET(0x16F5A310)
#define RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5A2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSetAttackTargetWithoutBattle_TypeDefinitionIndex = 19929;

	class AdventureSetAttackTargetWithoutBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F420CA0942F9CAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE_METHOD_3_6F420CA0942F9CAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B40491D83480E3DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETWITHOUTBATTLE_METHOD_3_B40491D83480E3DF_OFFSET))(a1, a2);
		}
	};
}
