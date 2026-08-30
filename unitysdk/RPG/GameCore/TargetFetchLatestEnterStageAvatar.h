#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_10B38847DD6D6316_OFFSET UNITYSDK_OFFSET(0x1E16F710)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_C22345014B0CFA87_OFFSET UNITYSDK_OFFSET(0x1E16F690)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_D6D5768343F25EB6_OFFSET UNITYSDK_OFFSET(0x1E16F790)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_EE3274AAE7868DA3_OFFSET UNITYSDK_OFFSET(0x1E16F770)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16F700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLatestEnterStageAvatar_TypeDefinitionIndex = 23697;

	class TargetFetchLatestEnterStageAvatar : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C22345014B0CFA87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_C22345014B0CFA87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10B38847DD6D6316(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_10B38847DD6D6316_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EE3274AAE7868DA3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_EE3274AAE7868DA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D6D5768343F25EB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_D6D5768343F25EB6_OFFSET))(a1, a2);
		}
	};
}
