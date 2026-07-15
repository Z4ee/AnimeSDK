#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class MainMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0x18010A70)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x180109B0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x180108A0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18010880)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ISEXTRACONDSATISFY_B__2_0_OFFSET UNITYSDK_OFFSET(0x180110F0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ONCOMPANIONACTIVITYBANNERUPDATE_OFFSET UNITYSDK_OFFSET(0x18010CA0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__UPDATEMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x18010D00)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA___UPDATEMAINMISSIONDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0x18011100)

namespace RPG::Client
{
	inline static constexpr unsigned int CompanionMissionActivityData_TypeDefinitionIndex = 58868;

	class CompanionMissionActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _MainMissionIDList; // 0xA0
		::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* _MainMissionDataList; // 0xA8
		::System::Boolean _Asked; // 0xB0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__CTOR_OFFSET))(this, a1);
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

		::System::Void _OnCompanionActivityBannerUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ONCOMPANIONACTIVITYBANNERUPDATE_OFFSET))(this, a1);
		}

		::System::Void _UpdateMainMissionData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__UPDATEMAINMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _IsExtraCondSatisfy_b__2_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA__ISEXTRACONDSATISFY_B__2_0_OFFSET))(this, a1);
		}

		::System::Void __UpdateMainMissionData_b__5_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYDATA___UPDATEMAINMISSIONDATA_B__5_0_OFFSET))(this, a1);
		}
	};
}
