#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_728;
class Class_2_181F61C600ECA68B;

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A6730)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_1___SYNCTEAM_B__2_OFFSET UNITYSDK_OFFSET(0xA4A6740)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass70_1_TypeDefinitionIndex = 59525;

	class GridFightFormationTeam___c__DisplayClass70_1 : public ::System::Object
	{
	public:
		::Class_2_181F61C600ECA68B* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__2(::Class_0_16E4307DCC419505_728* rule)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_728*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_1___SYNCTEAM_B__2_OFFSET))(this, rule);
		}
	};
}
