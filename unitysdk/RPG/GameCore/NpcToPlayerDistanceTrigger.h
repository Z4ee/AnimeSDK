#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER_METHOD_3_185378D501F8DCC2_OFFSET UNITYSDK_OFFSET(0x199D3B60)
#define RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER_METHOD_3_AA6010EE8AC03296_OFFSET UNITYSDK_OFFSET(0x199D3AB0)
#define RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x199D3B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcToPlayerDistanceTrigger_TypeDefinitionIndex = 19195;

	class NpcToPlayerDistanceTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupNpcID; // 0x1C
		::System::Single NearDistance; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NearTask; // 0x28
		::System::Single FarDistance; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FarTask; // 0x38
		::System::Single AwakeWaitTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AA6010EE8AC03296(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcToPlayerDistanceTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcToPlayerDistanceTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER_METHOD_3_AA6010EE8AC03296_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_185378D501F8DCC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcToPlayerDistanceTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcToPlayerDistanceTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER_METHOD_3_185378D501F8DCC2_OFFSET))(a1, a2);
		}
	};
}
