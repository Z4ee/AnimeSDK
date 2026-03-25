#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterFollowAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_917982C08450FB5E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD144B10)
#define CLASS_2_917982C08450FB5E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD144B50)
#define CLASS_2_917982C08450FB5E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD144B60)
#define CLASS_2_917982C08450FB5E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD144FE0)
#define CLASS_2_917982C08450FB5E_TICK_OFFSET UNITYSDK_OFFSET(0xD145030)
#define CLASS_2_917982C08450FB5E__CTOR_OFFSET UNITYSDK_OFFSET(0xD144B00)

inline static constexpr unsigned int Class_2_917982C08450FB5E_TypeDefinitionIndex = 46777;

class Class_2_917982C08450FB5E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::CharacterFollowAnimState* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterFollowAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterFollowAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_917982C08450FB5E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_917982C08450FB5E_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_917982C08450FB5E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_917982C08450FB5E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_917982C08450FB5E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_917982C08450FB5E_TICK_OFFSET))(this, a1);
	}
};
