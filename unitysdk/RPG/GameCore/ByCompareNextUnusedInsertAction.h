#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_23420A8723CFAB87_OFFSET UNITYSDK_OFFSET(0x19CFA4A0)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_33FF3E3E36DDE6EA_OFFSET UNITYSDK_OFFSET(0x19CFA770)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_662E9065505C0B5C_OFFSET UNITYSDK_OFFSET(0x19CFA730)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_77C499E5E03A2626_OFFSET UNITYSDK_OFFSET(0x19CFA4F0)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFA4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNextUnusedInsertAction_TypeDefinitionIndex = 22226;

	class ByCompareNextUnusedInsertAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterIs; // 0x20
		::System::String* CustomTagIs; // 0x28
		::RPG::GameCore::InsertActionType ActionTypeIs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_23420A8723CFAB87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_23420A8723CFAB87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77C499E5E03A2626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_77C499E5E03A2626_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_662E9065505C0B5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_662E9065505C0B5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33FF3E3E36DDE6EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_33FF3E3E36DDE6EA_OFFSET))(a1, a2);
		}
	};
}
