#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_10B38847DD6D6316_OFFSET UNITYSDK_OFFSET(0x19CF9F30)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_C2C80676118A98B6_OFFSET UNITYSDK_OFFSET(0x19D05F10)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_D6D5768343F25EB6_OFFSET UNITYSDK_OFFSET(0x19D0D350)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_FFF4A56BFE1D7A54_OFFSET UNITYSDK_OFFSET(0x19D0D290)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF9EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLatestEnterStageAvatar_TypeDefinitionIndex = 22654;

	class TargetFetchLatestEnterStageAvatar : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FFF4A56BFE1D7A54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_FFF4A56BFE1D7A54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10B38847DD6D6316(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_10B38847DD6D6316_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C2C80676118A98B6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_C2C80676118A98B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D6D5768343F25EB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_METHOD_4_D6D5768343F25EB6_OFFSET))(a1, a2);
		}
	};
}
