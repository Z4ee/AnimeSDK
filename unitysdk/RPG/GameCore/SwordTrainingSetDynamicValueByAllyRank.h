#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK_METHOD_3_2B0020C073F2A92C_OFFSET UNITYSDK_OFFSET(0x1779FD80)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK_METHOD_3_A75E8D278DC26FBA_OFFSET UNITYSDK_OFFSET(0x1779FD00)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1779FD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSetDynamicValueByAllyRank_TypeDefinitionIndex = 20780;

	class SwordTrainingSetDynamicValueByAllyRank : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A75E8D278DC26FBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK_METHOD_3_A75E8D278DC26FBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B0020C073F2A92C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK_METHOD_3_2B0020C073F2A92C_OFFSET))(a1, a2);
		}
	};
}
