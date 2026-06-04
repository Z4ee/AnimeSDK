#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADDMAZEBUFF_METHOD_3_A530E77385635ACA_OFFSET UNITYSDK_OFFSET(0x1940EEE0)
#define RPG_GAMECORE_ADDMAZEBUFF_METHOD_3_C1F7B6FD9A40D50E_OFFSET UNITYSDK_OFFSET(0x1940F080)
#define RPG_GAMECORE_ADDMAZEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1940C900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddMazeBuff_TypeDefinitionIndex = 19279;

	class AddMazeBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::RPG::GameCore::TargetEvaluator* BindingAffectedTarget; // 0x30
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x38
		::RPG::GameCore::DynamicFloat* Count; // 0x40
		::RPG::GameCore::DynamicFloat* Level; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A530E77385635ACA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddMazeBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddMazeBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFF_METHOD_3_A530E77385635ACA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C1F7B6FD9A40D50E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddMazeBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFF_METHOD_3_C1F7B6FD9A40D50E_OFFSET))(a1, a2);
		}
	};
}
