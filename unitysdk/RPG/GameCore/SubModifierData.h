#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SUBMODIFIERDATA_METHOD_2_8F202E16CFAA9C78_OFFSET UNITYSDK_OFFSET(0x19CD0320)
#define RPG_GAMECORE_SUBMODIFIERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD0780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubModifierData_TypeDefinitionIndex = 17330;

	class SubModifierData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* ReferenceModifierName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean IncludeBattleEvent; // 0x28
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x38
		::RPG::GameCore::PredicateConfig* Predicate; // 0x40
		::System::Boolean IsHaloStatus; // 0x48
		::System::Boolean SyncLayerFromParent; // 0x49
		::RPG::GameCore::BoolEx AliveOnly; // 0x4C
		::System::Boolean AutoDetectWhenRevive; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMODIFIERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8F202E16CFAA9C78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubModifierData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubModifierData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMODIFIERDATA_METHOD_2_8F202E16CFAA9C78_OFFSET))(a1, a2);
		}
	};
}
