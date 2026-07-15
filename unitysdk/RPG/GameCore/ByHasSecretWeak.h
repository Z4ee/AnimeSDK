#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_589660E036E34D29_OFFSET UNITYSDK_OFFSET(0x1A8C8B50)
#define RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_64CD731C08C46F24_OFFSET UNITYSDK_OFFSET(0x1A8C8CD0)
#define RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_9922C166346B0CF8_OFFSET UNITYSDK_OFFSET(0x1A8C8AB0)
#define RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_DDBC621D25164FB5_OFFSET UNITYSDK_OFFSET(0x1A8C8D30)
#define RPG_GAMECORE_BYHASSECRETWEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C8B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSecretWeak_TypeDefinitionIndex = 22201;

	class ByHasSecretWeak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9922C166346B0CF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSecretWeak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSecretWeak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_9922C166346B0CF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_589660E036E34D29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_589660E036E34D29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_64CD731C08C46F24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSecretWeak*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSecretWeak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_64CD731C08C46F24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DDBC621D25164FB5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_DDBC621D25164FB5_OFFSET))(a1, a2);
		}
	};
}
