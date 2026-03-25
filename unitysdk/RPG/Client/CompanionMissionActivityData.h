#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class MainMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0x940F3D0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x940F310)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x940F240)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x940F220)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ISEXTRACONDSATISFY_B__2_0_OFFSET UNITYSDK_OFFSET(0x940F9B0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ONCOMPANIONACTIVITYBANNERUPDATE_OFFSET UNITYSDK_OFFSET(0x940F5C0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__UPDATEMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x940F620)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0x940FA40)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x940F9D0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA___UPDATEMAINMISSIONDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0x940F9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CompanionMissionActivityData_TypeDefinitionIndex = 49980;

	class CompanionMissionActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* _MainMissionDataList; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _MainMissionIDList; // 0xA8
		::System::Boolean _Asked; // 0xB0

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCompanionActivityBannerUpdate(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ONCOMPANIONACTIVITYBANNERUPDATE_OFFSET))(this, arg);
		}

		::System::Void _UpdateMainMissionData(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__UPDATEMAINMISSIONDATA_OFFSET))(this, arg);
		}

		::System::Void _IsExtraCondSatisfy_b__2_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* mainMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ISEXTRACONDSATISFY_B__2_0_OFFSET))(this, mainMissionData);
		}

		::System::Void __UpdateMainMissionData_b__5_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* mainMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA___UPDATEMAINMISSIONDATA_B__5_0_OFFSET))(this, mainMissionData);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET))(this);
		}
	};
}
