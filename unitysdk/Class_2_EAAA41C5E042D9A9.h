#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdvNpcFaceTo; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EAAA41C5E042D9A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141DDF80)
#define CLASS_2_EAAA41C5E042D9A9_METHOD_2_1680DDAD93EFD151_OFFSET UNITYSDK_OFFSET(0x141DE1B0)
#define CLASS_2_EAAA41C5E042D9A9_METHOD_2_2F2F3C2D2A69DA68_OFFSET UNITYSDK_OFFSET(0x141DE390)
#define CLASS_2_EAAA41C5E042D9A9_METHOD_2_42D97A8CBDA1DDFB_OFFSET UNITYSDK_OFFSET(0x141DEB50)
#define CLASS_2_EAAA41C5E042D9A9_METHOD_2_EBBE08F2874773A2_OFFSET UNITYSDK_OFFSET(0x141DECE0)
#define CLASS_2_EAAA41C5E042D9A9_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x141DEE10)
#define CLASS_2_EAAA41C5E042D9A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141DDFC0)
#define CLASS_2_EAAA41C5E042D9A9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x141DEB00)
#define CLASS_2_EAAA41C5E042D9A9_TICK_OFFSET UNITYSDK_OFFSET(0x141DE610)
#define CLASS_2_EAAA41C5E042D9A9__CTOR_OFFSET UNITYSDK_OFFSET(0x141DDF60)

inline static constexpr unsigned int Class_2_EAAA41C5E042D9A9_TypeDefinitionIndex = 49006;

class Class_2_EAAA41C5E042D9A9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AdvNpcFaceTo* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x34
	::System::UInt32 Field_2_5; // 0x38
	::UnityEngine::Vector3 Field_2_6; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFaceTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFaceTo*))((::PBYTE)hIl2Cpp + CLASS_2_EAAA41C5E042D9A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAAA41C5E042D9A9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAAA41C5E042D9A9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAAA41C5E042D9A9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EAAA41C5E042D9A9_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_1680DDAD93EFD151(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_EAAA41C5E042D9A9_METHOD_2_1680DDAD93EFD151_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_EBBE08F2874773A2()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAAA41C5E042D9A9_METHOD_2_EBBE08F2874773A2_OFFSET))(this);
	}

	::System::Boolean Method_2_42D97A8CBDA1DDFB(::RPG::GameCore::AdventureCharacterController* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EAAA41C5E042D9A9_METHOD_2_42D97A8CBDA1DDFB_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_2F2F3C2D2A69DA68()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAAA41C5E042D9A9_METHOD_2_2F2F3C2D2A69DA68_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EAAA41C5E042D9A9_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
