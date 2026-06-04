#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_09AA9500D6671338_OFFSET UNITYSDK_OFFSET(0x195073B0)
#define RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_1296E9EEAAEB2D24_OFFSET UNITYSDK_OFFSET(0x195072E0)
#define RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_71FEBAA2AFBE106C_OFFSET UNITYSDK_OFFSET(0x195075F0)
#define RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_C10B9A98BE3CA651_OFFSET UNITYSDK_OFFSET(0x19507570)
#define RPG_GAMECORE_BYCOMPARECHALLENGELEFT__CTOR_OFFSET UNITYSDK_OFFSET(0x19507360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareChallengeLeft_TypeDefinitionIndex = 22241;

	class ByCompareChallengeLeft : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::UInt32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGELEFT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1296E9EEAAEB2D24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChallengeLeft*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChallengeLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_1296E9EEAAEB2D24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_09AA9500D6671338(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChallengeLeft* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChallengeLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_09AA9500D6671338_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C10B9A98BE3CA651(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeLeft*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_C10B9A98BE3CA651_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_71FEBAA2AFBE106C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_71FEBAA2AFBE106C_OFFSET))(a1, a2);
		}
	};
}
