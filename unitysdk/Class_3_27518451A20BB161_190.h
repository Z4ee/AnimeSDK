#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_12825D4B6E545D7F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_190_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160FC7E0)
#define CLASS_3_27518451A20BB161_190_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160FC820)
#define CLASS_3_27518451A20BB161_190__CTOR_OFFSET UNITYSDK_OFFSET(0x160FC7B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_190_TypeDefinitionIndex = 55285;

class Class_3_27518451A20BB161_190 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_12825D4B6E545D7F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_12825D4B6E545D7F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_12825D4B6E545D7F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_190__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_190_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_190_ONTASKBEGIN_OFFSET))(this);
	}
};
