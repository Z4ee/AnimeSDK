#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterTriggerAnimState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_C3B098D75AB199E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DEB100)
#define CLASS_2_C3B098D75AB199E9_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x11DEB160)
#define CLASS_2_C3B098D75AB199E9_METHOD_2_8544791E43E7E0C6_OFFSET UNITYSDK_OFFSET(0x11DEBA30)
#define CLASS_2_C3B098D75AB199E9_METHOD_2_AF22E1196DDD44B7_OFFSET UNITYSDK_OFFSET(0x11DEB170)
#define CLASS_2_C3B098D75AB199E9_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x11DEBE30)
#define CLASS_2_C3B098D75AB199E9_ONSKIP_OFFSET UNITYSDK_OFFSET(0x11DEBCC0)
#define CLASS_2_C3B098D75AB199E9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DEB2B0)
#define CLASS_2_C3B098D75AB199E9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DEBB40)
#define CLASS_2_C3B098D75AB199E9_TICK_OFFSET UNITYSDK_OFFSET(0x11DEBB90)
#define CLASS_2_C3B098D75AB199E9__CTOR_OFFSET UNITYSDK_OFFSET(0x11DEB0F0)

inline static constexpr unsigned int Class_2_C3B098D75AB199E9_TypeDefinitionIndex = 53495;

class Class_2_C3B098D75AB199E9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* Field_2_5; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_2_4; // 0x28
	::RPG::GameCore::CharacterTriggerAnimState* Field_2_1; // 0x30
	::RPG::Client::MockAnimator* Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterTriggerAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterTriggerAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_C3B098D75AB199E9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B098D75AB199E9_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B098D75AB199E9_GET_FORCESKIP_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_AF22E1196DDD44B7()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B098D75AB199E9_METHOD_2_AF22E1196DDD44B7_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B098D75AB199E9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_8544791E43E7E0C6(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C3B098D75AB199E9_METHOD_2_8544791E43E7E0C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B098D75AB199E9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3B098D75AB199E9_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B098D75AB199E9_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3B098D75AB199E9_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
