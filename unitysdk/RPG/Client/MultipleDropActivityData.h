#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"

namespace RPG::GameCore { class ActivityFarmMultipleDropRow; }

#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_GET_MULTIPLEDROPID_OFFSET UNITYSDK_OFFSET(0x19092080)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_GET_MULTIPLEDROPTYPES_OFFSET UNITYSDK_OFFSET(0x190920A0)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19092820)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x190922A0)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x19092300)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x19092100)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_SET_MULTIPLEDROPID_OFFSET UNITYSDK_OFFSET(0x19092090)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x190928E0)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_UPDATEREDDOTSTATUS_OFFSET UNITYSDK_OFFSET(0x19092630)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19091EA0)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA__ISMULTIPLEDROPVAILD_OFFSET UNITYSDK_OFFSET(0x190921F0)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0x19091EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropActivityData_TypeDefinitionIndex = 58898;

	class MultipleDropActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::GameCore::ActivityFarmMultipleDropRow* MultipleDropRow; // 0xA0
		::System::UInt32 _MultipleDropID_k__BackingField; // 0xA8

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA__ONINIT_OFFSET))(this);
		}

		::System::UInt32 get_MultipleDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_GET_MULTIPLEDROPID_OFFSET))(this);
		}

		::System::Void set_MultipleDropID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_SET_MULTIPLEDROPID_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::MultipleDropTypeConfig>* get_MultipleDropTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::MultipleDropTypeConfig>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_GET_MULTIPLEDROPTYPES_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsMultipleDropVaild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA__ISMULTIPLEDROPVAILD_OFFSET))(this);
		}

		::System::Void UpdateRedDotStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_UPDATEREDDOTSTATUS_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}
	};
}
