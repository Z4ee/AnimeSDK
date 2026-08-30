#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtGridMoveStopType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTGRIDMOVETOTARGET_METHOD_3_88E5AA7ECCE7358D_OFFSET UNITYSDK_OFFSET(0x1CCE7040)
#define RPG_GAMECORE_RTGRIDMOVETOTARGET_METHOD_3_A7FE39C6F96041D0_OFFSET UNITYSDK_OFFSET(0x1CCE71B0)
#define RPG_GAMECORE_RTGRIDMOVETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE7080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtGridMoveToTarget_TypeDefinitionIndex = 23840;

	class RtGridMoveToTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* PosTargetType; // 0x20
		::RPG::GameCore::RtGridMoveStopType StopType; // 0x28
		::RPG::GameCore::DynamicFloat* StopDistance; // 0x30
		::RPG::GameCore::DynamicFloat* CustomSpeed; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAbort; // 0x48
		::RPG::GameCore::DynamicFloat* StopDist; // 0x50
		::RPG::GameCore::DynamicFloat* Speed; // 0x58
		::System::Boolean AffectByTimeScale; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDMOVETOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_88E5AA7ECCE7358D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtGridMoveToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtGridMoveToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDMOVETOTARGET_METHOD_3_88E5AA7ECCE7358D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A7FE39C6F96041D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtGridMoveToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtGridMoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDMOVETOTARGET_METHOD_3_A7FE39C6F96041D0_OFFSET))(a1, a2);
		}
	};
}
