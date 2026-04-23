#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_METHOD_3_8EED0A48DCE980B3_OFFSET UNITYSDK_OFFSET(0x18CB92E0)
#define RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_METHOD_3_A24B61531FE7326A_OFFSET UNITYSDK_OFFSET(0x18CB9260)
#define RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB92B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetrySwordTrainingFinalBattle_TypeDefinitionIndex = 19275;

	class RetrySwordTrainingFinalBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRetry; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A24B61531FE7326A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetrySwordTrainingFinalBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetrySwordTrainingFinalBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_METHOD_3_A24B61531FE7326A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8EED0A48DCE980B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetrySwordTrainingFinalBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetrySwordTrainingFinalBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_METHOD_3_8EED0A48DCE980B3_OFFSET))(a1, a2);
		}
	};
}
