#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class UIManager; }

#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS107_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE3AC1D0)
#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS107_0___HANDLESHOWUI3D_B__0_OFFSET UNITYSDK_OFFSET(0xE3B60B0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager___c__DisplayClass107_0_TypeDefinitionIndex = 73080;

	class UIManager___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIManager* __4__this; // 0x10
		::RPG::Client::IUI3DController* ui3d; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS107_0__CTOR_OFFSET))(this);
		}

		::System::Void __HandleShowUI3D_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS107_0___HANDLESHOWUI3D_B__0_OFFSET))(this);
		}
	};
}
