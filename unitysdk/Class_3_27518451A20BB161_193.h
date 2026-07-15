#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6954875F008CACFC_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_193_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152A1730)
#define CLASS_3_27518451A20BB161_193_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152A1770)
#define CLASS_3_27518451A20BB161_193__CTOR_OFFSET UNITYSDK_OFFSET(0x152A1700)

inline static constexpr unsigned int Class_3_27518451A20BB161_193_TypeDefinitionIndex = 52749;

class Class_3_27518451A20BB161_193 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6954875F008CACFC_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6954875F008CACFC_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6954875F008CACFC_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_193__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_193_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_193_ONTASKBEGIN_OFFSET))(this);
	}
};
