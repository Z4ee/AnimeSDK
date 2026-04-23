#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PerceiveValueTriggerConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TrackNpcZoneConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPC_METHOD_3_95A7F496BDEA20FF_OFFSET UNITYSDK_OFFSET(0x18652230)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPC_METHOD_3_E5DBEA3E7D5F0AF4_OFFSET UNITYSDK_OFFSET(0x18652080)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x186520C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpc_TypeDefinitionIndex = 21052;

	class AdvGameplayTrackNpc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean HighLightNpc; // 0x20
		::System::Single MaxPerceiveValue; // 0x24
		::System::Single MaxAlertValue; // 0x28
		::System::Single MaxTrackValue; // 0x2C
		::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>* ZoneConfigs; // 0x30
		::Il2CppArray<::System::String*>* Visions; // 0x38
		::Il2CppArray<::System::String*>* CheckVisionPoints; // 0x40
		::System::Single CheckVisionRadius; // 0x48
		::Il2CppArray<::RPG::GameCore::PerceiveValueTriggerConfig*>* PerceiveValueTriggers; // 0x50
		::RPG::GameCore::DynamicFloat* LeaveAlertTime; // 0x58
		::RPG::GameCore::DynamicFloat* FailAlertValue; // 0x60
		::RPG::GameCore::DynamicFloat* FailLoseTargetTime; // 0x68
		::RPG::GameCore::DynamicString* FoundFailString; // 0x70
		::RPG::GameCore::DynamicString* LoseTargetFailString; // 0x78
		::System::String* StartTrackAIEvent; // 0x80
		::System::String* ResetTrackAIEvent; // 0x88
		::System::String* EndTrackAIEvent; // 0x90
		::System::Boolean ShowDebugInfo; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E5DBEA3E7D5F0AF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpc*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPC_METHOD_3_E5DBEA3E7D5F0AF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95A7F496BDEA20FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpc* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPC_METHOD_3_95A7F496BDEA20FF_OFFSET))(a1, a2);
		}
	};
}
