#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_6F641939F6AA0A6C_OFFSET UNITYSDK_OFFSET(0x1D0BA9B0)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_74B34E2E4D56C881_OFFSET UNITYSDK_OFFSET(0x1D0BAA30)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_980D4E2A7E2A769C_OFFSET UNITYSDK_OFFSET(0x1D0BAA90)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_BE90BEE6EB872FE9_OFFSET UNITYSDK_OFFSET(0x1D0BAAB0)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BAA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLevelEntity_TypeDefinitionIndex = 23070;

	class TargetFetchLevelEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6F641939F6AA0A6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLevelEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLevelEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_6F641939F6AA0A6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_74B34E2E4D56C881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_74B34E2E4D56C881_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_980D4E2A7E2A769C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_980D4E2A7E2A769C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BE90BEE6EB872FE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_BE90BEE6EB872FE9_OFFSET))(a1, a2);
		}
	};
}
