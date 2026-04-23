#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AdvNpcHitListener; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8EC88D3F90705C0F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9504200)
#define CLASS_2_8EC88D3F90705C0F_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x95044E0)
#define CLASS_2_8EC88D3F90705C0F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9504310)
#define CLASS_2_8EC88D3F90705C0F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9504430)
#define CLASS_2_8EC88D3F90705C0F_TICK_OFFSET UNITYSDK_OFFSET(0x9504480)
#define CLASS_2_8EC88D3F90705C0F__CTOR_OFFSET UNITYSDK_OFFSET(0x9504170)

inline static constexpr unsigned int Class_2_8EC88D3F90705C0F_TypeDefinitionIndex = 48426;

class Class_2_8EC88D3F90705C0F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcHitListener* Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x30

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

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_8EC88D3F90705C0F_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}
};
