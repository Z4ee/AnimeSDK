#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_32A541A98BC013C9_OFFSET UNITYSDK_OFFSET(0x1DB34F40)
#define RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_32A8980B06BBA4ED_OFFSET UNITYSDK_OFFSET(0x1DB350F0)
#define RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_8FD7708D607F806C_OFFSET UNITYSDK_OFFSET(0x1DB350C0)
#define RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_DFF5C3047D9FAC52_OFFSET UNITYSDK_OFFSET(0x1DB34F80)
#define RPG_GAMECORE_ST_BYEXITCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB34F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByExitCombat_TypeDefinitionIndex = 19859;

	class ST_ByExitCombat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYEXITCOMBAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_32A541A98BC013C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByExitCombat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByExitCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_32A541A98BC013C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DFF5C3047D9FAC52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByExitCombat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_DFF5C3047D9FAC52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8FD7708D607F806C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByExitCombat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByExitCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_8FD7708D607F806C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_32A8980B06BBA4ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByExitCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_32A8980B06BBA4ED_OFFSET))(a1, a2);
		}
	};
}
