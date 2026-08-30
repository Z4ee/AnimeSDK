#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ChooseDeliveryEntry; }
namespace RPG::Client::FateRin { class FateRinSupportModule; }

#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETENTRY_OFFSET UNITYSDK_OFFSET(0xD0308F0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETFATERINSUPPORTMODULE_OFFSET UNITYSDK_OFFSET(0xD030860)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_HASPENDINGREWARD_OFFSET UNITYSDK_OFFSET(0xD0093B0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xD030720)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xD030990)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0309E0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD030710)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xD030790)

namespace RPG::Client
{
	inline static constexpr unsigned int FateRinAvatarRewardActivityData_TypeDefinitionIndex = 61714;

	class FateRinAvatarRewardActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateRinAvatarRewardActivityData_TypeDefinitionIndex)->GetStaticField(0x22E0);
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
