#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_09AA9500D6671338_OFFSET UNITYSDK_OFFSET(0x1C30C450)
#define RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_136964C71B3D38CC_OFFSET UNITYSDK_OFFSET(0x1C30C610)
#define RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_3BFA518E1C1991A3_OFFSET UNITYSDK_OFFSET(0x1C30C640)
#define RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_8D17638056B7C399_OFFSET UNITYSDK_OFFSET(0x1C30C410)
#define RPG_GAMECORE_BYCOMPARECHALLENGELEFT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C30C440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareChallengeLeft_TypeDefinitionIndex = 23258;

	class ByCompareChallengeLeft : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::UInt32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGELEFT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8D17638056B7C399(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChallengeLeft*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChallengeLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_8D17638056B7C399_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_09AA9500D6671338(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChallengeLeft* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChallengeLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_09AA9500D6671338_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_136964C71B3D38CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeLeft*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_136964C71B3D38CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3BFA518E1C1991A3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGELEFT_METHOD_4_3BFA518E1C1991A3_OFFSET))(a1, a2);
		}
	};
}
