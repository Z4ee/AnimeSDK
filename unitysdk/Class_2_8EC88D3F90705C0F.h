#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvNpcHitListener; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8EC88D3F90705C0F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EEB340)
#define CLASS_2_8EC88D3F90705C0F_METHOD_2_0C1A88F2C2114036_OFFSET UNITYSDK_OFFSET(0x15EEB6C0)
#define CLASS_2_8EC88D3F90705C0F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EEB4D0)
#define CLASS_2_8EC88D3F90705C0F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EEB610)
#define CLASS_2_8EC88D3F90705C0F_TICK_OFFSET UNITYSDK_OFFSET(0x15EEB660)
#define CLASS_2_8EC88D3F90705C0F__CTOR_OFFSET UNITYSDK_OFFSET(0x15EEB2B0)

inline static constexpr unsigned int Class_2_8EC88D3F90705C0F_TypeDefinitionIndex = 50065;

class Class_2_8EC88D3F90705C0F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::AdvNpcHitListener* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcHitListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcHitListener*))((::PBYTE)hIl2Cpp + CLASS_2_8EC88D3F90705C0F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EC88D3F90705C0F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EC88D3F90705C0F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EC88D3F90705C0F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8EC88D3F90705C0F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C1A88F2C2114036(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_8EC88D3F90705C0F_METHOD_2_0C1A88F2C2114036_OFFSET))(this, a1);
	}
};
