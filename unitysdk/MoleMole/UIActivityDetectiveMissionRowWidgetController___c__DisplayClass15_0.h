#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIACTIVITYDETECTIVEMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A34E90)
#define MOLEMOLE_UIACTIVITYDETECTIVEMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__TRACKQUESTTHENTELEPORT_B__0_OFFSET UNITYSDK_OFFSET(0x18A34EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveMissionRowWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 50940;

	class UIActivityDetectiveMissionRowWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Int32 teleportId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrackQuestThenTeleport_b__0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__TRACKQUESTTHENTELEPORT_B__0_OFFSET))(this, success);
		}
	};
}
