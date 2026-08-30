#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_3_92460753D1985873_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2E930F3540F0C93A_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC798040)
#define CLASS_2_2E930F3540F0C93A_1_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0xC7981A0)
#define CLASS_2_2E930F3540F0C93A_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7980D0)
#define CLASS_2_2E930F3540F0C93A_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC798080)
#define CLASS_2_2E930F3540F0C93A_1_TICK_OFFSET UNITYSDK_OFFSET(0xC798380)
#define CLASS_2_2E930F3540F0C93A_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC798030)

inline static constexpr unsigned int Class_2_2E930F3540F0C93A_1_TypeDefinitionIndex = 54159;

class Class_2_2E930F3540F0C93A_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_92460753D1985873_2* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::FixPoint DKOFFPPGEFI; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_92460753D1985873_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_92460753D1985873_2*))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_1_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_1_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}
};
