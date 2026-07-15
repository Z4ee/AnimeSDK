#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_METHOD_3_8AF42581274B2FCA_OFFSET UNITYSDK_OFFSET(0x1AE5D230)
#define RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_METHOD_3_E089627B70196981_OFFSET UNITYSDK_OFFSET(0x1AE5D1F0)
#define RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5D220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureForbidAttackTriggerBattle_TypeDefinitionIndex = 20862;

	class AdventureForbidAttackTriggerBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsForbid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E089627B70196981(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureForbidAttackTriggerBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureForbidAttackTriggerBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_METHOD_3_E089627B70196981_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8AF42581274B2FCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureForbidAttackTriggerBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureForbidAttackTriggerBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_METHOD_3_8AF42581274B2FCA_OFFSET))(a1, a2);
		}
	};
}
