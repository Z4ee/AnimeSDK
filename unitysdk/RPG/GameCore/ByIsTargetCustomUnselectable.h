#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_14AEFC38C84628CC_OFFSET UNITYSDK_OFFSET(0x1B2A7880)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_16F6078E8A66EB2B_OFFSET UNITYSDK_OFFSET(0x1B2A7680)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_9517F47C59AA5A5A_OFFSET UNITYSDK_OFFSET(0x1B2A78B0)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_E4A60E91BAABD74A_OFFSET UNITYSDK_OFFSET(0x1B2A76C0)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A76B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetCustomUnselectable_TypeDefinitionIndex = 22684;

	class ByIsTargetCustomUnselectable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_16F6078E8A66EB2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_16F6078E8A66EB2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E4A60E91BAABD74A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_E4A60E91BAABD74A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_14AEFC38C84628CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_14AEFC38C84628CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9517F47C59AA5A5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_9517F47C59AA5A5A_OFFSET))(a1, a2);
		}
	};
}
