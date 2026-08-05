#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalgameArgueNPCEnterAction; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS29_0__CREATEARGUEENTERAVATARNAMEPLAYABLE_B__0_OFFSET UNITYSDK_OFFSET(0x18AD3210)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS29_0__CREATEARGUEENTERAVATARNAMEPLAYABLE_B__1_OFFSET UNITYSDK_OFFSET(0x18AD3320)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD3200)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass29_0_TypeDefinitionIndex = 62810;

	class UIGalgamePageController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalgameArgueNPCEnterAction* rightEnterAction; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::MoleMole::GalGame::GalgameArgueNPCEnterAction* leftEnterAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateArgueEnterAvatarNamePlayable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS29_0__CREATEARGUEENTERAVATARNAMEPLAYABLE_B__0_OFFSET))(this);
		}

		::System::Void _CreateArgueEnterAvatarNamePlayable_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS29_0__CREATEARGUEENTERAVATARNAMEPLAYABLE_B__1_OFFSET))(this);
		}
	};
}
