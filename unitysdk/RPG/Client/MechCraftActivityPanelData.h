#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

class Class_1_0843CDBC7AE0577D;

#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_GETACTIVITYID_OFFSET UNITYSDK_OFFSET(0xD67FC90)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_GETACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xD67FC30)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0xD67FB30)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xD67FBC0)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xD67F960)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD67FCF0)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD67F740)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__HASRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xD67FA00)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__HASTIMELIMITREWARD_OFFSET UNITYSDK_OFFSET(0xD67FA60)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xD67F8B0)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0xD67F750)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONREDDOTMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0xD67F910)

namespace RPG::Client
{
	inline static constexpr unsigned int MechCraftActivityPanelData_TypeDefinitionIndex = 61640;

	class MechCraftActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MechCraftActivityPanelData_TypeDefinitionIndex)->GetStaticField(0x12220);
		}
		static ::System::UInt32* StaticGet_ActivityRewardID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MechCraftActivityPanelData_TypeDefinitionIndex)->GetStaticField(0x12224);
		}
		::Class_1_0843CDBC7AE0577D* _ResidentRewardClaimableRedDot; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__CCTOR_OFFSET))();
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONINIT_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnRedDotMaybeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONREDDOTMAYBECHANGED_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		static ::System::UInt32 GetActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_GETACTIVITYREWARDID_OFFSET))();
		}

		static ::System::UInt32 GetActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_GETACTIVITYID_OFFSET))();
		}

		::System::Boolean _HasTimeLimitReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__HASTIMELIMITREWARD_OFFSET))(this);
		}

		::System::Boolean _HasResidentReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__HASRESIDENTREWARD_OFFSET))(this);
		}
	};
}
