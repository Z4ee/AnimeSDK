#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftIntegrationBarControl; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD646970)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS19_0___ENQUEUEREFRESHVALUE_B__0_OFFSET UNITYSDK_OFFSET(0xD647930)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS19_0___ENQUEUEREFRESHVALUE_G__NEEDSSWITCHONEVENT_1_OFFSET UNITYSDK_OFFSET(0xD646A30)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftIntegrationBarControl___c__DisplayClass19_0_TypeDefinitionIndex = 79818;

	class MechCraftIntegrationBarControl___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftIntegrationBarControl* __4__this; // 0x10
		::System::Nullable_1<::System::Int32> previousPercent; // 0x18
		::System::Int32 currentPercent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void __EnqueueRefreshValue_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS19_0___ENQUEUEREFRESHVALUE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __EnqueueRefreshValue_g__NeedsSwitchOnEvent_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS19_0___ENQUEUEREFRESHVALUE_G__NEEDSSWITCHONEVENT_1_OFFSET))(this, a1, a2);
		}
	};
}
