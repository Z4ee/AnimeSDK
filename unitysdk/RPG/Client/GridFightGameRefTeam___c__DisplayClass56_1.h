#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_45;
class Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B;

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_1__CTOR_OFFSET UNITYSDK_OFFSET(0x983B560)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_1___SYNCTEAM_B__2_OFFSET UNITYSDK_OFFSET(0x983B570)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass56_1_TypeDefinitionIndex = 52619;

	class GridFightGameRefTeam___c__DisplayClass56_1 : public ::System::Object
	{
	public:
		::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__2(::Class_1_7AB88D713F5121B3_45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7AB88D713F5121B3_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_1___SYNCTEAM_B__2_OFFSET))(this, x);
		}
	};
}
