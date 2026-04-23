#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_METHOD_3_5C68D4E25F4480CC_OFFSET UNITYSDK_OFFSET(0x188900F0)
#define RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_METHOD_3_F0030FC401D8C964_OFFSET UNITYSDK_OFFSET(0x18890070)
#define RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x188900C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DronesPuzzleEventListener_TypeDefinitionIndex = 19323;

	class DronesPuzzleEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LeaveSafeAreaCallback; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LeaveMoveAreaCallback; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SwitchFPSCallback; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SwitchTPSCallback; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ChaseEnemyAddCallback; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0030FC401D8C964(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DronesPuzzleEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DronesPuzzleEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_METHOD_3_F0030FC401D8C964_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C68D4E25F4480CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DronesPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DronesPuzzleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_METHOD_3_5C68D4E25F4480CC_OFFSET))(a1, a2);
		}
	};
}
