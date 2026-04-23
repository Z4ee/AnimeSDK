#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM_METHOD_3_0F47F964318FB135_OFFSET UNITYSDK_OFFSET(0x1863DF30)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM_METHOD_3_EBD30C7C61E90F00_OFFSET UNITYSDK_OFFSET(0x1863DFB0)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1863DF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddFinishMissionData_ConsumeItem_TypeDefinitionIndex = 20412;

	class AddFinishMissionData_ConsumeItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::Boolean IsUseLocalItemList; // 0x1C
		::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* LocalItemList; // 0x20
		::System::Boolean OnlyPerformance; // 0x28
		::System::Boolean UseNewItemDialog; // 0x29
		::System::Boolean IsShowConsumeFinishTips; // 0x2A
		::System::Boolean IsAutoConsume; // 0x2B
		::RPG::Client::TextID Desc; // 0x30
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitConfirm; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0F47F964318FB135(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_ConsumeItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_ConsumeItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM_METHOD_3_0F47F964318FB135_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EBD30C7C61E90F00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_ConsumeItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_ConsumeItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM_METHOD_3_EBD30C7C61E90F00_OFFSET))(a1, a2);
		}
	};
}
