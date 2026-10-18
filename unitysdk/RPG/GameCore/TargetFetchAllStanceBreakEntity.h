#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_126DD3871696484F_OFFSET UNITYSDK_OFFSET(0x1DB5F8B0)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_25A35A52B726BAAF_OFFSET UNITYSDK_OFFSET(0x1DB5F930)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_48F934AA51BF0FDE_OFFSET UNITYSDK_OFFSET(0x1DB5F830)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_53679C80B3430A62_OFFSET UNITYSDK_OFFSET(0x1DB5F910)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5F8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllStanceBreakEntity_TypeDefinitionIndex = 24000;

	class TargetFetchAllStanceBreakEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_48F934AA51BF0FDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_48F934AA51BF0FDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_126DD3871696484F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_126DD3871696484F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_53679C80B3430A62(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_53679C80B3430A62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25A35A52B726BAAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_25A35A52B726BAAF_OFFSET))(a1, a2);
		}
	};
}
