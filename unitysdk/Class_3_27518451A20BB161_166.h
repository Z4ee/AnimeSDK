#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_AEEA5F43E77E45D7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_166_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AE8EF0)
#define CLASS_3_27518451A20BB161_166__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE8EC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_166_TypeDefinitionIndex = 55149;

class Class_3_27518451A20BB161_166 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_AEEA5F43E77E45D7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_AEEA5F43E77E45D7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_AEEA5F43E77E45D7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_166__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_166_ONTASKBEGIN_OFFSET))(this);
	}
};
