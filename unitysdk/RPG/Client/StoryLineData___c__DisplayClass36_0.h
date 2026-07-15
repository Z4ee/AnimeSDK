#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1AF243935D06EF67;

#define RPG_CLIENT_STORYLINEDATA___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17B79380)
#define RPG_CLIENT_STORYLINEDATA___C__DISPLAYCLASS36_0__GETSTORYLINEFLOOR_B__0_OFFSET UNITYSDK_OFFSET(0x17B798E0)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineData___c__DisplayClass36_0_TypeDefinitionIndex = 64977;

	class StoryLineData___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::UInt32 floorID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetStoryLineFloor_b__0(::Class_1_1AF243935D06EF67* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1AF243935D06EF67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__DISPLAYCLASS36_0__GETSTORYLINEFLOOR_B__0_OFFSET))(this, a1);
		}
	};
}
