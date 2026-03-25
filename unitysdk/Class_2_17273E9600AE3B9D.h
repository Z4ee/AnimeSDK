#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LoopScene; }
namespace RPG::GameCore { class LoopMoveObject; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerLoopScene; }

#define CLASS_2_17273E9600AE3B9D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C2C2B0)
#define CLASS_2_17273E9600AE3B9D_METHOD_2_99B324FDB32FDFC5_OFFSET UNITYSDK_OFFSET(0x10C2C740)
#define CLASS_2_17273E9600AE3B9D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C2C2F0)
#define CLASS_2_17273E9600AE3B9D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C2CC10)
#define CLASS_2_17273E9600AE3B9D_TICK_OFFSET UNITYSDK_OFFSET(0x10C2CC60)
#define CLASS_2_17273E9600AE3B9D__CTOR_OFFSET UNITYSDK_OFFSET(0x10C2C2A0)

inline static constexpr unsigned int Class_2_17273E9600AE3B9D_TypeDefinitionIndex = 47468;

class Class_2_17273E9600AE3B9D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TriggerLoopScene* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerLoopScene* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerLoopScene*))((::PBYTE)hIl2Cpp + CLASS_2_17273E9600AE3B9D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17273E9600AE3B9D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17273E9600AE3B9D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_99B324FDB32FDFC5(::RPG::Client::LoopScene* a1, ::Il2CppArray<::RPG::GameCore::LoopMoveObject*>* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopScene*, ::Il2CppArray<::RPG::GameCore::LoopMoveObject*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_17273E9600AE3B9D_METHOD_2_99B324FDB32FDFC5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17273E9600AE3B9D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17273E9600AE3B9D_TICK_OFFSET))(this, a1);
	}
};
