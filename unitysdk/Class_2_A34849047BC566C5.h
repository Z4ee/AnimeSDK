#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AliveState.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropDestroy; }

#define CLASS_2_A34849047BC566C5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A5EED0)
#define CLASS_2_A34849047BC566C5_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13A5F690)
#define CLASS_2_A34849047BC566C5_METHOD_2_D90C141360AEE38A_OFFSET UNITYSDK_OFFSET(0x13A5F610)
#define CLASS_2_A34849047BC566C5_METHOD_2_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0x13A5F1F0)
#define CLASS_2_A34849047BC566C5_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x13A5F2F0)
#define CLASS_2_A34849047BC566C5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A5F020)
#define CLASS_2_A34849047BC566C5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A5EFD0)
#define CLASS_2_A34849047BC566C5_TICK_OFFSET UNITYSDK_OFFSET(0x13A5F400)
#define CLASS_2_A34849047BC566C5__CTOR_OFFSET UNITYSDK_OFFSET(0x13A5EE50)

inline static constexpr unsigned int Class_2_A34849047BC566C5_TypeDefinitionIndex = 53486;

class Class_2_A34849047BC566C5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPropDestroy* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_1_5F51D4049EA87B7B* CHOOMNGLJHI; // 0x28
	::System::UInt32 FMAGLGKDEAJ; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropDestroy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropDestroy*))((::PBYTE)hIl2Cpp + CLASS_2_A34849047BC566C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A34849047BC566C5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A34849047BC566C5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_E5D433C7A574E387(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A34849047BC566C5_METHOD_2_E5D433C7A574E387_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A34849047BC566C5_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A34849047BC566C5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A34849047BC566C5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D90C141360AEE38A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_2_A34849047BC566C5_METHOD_2_D90C141360AEE38A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A34849047BC566C5_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}
};
