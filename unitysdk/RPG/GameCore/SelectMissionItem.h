#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_SELECTMISSIONITEM_METHOD_3_3FA54D6C9248C1C2_OFFSET UNITYSDK_OFFSET(0x1769E780)
#define RPG_GAMECORE_SELECTMISSIONITEM_METHOD_3_5CAE2C9FB42A63D7_OFFSET UNITYSDK_OFFSET(0x1769E8C0)
#define RPG_GAMECORE_SELECTMISSIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1769E830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelectMissionItem_TypeDefinitionIndex = 18745;

	class SelectMissionItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::System::Boolean OnlyPerformance; // 0x1C
		::Il2CppArray<::System::UInt32>* ItemIDList; // 0x20
		::Il2CppArray<::System::UInt32>* ItemHiddenIDList; // 0x28
		::Il2CppArray<::System::UInt32>* ItemInvisibleIDList; // 0x30
		::Il2CppArray<::RPG::GameCore::SelectMissionItemConfig*>* ItemSelect; // 0x38
		::System::UInt32 SlotNum; // 0x40
		::RPG::Client::TextID InfoText; // 0x48
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x58
		::System::Boolean MaskErrorItem; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitSucceed; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitFail; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x78
		::Il2CppArray<::System::UInt32>* SubmittedItemIDs; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTMISSIONITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3FA54D6C9248C1C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SelectMissionItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SelectMissionItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTMISSIONITEM_METHOD_3_3FA54D6C9248C1C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5CAE2C9FB42A63D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SelectMissionItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SelectMissionItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTMISSIONITEM_METHOD_3_5CAE2C9FB42A63D7_OFFSET))(a1, a2);
		}
	};
}
