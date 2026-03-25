#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_1D3DBE1510BDE006_OFFSET UNITYSDK_OFFSET(0x17011060)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_77C499E5E03A2626_OFFSET UNITYSDK_OFFSET(0x17011140)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x170110E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNextUnusedInsertAction_TypeDefinitionIndex = 21260;

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
	};
}
