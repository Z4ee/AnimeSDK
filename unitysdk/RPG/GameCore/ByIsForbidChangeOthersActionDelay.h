#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_METHOD_4_4B3CFE0D815CE6DD_OFFSET UNITYSDK_OFFSET(0x1D4E79E0)
#define RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_METHOD_4_5DC822FB7A50472D_OFFSET UNITYSDK_OFFSET(0x1D4E7790)
#define RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_METHOD_4_C18CE457E76191B3_OFFSET UNITYSDK_OFFSET(0x1D4E7A10)
#define RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_METHOD_4_EB2A32EC82370818_OFFSET UNITYSDK_OFFSET(0x1D4E77D0)
#define RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E77C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsForbidChangeOthersActionDelay_TypeDefinitionIndex = 23279;

	class ByIsForbidChangeOthersActionDelay : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* ActionDelayTargetType; // 0x28
		::RPG::GameCore::ActionDelayChangeTypeMask ChangeType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5DC822FB7A50472D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_METHOD_4_5DC822FB7A50472D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EB2A32EC82370818(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_METHOD_4_EB2A32EC82370818_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B3CFE0D815CE6DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_METHOD_4_4B3CFE0D815CE6DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C18CE457E76191B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_METHOD_4_C18CE457E76191B3_OFFSET))(a1, a2);
		}
	};
}
