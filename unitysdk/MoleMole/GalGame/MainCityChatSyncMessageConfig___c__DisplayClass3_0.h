#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_1_794BA983EDDBCFDE_Class_1_A407DFD427B7C3A6;
namespace System { class Action; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1428A4B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG___C__DISPLAYCLASS3_0__STARTSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1428A4C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncMessageConfig___c__DisplayClass3_0_TypeDefinitionIndex = 74280;

	class MainCityChatSyncMessageConfig___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::Class_1_794BA983EDDBCFDE_Class_1_A407DFD427B7C3A6* messageGroup; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartSync_b__0(::Class_0_16E4307DCC419505_4* rspMsg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG___C__DISPLAYCLASS3_0__STARTSYNC_B__0_OFFSET))(this, rspMsg);
		}
	};
}
