#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEADVENTUREROOMRAYPROCESS_METHOD_3_7E2A3336281F7B72_OFFSET UNITYSDK_OFFSET(0x19B0CBF0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMRAYPROCESS_METHOD_3_ADF004088BF565EC_OFFSET UNITYSDK_OFFSET(0x19B0CCD0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMRAYPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0CC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureRoomRayProcess_TypeDefinitionIndex = 21056;

	class RogueAdventureRoomRayProcess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* RayModule1; // 0x18
		::RPG::GameCore::DynamicString* RayModule2; // 0x20
		::RPG::GameCore::DynamicString* RayModule3; // 0x28
		::RPG::GameCore::DynamicString* RayModule4; // 0x30
		::RPG::GameCore::DynamicString* RayModule5; // 0x38
		::RPG::GameCore::DynamicString* RayModule6; // 0x40
		::RPG::GameCore::DynamicString* RayModule7; // 0x48
		::RPG::GameCore::DynamicString* RayModule8; // 0x50
		::RPG::GameCore::DynamicString* AnchorMiddle; // 0x58
		::System::Single RaySpeed; // 0x60
		::System::Single HitRadius; // 0x64
		::Il2CppArray<::System::UInt32>* PositionScore; // 0x68
		::Il2CppArray<::System::UInt32>* TurnModuleNum; // 0x70
		::Il2CppArray<::System::UInt32>* TurnMinScore; // 0x78
		::System::UInt32 PreSightTime; // 0x80
		::System::UInt32 ShotTime; // 0x84
		::System::UInt32 HomeingTime; // 0x88
		::System::Single EffectWidthMultiplier; // 0x8C
		::System::Single EffectTimeScale; // 0x90
		::System::String* EffectPath; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMRAYPROCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E2A3336281F7B72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureRoomRayProcess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureRoomRayProcess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMRAYPROCESS_METHOD_3_7E2A3336281F7B72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADF004088BF565EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureRoomRayProcess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureRoomRayProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMRAYPROCESS_METHOD_3_ADF004088BF565EC_OFFSET))(a1, a2);
		}
	};
}
