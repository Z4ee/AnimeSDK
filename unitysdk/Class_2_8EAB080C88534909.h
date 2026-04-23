#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdvNpcFaceTo; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8EAB080C88534909_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DC5290)
#define CLASS_2_8EAB080C88534909_METHOD_2_2F2F3C2D2A69DA68_OFFSET UNITYSDK_OFFSET(0x11DC56A0)
#define CLASS_2_8EAB080C88534909_METHOD_2_42D97A8CBDA1DDFB_OFFSET UNITYSDK_OFFSET(0x11DC5E60)
#define CLASS_2_8EAB080C88534909_METHOD_2_906EBAD7AEE08C52_OFFSET UNITYSDK_OFFSET(0x11DC5FF0)
#define CLASS_2_8EAB080C88534909_METHOD_2_C078064DF67F1953_OFFSET UNITYSDK_OFFSET(0x11DC54D0)
#define CLASS_2_8EAB080C88534909_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x11DC6110)
#define CLASS_2_8EAB080C88534909_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DC52D0)
#define CLASS_2_8EAB080C88534909_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DC5E10)
#define CLASS_2_8EAB080C88534909_TICK_OFFSET UNITYSDK_OFFSET(0x11DC5920)
#define CLASS_2_8EAB080C88534909__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC5270)

inline static constexpr unsigned int Class_2_8EAB080C88534909_TypeDefinitionIndex = 48380;

class Class_2_8EAB080C88534909 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcFaceTo* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::System::UInt32 Field_2_5; // 0x30
	::System::Boolean Field_2_3; // 0x34
	::System::Single Field_2_4; // 0x38
	::UnityEngine::Vector3 Field_2_6; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFaceTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFaceTo*))((::PBYTE)hIl2Cpp + CLASS_2_8EAB080C88534909__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EAB080C88534909_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EAB080C88534909_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EAB080C88534909_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8EAB080C88534909_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_C078064DF67F1953(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8EAB080C88534909_METHOD_2_C078064DF67F1953_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_906EBAD7AEE08C52()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EAB080C88534909_METHOD_2_906EBAD7AEE08C52_OFFSET))(this);
	}

	::System::Boolean Method_2_42D97A8CBDA1DDFB(::RPG::GameCore::AdventureCharacterController* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8EAB080C88534909_METHOD_2_42D97A8CBDA1DDFB_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_2F2F3C2D2A69DA68()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EAB080C88534909_METHOD_2_2F2F3C2D2A69DA68_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8EAB080C88534909_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
