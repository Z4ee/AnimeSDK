#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6954875F008CACFC_7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_166_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF05FA0)
#define CLASS_3_27518451A20BB161_166__CTOR_OFFSET UNITYSDK_OFFSET(0xBF05F70)

inline static constexpr unsigned int Class_3_27518451A20BB161_166_TypeDefinitionIndex = 54869;

class Class_3_27518451A20BB161_166 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6954875F008CACFC_7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6954875F008CACFC_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6954875F008CACFC_7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_166__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_166_ONTASKBEGIN_OFFSET))(this);
	}
};
