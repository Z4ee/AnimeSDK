#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_1_916778923E38503B;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_FFD0045B4597F294;
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_DORETURNTOBORNPOS_OFFSET UNITYSDK_OFFSET(0x12B15A30)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONRESET_OFFSET UNITYSDK_OFFSET(0x12B15B60)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONSTART_OFFSET UNITYSDK_OFFSET(0x12B15710)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B15B10)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B15BB0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__ONSTART_B__6_0_OFFSET UNITYSDK_OFFSET(0x12B15C40)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x12B15D20)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x12B15DB0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B15E40)

namespace MoleMole
{
	inline static constexpr unsigned int ReturnToBornPositionImmediately_TypeDefinitionIndex = 72589;

	class ReturnToBornPositionImmediately : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_1_916778923E38503B* _ditherModifierInstance; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::Class_3_DFD5D1FDB9D2A4AC* _characterModelComponent; // 0x68
		::System::String* DitherKey; // 0x70
		::Class_3_FFD0045B4597F294* _characterMaterialComponent; // 0x78
		::System::Boolean _arriveBornPos; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONSTART_OFFSET))(this);
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

		::System::Void _OnStart_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__ONSTART_B__6_0_OFFSET))(this);
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
