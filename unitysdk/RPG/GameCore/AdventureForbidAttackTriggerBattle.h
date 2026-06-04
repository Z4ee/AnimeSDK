#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_METHOD_3_62779342027A1413_OFFSET UNITYSDK_OFFSET(0x1944E9C0)
#define RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_METHOD_3_8AF42581274B2FCA_OFFSET UNITYSDK_OFFSET(0x1944EA40)
#define RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1944EA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureForbidAttackTriggerBattle_TypeDefinitionIndex = 20447;

	class AdventureForbidAttackTriggerBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsForbid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_62779342027A1413(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureForbidAttackTriggerBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureForbidAttackTriggerBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_METHOD_3_62779342027A1413_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8AF42581274B2FCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureForbidAttackTriggerBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureForbidAttackTriggerBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_METHOD_3_8AF42581274B2FCA_OFFSET))(a1, a2);
		}
	};
}
