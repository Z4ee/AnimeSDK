#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class UIManager; }

#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS102_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE374150)
#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS102_0___HANDLESHOWUI3D_B__0_OFFSET UNITYSDK_OFFSET(0xE37F120)

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager___c__DisplayClass102_0_TypeDefinitionIndex = 72987;

	class UIManager___c__DisplayClass102_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIManager* __4__this; // 0x10
		::RPG::Client::IUI3DController* ui3d; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS102_0__CTOR_OFFSET))(this);
		}

		::System::Void __HandleShowUI3D_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS102_0___HANDLESHOWUI3D_B__0_OFFSET))(this);
		}
	};
}
