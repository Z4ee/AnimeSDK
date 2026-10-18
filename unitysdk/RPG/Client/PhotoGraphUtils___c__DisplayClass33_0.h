#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDB19C20)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS33_0__REGISTERIDLESHOWENDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xDB19C30)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass33_0_TypeDefinitionIndex = 69473;

	class PhotoGraphUtils___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Action* idleShowEnd; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterIdleShowEndCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS33_0__REGISTERIDLESHOWENDCALLBACK_B__0_OFFSET))(this);
		}
	};
}
