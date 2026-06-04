#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_4D99CCFDC84044D9_OFFSET UNITYSDK_OFFSET(0x19D05FD0)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_74B34E2E4D56C881_OFFSET UNITYSDK_OFFSET(0x19CFA0A0)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_A45AF61F26C38A5F_OFFSET UNITYSDK_OFFSET(0x19D0D360)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_BE90BEE6EB872FE9_OFFSET UNITYSDK_OFFSET(0x19D0D420)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFA050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLevelEntity_TypeDefinitionIndex = 22607;

	class TargetFetchLevelEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A45AF61F26C38A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLevelEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLevelEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_A45AF61F26C38A5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_74B34E2E4D56C881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_74B34E2E4D56C881_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4D99CCFDC84044D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_4D99CCFDC84044D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BE90BEE6EB872FE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_METHOD_4_BE90BEE6EB872FE9_OFFSET))(a1, a2);
		}
	};
}
