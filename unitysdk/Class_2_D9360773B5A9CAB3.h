#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_20E0B412E0D28D40;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamAction; }

#define CLASS_2_D9360773B5A9CAB3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18935C00)
#define CLASS_2_D9360773B5A9CAB3_METHOD_2_44D54B0829C8FEF6_OFFSET UNITYSDK_OFFSET(0x18936080)
#define CLASS_2_D9360773B5A9CAB3_METHOD_2_CB430037C6C53563_OFFSET UNITYSDK_OFFSET(0x18936140)
#define CLASS_2_D9360773B5A9CAB3_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x18935D50)
#define CLASS_2_D9360773B5A9CAB3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18935CA0)
#define CLASS_2_D9360773B5A9CAB3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x189360F0)
#define CLASS_2_D9360773B5A9CAB3_TICK_OFFSET UNITYSDK_OFFSET(0x18935C40)
#define CLASS_2_D9360773B5A9CAB3__CTOR_OFFSET UNITYSDK_OFFSET(0x18935BF0)

inline static constexpr unsigned int Class_2_D9360773B5A9CAB3_TypeDefinitionIndex = 55894;

class Class_2_D9360773B5A9CAB3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TeamAction* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeamAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeamAction*))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_METHOD_2_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_2_44D54B0829C8FEF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_METHOD_2_44D54B0829C8FEF6_OFFSET))(this);
	}

	::Class_2_20E0B412E0D28D40* Method_2_CB430037C6C53563()
	{
		return ((::Class_2_20E0B412E0D28D40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_METHOD_2_CB430037C6C53563_OFFSET))(this);
	}
};
