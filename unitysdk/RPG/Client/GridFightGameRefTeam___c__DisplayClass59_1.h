#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B;
class Class_1_C0277CE3A38B20B6;

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D9220)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1___SYNCTEAM_B__2_OFFSET UNITYSDK_OFFSET(0xA4D9230)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass59_1_TypeDefinitionIndex = 59659;

	class GridFightGameRefTeam___c__DisplayClass59_1 : public ::System::Object
	{
	public:
		::Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__2(::Class_1_C0277CE3A38B20B6* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_C0277CE3A38B20B6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1___SYNCTEAM_B__2_OFFSET))(this, x);
		}
	};
}
