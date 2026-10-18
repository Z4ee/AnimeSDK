#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_53A1511C498CDC69;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_204_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE292F0)
#define CLASS_3_27518451A20BB161_204_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE29330)
#define CLASS_3_27518451A20BB161_204__CTOR_OFFSET UNITYSDK_OFFSET(0xBE292C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_204_TypeDefinitionIndex = 55195;

class Class_3_27518451A20BB161_204 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_53A1511C498CDC69*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_53A1511C498CDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_53A1511C498CDC69*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_204__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_204_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_204_ONTASKBEGIN_OFFSET))(this);
	}
};
