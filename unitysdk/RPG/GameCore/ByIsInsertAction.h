#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINSERTACTION_METHOD_4_23CB2E079811CA42_OFFSET UNITYSDK_OFFSET(0x1CF428A0)
#define RPG_GAMECORE_BYISINSERTACTION_METHOD_4_3DACE74625943B15_OFFSET UNITYSDK_OFFSET(0x1CF428D0)
#define RPG_GAMECORE_BYISINSERTACTION_METHOD_4_69C4609B10CEB07A_OFFSET UNITYSDK_OFFSET(0x1CF42650)
#define RPG_GAMECORE_BYISINSERTACTION_METHOD_4_7C1746FC6E5C7E37_OFFSET UNITYSDK_OFFSET(0x1CF42690)
#define RPG_GAMECORE_BYISINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF42680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInsertAction_TypeDefinitionIndex = 22313;

	class ByIsInsertAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::InsertActionType ActionType; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypeFilter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_69C4609B10CEB07A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInsertAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInsertAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_METHOD_4_69C4609B10CEB07A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C1746FC6E5C7E37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInsertAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_METHOD_4_7C1746FC6E5C7E37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_23CB2E079811CA42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInsertAction*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInsertAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_METHOD_4_23CB2E079811CA42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3DACE74625943B15(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_METHOD_4_3DACE74625943B15_OFFSET))(a1, a2);
		}
	};
}
