#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_METHOD_3_95E50C58A8A15F45_OFFSET UNITYSDK_OFFSET(0x1D595DF0)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_METHOD_3_C44B6FA3DF567BCA_OFFSET UNITYSDK_OFFSET(0x1D595E30)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D595E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSetDynamicValueByEnemyRank_TypeDefinitionIndex = 22346;

	class SwordTrainingSetDynamicValueByEnemyRank : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95E50C58A8A15F45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_METHOD_3_95E50C58A8A15F45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C44B6FA3DF567BCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_METHOD_3_C44B6FA3DF567BCA_OFFSET))(a1, a2);
		}
	};
}
