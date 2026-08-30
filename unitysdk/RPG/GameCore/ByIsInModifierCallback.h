#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISINMODIFIERCALLBACK_METHOD_4_257CDDB0468C44BE_OFFSET UNITYSDK_OFFSET(0x1CF40510)
#define RPG_GAMECORE_BYISINMODIFIERCALLBACK_METHOD_4_5466F502779F9370_OFFSET UNITYSDK_OFFSET(0x1CF40970)
#define RPG_GAMECORE_BYISINMODIFIERCALLBACK_METHOD_4_75B9E4A48D442833_OFFSET UNITYSDK_OFFSET(0x1CF40910)
#define RPG_GAMECORE_BYISINMODIFIERCALLBACK_METHOD_4_B3CCBF41E346B124_OFFSET UNITYSDK_OFFSET(0x1CF405B0)
#define RPG_GAMECORE_BYISINMODIFIERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF40570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInModifierCallback_TypeDefinitionIndex = 23235;

	class ByIsInModifierCallback : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* ModifierOwner; // 0x28
		::RPG::GameCore::TargetEvaluator* ModifierCaster; // 0x30
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* EventTypes; // 0x38
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* PropertyTypes; // 0x40
		::Il2CppArray<::System::String*>* DynamicValues; // 0x48
		::System::Boolean IgnoreCurCallback; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINMODIFIERCALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_257CDDB0468C44BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInModifierCallback*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInModifierCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINMODIFIERCALLBACK_METHOD_4_257CDDB0468C44BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3CCBF41E346B124(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInModifierCallback* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInModifierCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINMODIFIERCALLBACK_METHOD_4_B3CCBF41E346B124_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_75B9E4A48D442833(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInModifierCallback*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInModifierCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINMODIFIERCALLBACK_METHOD_4_75B9E4A48D442833_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5466F502779F9370(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInModifierCallback* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInModifierCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINMODIFIERCALLBACK_METHOD_4_5466F502779F9370_OFFSET))(a1, a2);
		}
	};
}
