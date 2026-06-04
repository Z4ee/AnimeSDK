#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_67E9BC6DAE36AB2B_OFFSET UNITYSDK_OFFSET(0x19C13230)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_AC8D0318805080FC_OFFSET UNITYSDK_OFFSET(0x19C13370)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_BF32453872366031_OFFSET UNITYSDK_OFFSET(0x19C13160)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_CC7236970C20B7D4_OFFSET UNITYSDK_OFFSET(0x19C133F0)
#define RPG_GAMECORE_ST_BYFORCEEXITCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C131E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByForceExitCombat_TypeDefinitionIndex = 18966;

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

		static ::System::Void Method_4_AC8D0318805080FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_AC8D0318805080FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC7236970C20B7D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFORCEEXITCOMBAT_METHOD_4_CC7236970C20B7D4_OFFSET))(a1, a2);
		}
	};
}
