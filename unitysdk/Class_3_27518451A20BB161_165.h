#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2B8E5491DEE7C708;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_165_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x189250A0)
#define CLASS_3_27518451A20BB161_165__CTOR_OFFSET UNITYSDK_OFFSET(0x18925070)

inline static constexpr unsigned int Class_3_27518451A20BB161_165_TypeDefinitionIndex = 55147;

class Class_3_27518451A20BB161_165 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2B8E5491DEE7C708*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2B8E5491DEE7C708* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2B8E5491DEE7C708*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_165__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_165_ONTASKBEGIN_OFFSET))(this);
	}
};
