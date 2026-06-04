#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C50F5982E5600913;
class Class_1_F3CA30716D4FAF92_11;

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF7C940)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0__INITPLAYERS_B__1_OFFSET UNITYSDK_OFFSET(0xBF81570)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass70_0_TypeDefinitionIndex = 61646;

	class MatchThreeGame___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::Class_1_C50F5982E5600913* playerBasicData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitPlayers_b__1(::Class_1_F3CA30716D4FAF92_11* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS70_0__INITPLAYERS_B__1_OFFSET))(this, a1);
		}
	};
}
