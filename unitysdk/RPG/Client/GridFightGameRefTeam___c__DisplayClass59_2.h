#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B;
class Class_1_C0277CE3A38B20B6;

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D7CD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_2___SYNCTEAM_B__4_OFFSET UNITYSDK_OFFSET(0xA4D9270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass59_2_TypeDefinitionIndex = 59660;

	class GridFightGameRefTeam___c__DisplayClass59_2 : public ::System::Object
	{
	public:
		::Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B* finalRole; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_2__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__4(::Class_1_C0277CE3A38B20B6* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_C0277CE3A38B20B6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_2___SYNCTEAM_B__4_OFFSET))(this, x);
		}
	};
}
