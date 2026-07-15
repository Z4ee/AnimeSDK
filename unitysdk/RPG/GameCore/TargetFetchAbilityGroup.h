#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_14E21DA96CA92B8E_OFFSET UNITYSDK_OFFSET(0x1B44E190)
#define RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_53302C24C51CF703_OFFSET UNITYSDK_OFFSET(0x1B44E130)
#define RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_74B4AB4DAA70BDFB_OFFSET UNITYSDK_OFFSET(0x1B44E1B0)
#define RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_FD9BA63484D51A82_OFFSET UNITYSDK_OFFSET(0x1B44E0B0)
#define RPG_GAMECORE_TARGETFETCHABILITYGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44E120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAbilityGroup_TypeDefinitionIndex = 23056;

	class TargetFetchAbilityGroup : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FD9BA63484D51A82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_FD9BA63484D51A82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_53302C24C51CF703(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_53302C24C51CF703_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_14E21DA96CA92B8E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityGroup*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_14E21DA96CA92B8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_74B4AB4DAA70BDFB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_74B4AB4DAA70BDFB_OFFSET))(a1, a2);
		}
	};
}
