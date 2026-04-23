#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AssistWayPointPack; }
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValueGroupConfigPack; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace RPG::GameCore { class SubMissionRelationConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MAINMISSIONINFOCONFIG_METHOD_2_EE04D9ABD7FEE7E2_OFFSET UNITYSDK_OFFSET(0x18A82500)
#define RPG_GAMECORE_MAINMISSIONINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A82A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionInfoConfig_TypeDefinitionIndex = 18045;

	class MainMissionInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x10
		::System::UInt32 PrologueSubMssionID; // 0x14
		::Il2CppArray<::System::UInt32>* StartSubMissionList; // 0x18
		::Il2CppArray<::System::UInt32>* FinishSubMissionList; // 0x20
		::Il2CppArray<::RPG::GameCore::SubMissionInfoConfig*>* SubMissionList; // 0x28
		::Il2CppArray<::RPG::GameCore::MissionCustomValue*>* MissionCustomValueList; // 0x30
		::Il2CppArray<::System::String*>* CustomValueSaveIndexList; // 0x38
		::Il2CppArray<::RPG::GameCore::SubMissionRelationConfig*>* SubMissionRelationList; // 0x40
		::System::Boolean IsAllowInOnlineRoom; // 0x48
		::System::Boolean IsShow; // 0x49
		::System::Boolean UseAssistWayPoint; // 0x4A
		::System::Boolean IsLegacyAssistWayPoint; // 0x4B
		::Il2CppArray<::RPG::GameCore::AssistWayPointPack*>* AssistWayPointPackList; // 0x50
		::RPG::GameCore::MissionCustomValueGroupConfigPack* MissionCustomValueGroupConfigPack; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONINFOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EE04D9ABD7FEE7E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionInfoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONINFOCONFIG_METHOD_2_EE04D9ABD7FEE7E2_OFFSET))(a1, a2);
		}
	};
}
