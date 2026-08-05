#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0CB10)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__REFRESHPLAYERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x17A0CB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoFrameChildWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 59525;

	class UIPhotoFrameChildWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::UInt32 mainUid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshPlayerInfo_b__0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS26_0__REFRESHPLAYERINFO_B__0_OFFSET))(this, x);
		}
	};
}
