#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C50F5982E5600913;
class Class_1_F3CA30716D4FAF92_10;

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB60680)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0__INITPLAYERS_B__1_OFFSET UNITYSDK_OFFSET(0x1AB65CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass70_0_TypeDefinitionIndex = 63008;

	class MatchThreeGame___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::Class_1_C50F5982E5600913* playerBasicData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitPlayers_b__1(::Class_1_F3CA30716D4FAF92_10* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0__INITPLAYERS_B__1_OFFSET))(this, a1);
		}
	};
}
