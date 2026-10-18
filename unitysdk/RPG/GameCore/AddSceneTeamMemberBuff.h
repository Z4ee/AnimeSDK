#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_METHOD_3_35EF47154B378E74_OFFSET UNITYSDK_OFFSET(0x1D38B900)
#define RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_METHOD_3_549BAA79B6F7DEF8_OFFSET UNITYSDK_OFFSET(0x1D38B8B0)
#define RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D38B8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddSceneTeamMemberBuff_TypeDefinitionIndex = 20421;

	class AddSceneTeamMemberBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_549BAA79B6F7DEF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddSceneTeamMemberBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddSceneTeamMemberBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_METHOD_3_549BAA79B6F7DEF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35EF47154B378E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddSceneTeamMemberBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddSceneTeamMemberBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_METHOD_3_35EF47154B378E74_OFFSET))(a1, a2);
		}
	};
}
