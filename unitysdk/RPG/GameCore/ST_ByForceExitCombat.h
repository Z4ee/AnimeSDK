#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_67E9BC6DAE36AB2B_OFFSET UNITYSDK_OFFSET(0x1B77BEF0)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_B6822279B5B6B008_OFFSET UNITYSDK_OFFSET(0x1B77C060)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_D399290E104598D1_OFFSET UNITYSDK_OFFSET(0x1B77C030)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_E80947427CCC3198_OFFSET UNITYSDK_OFFSET(0x1B77BEB0)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77BEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByForceExitCombat_TypeDefinitionIndex = 19316;

	class ST_ByForceExitCombat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E80947427CCC3198(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByForceExitCombat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByForceExitCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_E80947427CCC3198_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67E9BC6DAE36AB2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_67E9BC6DAE36AB2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D399290E104598D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_D399290E104598D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B6822279B5B6B008(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_B6822279B5B6B008_OFFSET))(a1, a2);
		}
	};
}
