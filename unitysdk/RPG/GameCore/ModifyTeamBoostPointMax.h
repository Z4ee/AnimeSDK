#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX_METHOD_3_757363779A7C055D_OFFSET UNITYSDK_OFFSET(0x1995A390)
#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX_METHOD_3_D7A5208707A12C7C_OFFSET UNITYSDK_OFFSET(0x1995A300)
#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX__CTOR_OFFSET UNITYSDK_OFFSET(0x1995A360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyTeamBoostPointMax_TypeDefinitionIndex = 21372;

	class ModifyTeamBoostPointMax : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7A5208707A12C7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyTeamBoostPointMax*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyTeamBoostPointMax*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX_METHOD_3_D7A5208707A12C7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_757363779A7C055D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyTeamBoostPointMax* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyTeamBoostPointMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINTMAX_METHOD_3_757363779A7C055D_OFFSET))(a1, a2);
		}
	};
}
