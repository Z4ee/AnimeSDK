#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDADA930)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS34_0__REGISTERIDLESHOWENDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xDADA940)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass34_0_TypeDefinitionIndex = 69437;

	class PhotoGraphUtils___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Action* idleShowEnd; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterIdleShowEndCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS34_0__REGISTERIDLESHOWENDCALLBACK_B__0_OFFSET))(this);
		}
	};
}
