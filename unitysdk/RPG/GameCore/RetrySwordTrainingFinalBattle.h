#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_METHOD_3_7DFBC3299EA1A820_OFFSET UNITYSDK_OFFSET(0x1D3B2A70)
#define RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_METHOD_3_8EED0A48DCE980B3_OFFSET UNITYSDK_OFFSET(0x1D3B2AB0)
#define RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B2AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetrySwordTrainingFinalBattle_TypeDefinitionIndex = 20094;

	class RetrySwordTrainingFinalBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRetry; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7DFBC3299EA1A820(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetrySwordTrainingFinalBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetrySwordTrainingFinalBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_METHOD_3_7DFBC3299EA1A820_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8EED0A48DCE980B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetrySwordTrainingFinalBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetrySwordTrainingFinalBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_METHOD_3_8EED0A48DCE980B3_OFFSET))(a1, a2);
		}
	};
}
