#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_916778923E38503B;
class Class_3_C93CC3D2C2AC4067;
class Class_3_FFD0045B4597F294;
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_DORETURNTOBORNPOS_OFFSET UNITYSDK_OFFSET(0x199871F0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x199872E0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONRESET_OFFSET UNITYSDK_OFFSET(0x19987440)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONSTART_OFFSET UNITYSDK_OFFSET(0x19986F80)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x199873F0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x19987490)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__ONSTART_B__8_0_OFFSET UNITYSDK_OFFSET(0x19987520)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x19987530)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x199875C0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19987650)

namespace MoleMole
{
	inline static constexpr unsigned int ReturnToBornPositionImmediately_TypeDefinitionIndex = 79523;

	class ReturnToBornPositionImmediately : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* DitherKey; // 0x58
		::Class_3_C93CC3D2C2AC4067* _characterModelComponent; // 0x60
		::Class_3_FFD0045B4597F294* _characterMaterialComponent; // 0x68
		::Class_1_916778923E38503B* _ditherModifierInstance; // 0x70
		::BehaviorDesigner::Runtime::SharedVector3* OverrideBornPos; // 0x78
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x80
		::System::Boolean IsOverrideBornPos; // 0x88
		::System::Boolean _arriveBornPos; // 0x89

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONSTART_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_GETTARGETPOSITION_OFFSET))(this);
		}

		::System::Void DoReturnToBornPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_DORETURNTOBORNPOS_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONRESET_OFFSET))(this);
		}

		::System::Void _OnStart_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__ONSTART_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
