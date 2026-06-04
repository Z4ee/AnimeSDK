#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_126DD3871696484F_OFFSET UNITYSDK_OFFSET(0x19CF6F60)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_25A35A52B726BAAF_OFFSET UNITYSDK_OFFSET(0x19D0AF00)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_502877E39A8961DF_OFFSET UNITYSDK_OFFSET(0x19D042F0)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_BCC72C93EE6CA331_OFFSET UNITYSDK_OFFSET(0x19D0AE40)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF6F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllStanceBreakEntity_TypeDefinitionIndex = 22683;

	class TargetFetchAllStanceBreakEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BCC72C93EE6CA331(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_BCC72C93EE6CA331_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_126DD3871696484F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_126DD3871696484F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_502877E39A8961DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_502877E39A8961DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25A35A52B726BAAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_25A35A52B726BAAF_OFFSET))(a1, a2);
		}
	};
}
