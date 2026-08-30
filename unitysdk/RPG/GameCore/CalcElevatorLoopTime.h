#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_CALCELEVATORLOOPTIME_METHOD_3_3C26800F5DB141A6_OFFSET UNITYSDK_OFFSET(0x1CF7A9A0)
#define RPG_GAMECORE_CALCELEVATORLOOPTIME_METHOD_3_B5C8DD6BE8C89537_OFFSET UNITYSDK_OFFSET(0x1CF7A9E0)
#define RPG_GAMECORE_CALCELEVATORLOOPTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7A9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CalcElevatorLoopTime_TypeDefinitionIndex = 20258;

	class CalcElevatorLoopTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Elevator2FHeight; // 0x18
		::RPG::GameCore::DynamicFloat* MoveDistanceBSAS; // 0x20
		::RPG::GameCore::DynamicFloat* MoveDistanceLoop; // 0x28
		::Il2CppArray<::System::String*>* LoopAnimStateNameArray; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCELEVATORLOOPTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3C26800F5DB141A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalcElevatorLoopTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalcElevatorLoopTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCELEVATORLOOPTIME_METHOD_3_3C26800F5DB141A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5C8DD6BE8C89537(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalcElevatorLoopTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalcElevatorLoopTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCELEVATORLOOPTIME_METHOD_3_B5C8DD6BE8C89537_OFFSET))(a1, a2);
		}
	};
}
