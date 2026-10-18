#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ChooseDeliveryEntry; }
namespace RPG::Client::FateRin { class FateRinSupportModule; }

#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETENTRY_OFFSET UNITYSDK_OFFSET(0xCFCFF30)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETFATERINSUPPORTMODULE_OFFSET UNITYSDK_OFFSET(0xCFCFEA0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_HASPENDINGREWARD_OFFSET UNITYSDK_OFFSET(0xCFCFD00)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xCFCFC90)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xCFCFFD0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFD0020)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCFC80)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xCFCFDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateRinAvatarRewardActivityData_TypeDefinitionIndex = 61621;

	class FateRinAvatarRewardActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateRinAvatarRewardActivityData_TypeDefinitionIndex)->GetStaticField(0x134E0);
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
