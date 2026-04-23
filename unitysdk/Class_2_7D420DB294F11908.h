#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerFarmElementAnimState; }
namespace System { class String; }

#define CLASS_2_7D420DB294F11908_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11947130)
#define CLASS_2_7D420DB294F11908_METHOD_2_788431C9F04FD9DF_OFFSET UNITYSDK_OFFSET(0x11946B80)
#define CLASS_2_7D420DB294F11908_METHOD_2_A48C05A398CFF84F_OFFSET UNITYSDK_OFFSET(0x11946D30)
#define CLASS_2_7D420DB294F11908_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11946FA0)
#define CLASS_2_7D420DB294F11908_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x119470E0)
#define CLASS_2_7D420DB294F11908_TICK_OFFSET UNITYSDK_OFFSET(0x11947170)
#define CLASS_2_7D420DB294F11908__CTOR_OFFSET UNITYSDK_OFFSET(0x11946B70)

inline static constexpr unsigned int Class_2_7D420DB294F11908_TypeDefinitionIndex = 54197;

class Class_2_7D420DB294F11908 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::Client::MockAnimator* Field_2_2; // 0x20
	::RPG::GameCore::TriggerFarmElementAnimState* Field_2_0; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerFarmElementAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerFarmElementAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_7D420DB294F11908__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_788431C9F04FD9DF()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D420DB294F11908_METHOD_2_788431C9F04FD9DF_OFFSET))(this);
	}

	::System::Void Method_2_A48C05A398CFF84F(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D420DB294F11908_METHOD_2_A48C05A398CFF84F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D420DB294F11908_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D420DB294F11908_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D420DB294F11908_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D420DB294F11908_TICK_OFFSET))(this, a1);
	}
};
