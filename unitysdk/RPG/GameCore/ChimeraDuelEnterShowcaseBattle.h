#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE_METHOD_3_AABE39ECAC05C65B_OFFSET UNITYSDK_OFFSET(0x1C394E20)
#define RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE_METHOD_3_CA01FE1FEF473B5E_OFFSET UNITYSDK_OFFSET(0x1C394D50)
#define RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C394E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEnterShowcaseBattle_TypeDefinitionIndex = 20937;

	class ChimeraDuelEnterShowcaseBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA01FE1FEF473B5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE_METHOD_3_CA01FE1FEF473B5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AABE39ECAC05C65B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE_METHOD_3_AABE39ECAC05C65B_OFFSET))(a1, a2);
		}
	};
}
