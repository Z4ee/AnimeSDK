#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIManager; }
namespace System { class Action; }

#define RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D34F0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS24_0___HANDLESTAGESETTLE_B__0_OFFSET UNITYSDK_OFFSET(0x1A0D5710)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS24_0___HANDLESTAGESETTLE_B__1_OFFSET UNITYSDK_OFFSET(0x1A0D58A0)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS24_0___HANDLESTAGESETTLE_B__2_OFFSET UNITYSDK_OFFSET(0x1A0D5890)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirModule___c__DisplayClass24_0_TypeDefinitionIndex = 75336;

	class PixAirModule___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::RPG::Client::UIManager* uiManager; // 0x18
		::System::Boolean streamingFinished; // 0x20
		::System::Single transferStartTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void __HandleStageSettle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS24_0___HANDLESTAGESETTLE_B__0_OFFSET))(this);
		}

		::System::Void __HandleStageSettle_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS24_0___HANDLESTAGESETTLE_B__2_OFFSET))(this);
		}

		::System::Boolean __HandleStageSettle_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS24_0___HANDLESTAGESETTLE_B__1_OFFSET))(this);
		}
	};
}
