#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissionModule_ClientFinishMissionType.h"
#include "unitysdk/RPG/Client/MissionModule_ConsumeItem.h"
#include "unitysdk/RPG/Client/MissionModule_FinishPerformance.h"
#include "unitysdk/RPG/Client/MissionModule_PlayMessage.h"
#include "unitysdk/RPG/Client/MissionModule_ResultValue.h"
#include "unitysdk/RPG/Client/MissionModule_SelectItem.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class SetLoadingStratageType; }

#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_CONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xD709CF0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_FINISHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD709CA0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_PLAYMESSAGE_OFFSET UNITYSDK_OFFSET(0xD709D10)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_RESULTVALUE_OFFSET UNITYSDK_OFFSET(0xD709D60)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_SELECTITEM_OFFSET UNITYSDK_OFFSET(0xD709CD0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETCONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xD6DBE80)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETFINISHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD6DB8F0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETMESSAGE_OFFSET UNITYSDK_OFFSET(0xD6DBC50)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETRESULTVALUE_OFFSET UNITYSDK_OFFSET(0xD6DBAC0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETSELECTCONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xD6DC050)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_CONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xD709D00)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_FINISHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD709CC0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_RESULTVALUE_OFFSET UNITYSDK_OFFSET(0xD709D70)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_SELECTITEM_OFFSET UNITYSDK_OFFSET(0xD709CE0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD6DB8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_ClientFinishMissionInfo_TypeDefinitionIndex = 66188;

	class MissionModule_ClientFinishMissionInfo : public ::System::Object
	{
	public:
		::RPG::Client::MissionModule_PlayMessage _playMessage; // 0x10
		::RPG::Client::MissionModule_SelectItem _SelectItem_k__BackingField; // 0x18
		::RPG::Client::MissionModule_ConsumeItem _ConsumeItem_k__BackingField; // 0x28
		::RPG::Client::MissionModule_FinishPerformance _FinishPerformance_k__BackingField; // 0x38
		::RPG::Client::MissionModule_ResultValue _ResultValue_k__BackingField; // 0x44
		::RPG::Client::MissionModule_ClientFinishMissionType FinishMissionType; // 0x48
		::System::UInt32 SubMissionID; // 0x4C

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::MissionModule_ClientFinishMissionType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::MissionModule_ClientFinishMissionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetFinishPerformance(::RPG::GameCore::SetLoadingStratageType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetLoadingStratageType*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETFINISHPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void SetMessage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETMESSAGE_OFFSET))(this, a1);
		}

		::System::Void SetResultValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETRESULTVALUE_OFFSET))(this, a1);
		}

		::System::Void SetConsumeItem(::System::Boolean a1, ::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::MissionItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETCONSUMEITEM_OFFSET))(this, a1, a2);
		}

		::System::Void SetSelectConsumeItem(::Il2CppArray<::RPG::GameCore::SelectMissionItemConfig*>* a1, ::RPG::GameCore::MissionItemConfigList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SelectMissionItemConfig*>*, ::RPG::GameCore::MissionItemConfigList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETSELECTCONSUMEITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MissionModule_FinishPerformance get_FinishPerformance()
		{
			return ((::RPG::Client::MissionModule_FinishPerformance(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_FINISHPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_FinishPerformance(::RPG::Client::MissionModule_FinishPerformance a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionModule_FinishPerformance))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_FINISHPERFORMANCE_OFFSET))(this, a1);
		}

		::RPG::Client::MissionModule_SelectItem get_SelectItem()
		{
			return ((::RPG::Client::MissionModule_SelectItem(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_SELECTITEM_OFFSET))(this);
		}

		::System::Void set_SelectItem(::RPG::Client::MissionModule_SelectItem a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionModule_SelectItem))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_SELECTITEM_OFFSET))(this, a1);
		}

		::RPG::Client::MissionModule_ConsumeItem get_ConsumeItem()
		{
			return ((::RPG::Client::MissionModule_ConsumeItem(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_CONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_ConsumeItem(::RPG::Client::MissionModule_ConsumeItem a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionModule_ConsumeItem))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_CONSUMEITEM_OFFSET))(this, a1);
		}

		::RPG::Client::MissionModule_PlayMessage get_PlayMessage()
		{
			return ((::RPG::Client::MissionModule_PlayMessage(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_PLAYMESSAGE_OFFSET))(this);
		}

		::RPG::Client::MissionModule_ResultValue get_ResultValue()
		{
			return ((::RPG::Client::MissionModule_ResultValue(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_RESULTVALUE_OFFSET))(this);
		}

		::System::Void set_ResultValue(::RPG::Client::MissionModule_ResultValue a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionModule_ResultValue))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_RESULTVALUE_OFFSET))(this, a1);
		}
	};
}
