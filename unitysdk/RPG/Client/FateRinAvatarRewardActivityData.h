#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ChooseDeliveryEntry; }
namespace RPG::Client::FateRin { class FateRinSupportModule; }

#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETENTRY_OFFSET UNITYSDK_OFFSET(0x197181E0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETFATERINSUPPORTMODULE_OFFSET UNITYSDK_OFFSET(0x19718150)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_HASPENDINGREWARD_OFFSET UNITYSDK_OFFSET(0x19717FB0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19717F40)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x19718280)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x197182D0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19717F30)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x19718080)

namespace RPG::Client
{
	inline static constexpr unsigned int FateRinAvatarRewardActivityData_TypeDefinitionIndex = 58879;

	class FateRinAvatarRewardActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateRinAvatarRewardActivityData_TypeDefinitionIndex)->GetStaticField(0x4540);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__CCTOR_OFFSET))();
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Boolean HasPendingReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_HASPENDINGREWARD_OFFSET))(this);
		}

		::System::Boolean _IsFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__ISFEATURECLOSED_OFFSET))(this);
		}

		::RPG::Client::FateRin::FateRinSupportModule* GetFateRinSupportModule()
		{
			return ((::RPG::Client::FateRin::FateRinSupportModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETFATERINSUPPORTMODULE_OFFSET))(this);
		}

		::RPG::Client::ChooseDeliveryEntry* GetEntry()
		{
			return ((::RPG::Client::ChooseDeliveryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETENTRY_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
