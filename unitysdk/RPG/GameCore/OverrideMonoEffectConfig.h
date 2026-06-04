#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG_METHOD_2_2ED1BC3644331C03_OFFSET UNITYSDK_OFFSET(0x199DE9D0)
#define RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG_METHOD_2_CD86C284D8078C20_OFFSET UNITYSDK_OFFSET(0x199DE830)
#define RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199DE9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideMonoEffectConfig_TypeDefinitionIndex = 19131;

	class OverrideMonoEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BoolEx FollowVisibleWithCaster; // 0x10
		::RPG::GameCore::BoolEx DontDisableIfAttachedIsDisable; // 0x14
		::RPG::GameCore::BoolEx OnlyFollowFirstFrame; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CD86C284D8078C20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideMonoEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideMonoEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG_METHOD_2_CD86C284D8078C20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_2ED1BC3644331C03(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::OverrideMonoEffectConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::OverrideMonoEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG_METHOD_2_2ED1BC3644331C03_OFFSET))(a1, a2);
		}
	};
}
