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

#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_CONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x9BEBE00)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_FINISHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BEBDB0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_PLAYMESSAGE_OFFSET UNITYSDK_OFFSET(0x9BEBE20)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_RESULTVALUE_OFFSET UNITYSDK_OFFSET(0x9BEBE40)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x9BEBDE0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETCONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x9BC4820)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETFINISHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BC4300)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETMESSAGE_OFFSET UNITYSDK_OFFSET(0x9BC4650)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETRESULTVALUE_OFFSET UNITYSDK_OFFSET(0x9BC44D0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETSELECTCONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x9BC49F0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_CONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x9BEBE10)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_FINISHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BEBDD0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_PLAYMESSAGE_OFFSET UNITYSDK_OFFSET(0x9BEBE30)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_RESULTVALUE_OFFSET UNITYSDK_OFFSET(0x9BEBE50)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x9BEBDF0)
#define RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9BC42F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_ClientFinishMissionInfo_TypeDefinitionIndex = 53763;

	class MissionModule_ClientFinishMissionInfo : public ::System::Object
	{
	public:
		::RPG::Client::MissionModule_ConsumeItem _ConsumeItem_k__BackingField; // 0x10
		::RPG::Client::MissionModule_SelectItem _SelectItem_k__BackingField; // 0x20
		::RPG::Client::MissionModule_ClientFinishMissionType FinishMissionType; // 0x30
		::RPG::Client::MissionModule_ResultValue _ResultValue_k__BackingField; // 0x34
		::RPG::Client::MissionModule_FinishPerformance _FinishPerformance_k__BackingField; // 0x38
		::RPG::Client::MissionModule_PlayMessage _PlayMessage_k__BackingField; // 0x44
		::System::UInt32 SubMissionID; // 0x48

		::System::Void _ctor(::System::UInt32 subMissionID, ::RPG::Client::MissionModule_ClientFinishMissionType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::MissionModule_ClientFinishMissionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO__CTOR_OFFSET))(this, subMissionID, type);
		}

		::System::Void SetFinishPerformance(::RPG::GameCore::SetLoadingStratageType* finishPerformance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetLoadingStratageType*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETFINISHPERFORMANCE_OFFSET))(this, finishPerformance);
		}

		::System::Void SetMessage(::System::UInt32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETMESSAGE_OFFSET))(this, sectionID);
		}

		::System::Void SetResultValue(::System::UInt32 resultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETRESULTVALUE_OFFSET))(this, resultValue);
		}

		::System::Void SetConsumeItem(::System::Boolean isShowConsumeFinishTips, ::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::MissionItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETCONSUMEITEM_OFFSET))(this, isShowConsumeFinishTips, itemList);
		}

		::System::Void SetSelectConsumeItem(::Il2CppArray<::RPG::GameCore::SelectMissionItemConfig*>* itemSelectConfig, ::RPG::GameCore::MissionItemConfigList* playerSelectList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SelectMissionItemConfig*>*, ::RPG::GameCore::MissionItemConfigList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SETSELECTCONSUMEITEM_OFFSET))(this, itemSelectConfig, playerSelectList);
		}

		::RPG::Client::MissionModule_FinishPerformance get_FinishPerformance()
		{
			return ((::RPG::Client::MissionModule_FinishPerformance(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_FINISHPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_FinishPerformance(::RPG::Client::MissionModule_FinishPerformance value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionModule_FinishPerformance))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_FINISHPERFORMANCE_OFFSET))(this, value);
		}

		::RPG::Client::MissionModule_SelectItem get_SelectItem()
		{
			return ((::RPG::Client::MissionModule_SelectItem(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_SELECTITEM_OFFSET))(this);
		}

		::System::Void set_SelectItem(::RPG::Client::MissionModule_SelectItem value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionModule_SelectItem))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_SELECTITEM_OFFSET))(this, value);
		}

		::RPG::Client::MissionModule_ConsumeItem get_ConsumeItem()
		{
			return ((::RPG::Client::MissionModule_ConsumeItem(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_CONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_ConsumeItem(::RPG::Client::MissionModule_ConsumeItem value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionModule_ConsumeItem))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_CONSUMEITEM_OFFSET))(this, value);
		}

		::RPG::Client::MissionModule_PlayMessage get_PlayMessage()
		{
			return ((::RPG::Client::MissionModule_PlayMessage(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_PLAYMESSAGE_OFFSET))(this);
		}

		::System::Void set_PlayMessage(::RPG::Client::MissionModule_PlayMessage value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionModule_PlayMessage))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_PLAYMESSAGE_OFFSET))(this, value);
		}

		::RPG::Client::MissionModule_ResultValue get_ResultValue()
		{
			return ((::RPG::Client::MissionModule_ResultValue(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_GET_RESULTVALUE_OFFSET))(this);
		}

		::System::Void set_ResultValue(::RPG::Client::MissionModule_ResultValue value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionModule_ResultValue))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_CLIENTFINISHMISSIONINFO_SET_RESULTVALUE_OFFSET))(this, value);
		}
	};
}
