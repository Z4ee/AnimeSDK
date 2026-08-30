#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED_METHOD_3_05EE43C7DCDC2727_OFFSET UNITYSDK_OFFSET(0x1D6A9320)
#define RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED_METHOD_3_FF145B16F0F72D78_OFFSET UNITYSDK_OFFSET(0x1D6A9270)
#define RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A92E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropCurveMoveArrived_TypeDefinitionIndex = 20776;

	class WaitPropCurveMoveArrived : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicJson* TargetCurve; // 0x20
		::RPG::GameCore::DynamicString* TargetPointIndex; // 0x28
		::System::Boolean ListenPositive; // 0x30
		::System::Boolean ListenNegative; // 0x31
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TasksConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FF145B16F0F72D78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropCurveMoveArrived*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropCurveMoveArrived*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED_METHOD_3_FF145B16F0F72D78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05EE43C7DCDC2727(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropCurveMoveArrived* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropCurveMoveArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED_METHOD_3_05EE43C7DCDC2727_OFFSET))(a1, a2);
		}
	};
}
