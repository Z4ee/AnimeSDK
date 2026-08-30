#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_38221E01C628D9CC_OFFSET UNITYSDK_OFFSET(0x1C30BE50)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_55ED2202904DD76C_OFFSET UNITYSDK_OFFSET(0x1C30BFD0)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_D878489FB99FEF49_OFFSET UNITYSDK_OFFSET(0x1C30BE10)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_EE43F4AC450312C3_OFFSET UNITYSDK_OFFSET(0x1C30C000)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C30BE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareChallengeGroupType_TypeDefinitionIndex = 23178;

	class ByCompareChallengeGroupType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ChallengeGroupType CurrentStageType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D878489FB99FEF49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChallengeGroupType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChallengeGroupType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_D878489FB99FEF49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38221E01C628D9CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_38221E01C628D9CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_55ED2202904DD76C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_55ED2202904DD76C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EE43F4AC450312C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_EE43F4AC450312C3_OFFSET))(a1, a2);
		}
	};
}
