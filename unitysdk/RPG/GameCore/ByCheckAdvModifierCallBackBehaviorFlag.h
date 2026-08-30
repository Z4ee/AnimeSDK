#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_10D63DFB6C293422_OFFSET UNITYSDK_OFFSET(0x1C2F99A0)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_4F0D9EFFB4BB75F5_OFFSET UNITYSDK_OFFSET(0x1C2F99D0)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6302EB46F2784E76_OFFSET UNITYSDK_OFFSET(0x1C2F9820)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6495F049DB25FBA7_OFFSET UNITYSDK_OFFSET(0x1C2F97E0)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F9810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckAdvModifierCallBackBehaviorFlag_TypeDefinitionIndex = 21570;

	class ByCheckAdvModifierCallBackBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureModifierBehaviorFlag Flag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6495F049DB25FBA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6495F049DB25FBA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6302EB46F2784E76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6302EB46F2784E76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10D63DFB6C293422(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_10D63DFB6C293422_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F0D9EFFB4BB75F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_4F0D9EFFB4BB75F5_OFFSET))(a1, a2);
		}
	};
}
