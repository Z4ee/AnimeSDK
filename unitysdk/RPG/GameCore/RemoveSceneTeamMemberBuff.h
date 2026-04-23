#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF_METHOD_3_1C08E2BCB1433939_OFFSET UNITYSDK_OFFSET(0x18CA56A0)
#define RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF_METHOD_3_42E05C6FB2BB9B49_OFFSET UNITYSDK_OFFSET(0x18CA5730)
#define RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA5700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveSceneTeamMemberBuff_TypeDefinitionIndex = 19374;

	class RemoveSceneTeamMemberBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C08E2BCB1433939(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveSceneTeamMemberBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveSceneTeamMemberBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF_METHOD_3_1C08E2BCB1433939_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42E05C6FB2BB9B49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveSceneTeamMemberBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveSceneTeamMemberBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF_METHOD_3_42E05C6FB2BB9B49_OFFSET))(a1, a2);
		}
	};
}
