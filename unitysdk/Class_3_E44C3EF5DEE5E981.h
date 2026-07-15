#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_26C9DBCC8AEB0F7C.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitConditionString; }

#define CLASS_3_E44C3EF5DEE5E981__CTOR_OFFSET UNITYSDK_OFFSET(0x176F6720)

inline static constexpr unsigned int Class_3_E44C3EF5DEE5E981_TypeDefinitionIndex = 56245;

class Class_3_E44C3EF5DEE5E981 : public ::Class_2_26C9DBCC8AEB0F7C
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitConditionString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitConditionString*))((::PBYTE)hIl2Cpp + CLASS_3_E44C3EF5DEE5E981__CTOR_OFFSET))(this, a1, a2);
	}
};
