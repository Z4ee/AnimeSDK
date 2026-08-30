#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SpecialBpFeature; }

#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINT_METHOD_3_22B45910F237C5BD_OFFSET UNITYSDK_OFFSET(0x1D2B8FB0)
#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINT_METHOD_3_9E5ECD66D1303827_OFFSET UNITYSDK_OFFSET(0x1D2B8F60)
#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B8FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyTeamBoostPoint_TypeDefinitionIndex = 22353;

	class ModifyTeamBoostPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::SpecialBpFeature* OverrideBpFeature; // 0x28
		::System::Boolean IsSilence; // 0x30
		::System::Boolean AllowDarkTeamModifyToNegative; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E5ECD66D1303827(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyTeamBoostPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyTeamBoostPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINT_METHOD_3_9E5ECD66D1303827_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_22B45910F237C5BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyTeamBoostPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyTeamBoostPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINT_METHOD_3_22B45910F237C5BD_OFFSET))(a1, a2);
		}
	};
}
