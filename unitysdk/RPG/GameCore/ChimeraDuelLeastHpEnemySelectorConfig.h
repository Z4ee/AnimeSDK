#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELLEASTHPENEMYSELECTORCONFIG_METHOD_3_76E456C56F3388BE_OFFSET UNITYSDK_OFFSET(0x1CFC8390)
#define RPG_GAMECORE_CHIMERADUELLEASTHPENEMYSELECTORCONFIG_METHOD_3_BBC10D73A4DE00AF_OFFSET UNITYSDK_OFFSET(0x1CFC8430)
#define RPG_GAMECORE_CHIMERADUELLEASTHPENEMYSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC8420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelLeastHpEnemySelectorConfig_TypeDefinitionIndex = 15762;

	class ChimeraDuelLeastHpEnemySelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEASTHPENEMYSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76E456C56F3388BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelLeastHpEnemySelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelLeastHpEnemySelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEASTHPENEMYSELECTORCONFIG_METHOD_3_76E456C56F3388BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BBC10D73A4DE00AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelLeastHpEnemySelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelLeastHpEnemySelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEASTHPENEMYSELECTORCONFIG_METHOD_3_BBC10D73A4DE00AF_OFFSET))(a1, a2);
		}
	};
}
