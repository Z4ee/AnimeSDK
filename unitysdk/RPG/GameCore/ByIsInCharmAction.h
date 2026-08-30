#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_17043F09D94B6F03_OFFSET UNITYSDK_OFFSET(0x1CDA3810)
#define RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_2D21B70280E6EC08_OFFSET UNITYSDK_OFFSET(0x1CDA36A0)
#define RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_FADCEB5FDC083FAE_OFFSET UNITYSDK_OFFSET(0x1CDA37E0)
#define RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_FD1E1305D8E593EB_OFFSET UNITYSDK_OFFSET(0x1CDA3660)
#define RPG_GAMECORE_BYISINCHARMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA3690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInCharmAction_TypeDefinitionIndex = 23229;

	class ByIsInCharmAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FD1E1305D8E593EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInCharmAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInCharmAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_FD1E1305D8E593EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2D21B70280E6EC08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_2D21B70280E6EC08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FADCEB5FDC083FAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharmAction*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharmAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_FADCEB5FDC083FAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_17043F09D94B6F03(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_17043F09D94B6F03_OFFSET))(a1, a2);
		}
	};
}
