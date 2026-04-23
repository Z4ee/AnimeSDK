#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_728;
class Class_2_181F61C600ECA68B;

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A4950)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_2___SYNCTEAM_B__4_OFFSET UNITYSDK_OFFSET(0xA4A6830)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass70_2_TypeDefinitionIndex = 59526;

	class GridFightFormationTeam___c__DisplayClass70_2 : public ::System::Object
	{
	public:
		::Class_2_181F61C600ECA68B* finalRole; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_2__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__4(::Class_0_16E4307DCC419505_728* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_728*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_2___SYNCTEAM_B__4_OFFSET))(this, x);
		}
	};
}
