#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_25;

#define RPG_GAMECORE_LEVELUICOMPONENT___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE6A44D0)
#define RPG_GAMECORE_LEVELUICOMPONENT___C__DISPLAYCLASS8_0__GETACTIVITYBUFFLAYERCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xE6A44E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUIComponent___c__DisplayClass8_0_TypeDefinitionIndex = 57456;

	class LevelUIComponent___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Int32 buffID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUICOMPONENT___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActivityBuffLayerCount_b__0(::Class_1_7807B2B04302CD7B_25* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7807B2B04302CD7B_25*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUICOMPONENT___C__DISPLAYCLASS8_0__GETACTIVITYBUFFLAYERCOUNT_B__0_OFFSET))(this, a1);
		}
	};
}
