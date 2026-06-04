#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_2FC8B21A5EFE6CBB_OFFSET UNITYSDK_OFFSET(0x194F8520)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6302EB46F2784E76_OFFSET UNITYSDK_OFFSET(0x194F83A0)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_B02F0FB4173A8616_OFFSET UNITYSDK_OFFSET(0x194F85A0)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_E4BE073F0CDE4148_OFFSET UNITYSDK_OFFSET(0x194F82D0)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x194F8350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckAdvModifierCallBackBehaviorFlag_TypeDefinitionIndex = 20597;

	class ByCheckAdvModifierCallBackBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureModifierBehaviorFlag Flag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E4BE073F0CDE4148(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_E4BE073F0CDE4148_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6302EB46F2784E76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6302EB46F2784E76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2FC8B21A5EFE6CBB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_2FC8B21A5EFE6CBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B02F0FB4173A8616(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_B02F0FB4173A8616_OFFSET))(a1, a2);
		}
	};
}
