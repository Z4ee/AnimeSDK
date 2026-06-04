#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_5;
class Class_1_C50F5982E5600913;

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBF78340)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1__INITPLAYERS_B__2_OFFSET UNITYSDK_OFFSET(0xBF81220)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass4_1_TypeDefinitionIndex = 61642;

	class MatchThreeGame___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::Class_1_C50F5982E5600913* playerBasicData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitPlayers_b__2(::Class_1_3AD2528CD53B1639_5* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_3AD2528CD53B1639_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1__INITPLAYERS_B__2_OFFSET))(this, a1);
		}
	};
}
