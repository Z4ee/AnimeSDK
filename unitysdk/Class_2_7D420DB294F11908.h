#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerFarmElementAnimState; }
namespace System { class String; }

#define CLASS_2_7D420DB294F11908_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15246CC0)
#define CLASS_2_7D420DB294F11908_METHOD_2_A48C05A398CFF84F_OFFSET UNITYSDK_OFFSET(0x152468C0)
#define CLASS_2_7D420DB294F11908_METHOD_2_AB2964D28A356649_OFFSET UNITYSDK_OFFSET(0x15246690)
#define CLASS_2_7D420DB294F11908_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15246B30)
#define CLASS_2_7D420DB294F11908_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15246C70)
#define CLASS_2_7D420DB294F11908_TICK_OFFSET UNITYSDK_OFFSET(0x15246D00)
#define CLASS_2_7D420DB294F11908__CTOR_OFFSET UNITYSDK_OFFSET(0x15246680)

inline static constexpr unsigned int Class_2_7D420DB294F11908_TypeDefinitionIndex = 58932;

class Class_2_7D420DB294F11908 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::MockAnimator* JDFCDMAPBFJ; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::TriggerFarmElementAnimState* OFKGLJOAMLD; // 0x28
	::System::Boolean OJKLKKADHGM; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerFarmElementAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerFarmElementAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_7D420DB294F11908__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_AB2964D28A356649()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D420DB294F11908_METHOD_2_AB2964D28A356649_OFFSET))(this);
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
