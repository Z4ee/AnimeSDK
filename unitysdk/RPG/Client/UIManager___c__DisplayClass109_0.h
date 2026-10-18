#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIManager; }

#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS109_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE3AC2E0)
#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS109_0___HANDLEEXITUI3D_B__0_OFFSET UNITYSDK_OFFSET(0xE3B61A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager___c__DisplayClass109_0_TypeDefinitionIndex = 73081;

	class UIManager___c__DisplayClass109_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIManager* __4__this; // 0x10
		::RPG::Client::UIController* ui2d; // 0x18
		::RPG::Client::IUI3DController* to3d; // 0x20
		::RPG::Client::IUI3DController* ui3d; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS109_0__CTOR_OFFSET))(this);
		}

		::System::Void __HandleExitUI3D_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS109_0___HANDLEEXITUI3D_B__0_OFFSET))(this);
		}
	};
}
