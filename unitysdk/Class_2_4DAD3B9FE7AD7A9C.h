#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetLocalWinFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4DAD3B9FE7AD7A9C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D28EB0)
#define CLASS_2_4DAD3B9FE7AD7A9C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18D28EF0)
#define CLASS_2_4DAD3B9FE7AD7A9C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18D28F80)
#define CLASS_2_4DAD3B9FE7AD7A9C_TICK_OFFSET UNITYSDK_OFFSET(0x18D28FD0)
#define CLASS_2_4DAD3B9FE7AD7A9C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D28EA0)

inline static constexpr unsigned int Class_2_4DAD3B9FE7AD7A9C_TypeDefinitionIndex = 58702;

class Class_2_4DAD3B9FE7AD7A9C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetLocalWinFlag* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLocalWinFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLocalWinFlag*))((::PBYTE)hIl2Cpp + CLASS_2_4DAD3B9FE7AD7A9C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DAD3B9FE7AD7A9C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DAD3B9FE7AD7A9C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DAD3B9FE7AD7A9C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4DAD3B9FE7AD7A9C_TICK_OFFSET))(this, a1);
	}
};
