#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECOOPBOSSPVPMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC53D420)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECOOPBOSSPVPMANAGER___C__DISPLAYCLASS43_0__GOTOACTIVITYMULTIPLAYERPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xC53D430)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLECOOPBOSSPVPMANAGER___C__DISPLAYCLASS43_0__GOTOACTIVITYMULTIPLAYERPAGE_B__2_OFFSET UNITYSDK_OFFSET(0xC53D810)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleCoopBossPVPManager___c__DisplayClass43_0_TypeDefinitionIndex = 75999;

	class MarbleCoopBossPVPManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::String* prefabPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECOOPBOSSPVPMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerPage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECOOPBOSSPVPMANAGER___C__DISPLAYCLASS43_0__GOTOACTIVITYMULTIPLAYERPAGE_B__1_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerPage_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLECOOPBOSSPVPMANAGER___C__DISPLAYCLASS43_0__GOTOACTIVITYMULTIPLAYERPAGE_B__2_OFFSET))(this);
		}
	};
}
