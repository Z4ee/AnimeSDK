#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ServerListInfo; }
namespace MoleMole { class UILoginPageController; }
namespace System { class Action; }

#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17142650)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS26_0__SETBESTSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x17142660)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginPageController___c__DisplayClass26_0_TypeDefinitionIndex = 50113;

	class UILoginPageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UILoginPageController* __4__this; // 0x10
		::System::Action* success; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetBestServer_b__0(::MoleMole::ServerListInfo* server)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ServerListInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS26_0__SETBESTSERVER_B__0_OFFSET))(this, server);
		}
	};
}
