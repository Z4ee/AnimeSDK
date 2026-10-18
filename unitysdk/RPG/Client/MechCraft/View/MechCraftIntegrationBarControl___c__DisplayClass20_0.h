#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftIntegrationBarControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD647410)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS20_0___REFRESHVALUE_B__0_OFFSET UNITYSDK_OFFSET(0xD6479A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS20_0___REFRESHVALUE_G__SETSLIDERVALUE_3_OFFSET UNITYSDK_OFFSET(0xD647BB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS20_0___REFRESHVALUE_G__SETTEXTVALUE_2_OFFSET UNITYSDK_OFFSET(0xD647A70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS20_0___REFRESHVALUE_G__SETVALUE_1_OFFSET UNITYSDK_OFFSET(0xD6474D0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftIntegrationBarControl___c__DisplayClass20_0_TypeDefinitionIndex = 79819;

	class MechCraftIntegrationBarControl___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftIntegrationBarControl* __4__this; // 0x10
		::System::Int32 baseMax; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshValue_b__0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS20_0___REFRESHVALUE_B__0_OFFSET))(this, a1);
		}

		::System::Void __RefreshValue_g__SetValue_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS20_0___REFRESHVALUE_G__SETVALUE_1_OFFSET))(this, a1);
		}

		::System::Void __RefreshValue_g__SetTextValue_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS20_0___REFRESHVALUE_G__SETTEXTVALUE_2_OFFSET))(this, a1);
		}

		::System::Void __RefreshValue_g__SetSliderValue_3(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL___C__DISPLAYCLASS20_0___REFRESHVALUE_G__SETSLIDERVALUE_3_OFFSET))(this, a1);
		}
	};
}
