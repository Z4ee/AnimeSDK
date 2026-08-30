#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER_METHOD_3_C0E17500C782E08C_OFFSET UNITYSDK_OFFSET(0x1D300690)
#define RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER_METHOD_3_EE63EB5533EB9BCF_OFFSET UNITYSDK_OFFSET(0x1D3006D0)
#define RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3006C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionPuzzleEventListener_TypeDefinitionIndex = 21971;

	class OpticalIllusionPuzzleEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FinishCallback; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* QuitCallback; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* WayPassCallback; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* RotateBlockCallback; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ReachCallback; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ResetCallback; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ReachFirstPoint; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ReachSecondPoint; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0E17500C782E08C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionPuzzleEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionPuzzleEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER_METHOD_3_C0E17500C782E08C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE63EB5533EB9BCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionPuzzleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER_METHOD_3_EE63EB5533EB9BCF_OFFSET))(a1, a2);
		}
	};
}
