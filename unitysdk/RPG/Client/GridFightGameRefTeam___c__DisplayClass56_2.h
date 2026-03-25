#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_45;
class Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B;

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_2__CTOR_OFFSET UNITYSDK_OFFSET(0x983A6C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_2___SYNCTEAM_B__4_OFFSET UNITYSDK_OFFSET(0x983B5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass56_2_TypeDefinitionIndex = 52620;

	class GridFightGameRefTeam___c__DisplayClass56_2 : public ::System::Object
	{
	public:
		::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B* finalRole; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_2__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__4(::Class_1_7AB88D713F5121B3_45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7AB88D713F5121B3_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_2___SYNCTEAM_B__4_OFFSET))(this, x);
		}
	};
}
