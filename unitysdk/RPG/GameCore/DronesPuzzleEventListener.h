#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_METHOD_3_3FEA10928C1A0C4C_OFFSET UNITYSDK_OFFSET(0x1D04A850)
#define RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_METHOD_3_8FC9C3FE97E454EA_OFFSET UNITYSDK_OFFSET(0x1D04A890)
#define RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D04A880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DronesPuzzleEventListener_TypeDefinitionIndex = 20137;

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

		static ::System::Void Method_3_3FEA10928C1A0C4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DronesPuzzleEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DronesPuzzleEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_METHOD_3_3FEA10928C1A0C4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FC9C3FE97E454EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DronesPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DronesPuzzleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESPUZZLEEVENTLISTENER_METHOD_3_8FC9C3FE97E454EA_OFFSET))(a1, a2);
		}
	};
}
