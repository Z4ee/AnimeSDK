#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_1D3DBE1510BDE006_OFFSET UNITYSDK_OFFSET(0x19524530)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_73D49C24F5BEFFF4_OFFSET UNITYSDK_OFFSET(0x19524850)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_77C499E5E03A2626_OFFSET UNITYSDK_OFFSET(0x19524610)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_E8758B8E2480364B_OFFSET UNITYSDK_OFFSET(0x195248D0)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x195245B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNextUnusedInsertAction_TypeDefinitionIndex = 21800;

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

		static ::System::Void Method_4_1D3DBE1510BDE006(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_1D3DBE1510BDE006_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77C499E5E03A2626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_77C499E5E03A2626_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_73D49C24F5BEFFF4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_73D49C24F5BEFFF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E8758B8E2480364B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_E8758B8E2480364B_OFFSET))(a1, a2);
		}
	};
}
