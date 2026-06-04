#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION_METHOD_2_92B244F6798D7BEE_OFFSET UNITYSDK_OFFSET(0x19482F80)
#define RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION_METHOD_2_F943FA07782D44CC_OFFSET UNITYSDK_OFFSET(0x19482E80)
#define RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x19482F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointLittleGameCondition_TypeDefinitionIndex = 18054;

	class AssistWayPointLittleGameCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AssistWayPointLittleGameGroupID; // 0x10
		::System::UInt32 AssistWayPointLittleGameEntityID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F943FA07782D44CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointLittleGameCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointLittleGameCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION_METHOD_2_F943FA07782D44CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_92B244F6798D7BEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointLittleGameCondition*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointLittleGameCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTLITTLEGAMECONDITION_METHOD_2_92B244F6798D7BEE_OFFSET))(a1, a2);
		}
	};
}
