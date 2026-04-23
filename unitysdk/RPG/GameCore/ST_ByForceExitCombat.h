#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_67E9BC6DAE36AB2B_OFFSET UNITYSDK_OFFSET(0x18DED140)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_BF32453872366031_OFFSET UNITYSDK_OFFSET(0x18DED070)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DED0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByForceExitCombat_TypeDefinitionIndex = 19016;

	class ST_ByForceExitCombat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BF32453872366031(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByForceExitCombat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByForceExitCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_BF32453872366031_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67E9BC6DAE36AB2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_67E9BC6DAE36AB2B_OFFSET))(a1, a2);
		}
	};
}
