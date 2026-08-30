#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StoryLineData; }

#define RPG_CLIENT_STORYLINEMODULE___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE105010)
#define RPG_CLIENT_STORYLINEMODULE___C__DISPLAYCLASS37_0___GETLINE_B__0_OFFSET UNITYSDK_OFFSET(0xE105470)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineModule___c__DisplayClass37_0_TypeDefinitionIndex = 67990;

	class StoryLineModule___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetLine_b__0(::RPG::Client::StoryLineData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::StoryLineData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___C__DISPLAYCLASS37_0___GETLINE_B__0_OFFSET))(this, a1);
		}
	};
}
