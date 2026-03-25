#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_METHOD_3_0E672D454E07F5C8_OFFSET UNITYSDK_OFFSET(0x1779FEF0)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_METHOD_3_C44B6FA3DF567BCA_OFFSET UNITYSDK_OFFSET(0x1779FF70)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1779FF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSetDynamicValueByEnemyRank_TypeDefinitionIndex = 20781;

	class SwordTrainingSetDynamicValueByEnemyRank : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E672D454E07F5C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_METHOD_3_0E672D454E07F5C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C44B6FA3DF567BCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYENEMYRANK_METHOD_3_C44B6FA3DF567BCA_OFFSET))(a1, a2);
		}
	};
}
