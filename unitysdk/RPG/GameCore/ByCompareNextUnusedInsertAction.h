#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_9AA6F84388710AEF_OFFSET UNITYSDK_OFFSET(0x187353A0)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_F61A6957E7A12D0F_OFFSET UNITYSDK_OFFSET(0x18735480)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18735420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNextUnusedInsertAction_TypeDefinitionIndex = 21977;

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

		static ::System::Void Method_4_9AA6F84388710AEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_9AA6F84388710AEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F61A6957E7A12D0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_METHOD_4_F61A6957E7A12D0F_OFFSET))(a1, a2);
		}
	};
}
