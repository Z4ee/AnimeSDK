#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHANGEBATTLEEVENTOWNER_METHOD_3_4F04724771C5CE71_OFFSET UNITYSDK_OFFSET(0x196012F0)
#define RPG_GAMECORE_CHANGEBATTLEEVENTOWNER_METHOD_3_5FDF0E278A9CB5DA_OFFSET UNITYSDK_OFFSET(0x19601270)
#define RPG_GAMECORE_CHANGEBATTLEEVENTOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x196012C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeBattleEventOwner_TypeDefinitionIndex = 21723;

	class ChangeBattleEventOwner : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BattleEvent; // 0x18
		::RPG::GameCore::TargetEvaluator* Owner; // 0x20
		::System::Boolean OverrideProperty; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEBATTLEEVENTOWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5FDF0E278A9CB5DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeBattleEventOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeBattleEventOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEBATTLEEVENTOWNER_METHOD_3_5FDF0E278A9CB5DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4F04724771C5CE71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeBattleEventOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeBattleEventOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEBATTLEEVENTOWNER_METHOD_3_4F04724771C5CE71_OFFSET))(a1, a2);
		}
	};
}
