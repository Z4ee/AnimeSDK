#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_METHOD_3_222AC029EF8EFAB4_OFFSET UNITYSDK_OFFSET(0x18643310)
#define RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_METHOD_3_35EF47154B378E74_OFFSET UNITYSDK_OFFSET(0x186433A0)
#define RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x18643370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddSceneTeamMemberBuff_TypeDefinitionIndex = 19373;

	class AddSceneTeamMemberBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_222AC029EF8EFAB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddSceneTeamMemberBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddSceneTeamMemberBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_METHOD_3_222AC029EF8EFAB4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35EF47154B378E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddSceneTeamMemberBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddSceneTeamMemberBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_METHOD_3_35EF47154B378E74_OFFSET))(a1, a2);
		}
	};
}
