#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass78_0; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS78_2__CTOR_OFFSET UNITYSDK_OFFSET(0x149D8080)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS78_2__PLAYSUBNARRATORNODE_B__7_OFFSET UNITYSDK_OFFSET(0x149D8090)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS78_2__PLAYSUBNARRATORNODE_B__8_OFFSET UNITYSDK_OFFSET(0x149D8170)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass78_2_TypeDefinitionIndex = 41829;

	class UIGalgamePageController___c__DisplayClass78_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass78_0* CS___8__locals2; // 0x10
		::System::Int64 stopTimeStampMs; // 0x18
		::System::Int32 voiceLengthMs; // 0x20
		::System::Int64 startTimeStampMs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS78_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS78_2__PLAYSUBNARRATORNODE_B__7_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS78_2__PLAYSUBNARRATORNODE_B__8_OFFSET))(this);
		}
	};
}
