#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_036C482F2E3164D4_OFFSET UNITYSDK_OFFSET(0x1CDBA2C0)
#define RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_6D46E65C070E5D1C_OFFSET UNITYSDK_OFFSET(0x1CDBA110)
#define RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_88EE3127DB4C2DD7_OFFSET UNITYSDK_OFFSET(0x1CDBA150)
#define RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_9AB8D3DF173E98BD_OFFSET UNITYSDK_OFFSET(0x1CDBA290)
#define RPG_GAMECORE_BYPAMNORMALACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBA140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamNormalAction_TypeDefinitionIndex = 19779;

	class ByPamNormalAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6D46E65C070E5D1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamNormalAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamNormalAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_6D46E65C070E5D1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88EE3127DB4C2DD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamNormalAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_88EE3127DB4C2DD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9AB8D3DF173E98BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalAction*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_9AB8D3DF173E98BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_036C482F2E3164D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_036C482F2E3164D4_OFFSET))(a1, a2);
		}
	};
}
