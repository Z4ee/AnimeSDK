#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F8C627038C8DD30C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14410EF0)
#define CLASS_3_27518451A20BB161_35__CTOR_OFFSET UNITYSDK_OFFSET(0x14410EC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_35_TypeDefinitionIndex = 49423;

class Class_3_27518451A20BB161_35 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F8C627038C8DD30C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F8C627038C8DD30C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F8C627038C8DD30C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_35_ONTASKBEGIN_OFFSET))(this);
	}
};
