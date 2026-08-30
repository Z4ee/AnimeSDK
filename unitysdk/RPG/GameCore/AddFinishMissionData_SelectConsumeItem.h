#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM_METHOD_3_505E08932197D047_OFFSET UNITYSDK_OFFSET(0x1D6A0B20)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM_METHOD_3_8F6147675E7500EA_OFFSET UNITYSDK_OFFSET(0x1D6A0A00)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A0AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddFinishMissionData_SelectConsumeItem_TypeDefinitionIndex = 21329;

	class AddFinishMissionData_SelectConsumeItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::Boolean OnlyPerformance; // 0x1C
		::Il2CppArray<::System::UInt32>* ItemIDList; // 0x20
		::Il2CppArray<::System::UInt32>* ItemHiddenIDList; // 0x28
		::Il2CppArray<::System::UInt32>* ItemInvisibleIDList; // 0x30
		::Il2CppArray<::RPG::GameCore::SelectMissionItemConfig*>* ItemSelect; // 0x38
		::System::UInt32 SlotNum; // 0x40
		::RPG::Client::TextID InfoText; // 0x48
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x58
		::System::Boolean MaskErrorItem; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitFail; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8F6147675E7500EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM_METHOD_3_8F6147675E7500EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_505E08932197D047(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM_METHOD_3_505E08932197D047_OFFSET))(a1, a2);
		}
	};
}
