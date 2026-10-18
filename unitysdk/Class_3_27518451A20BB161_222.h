#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7BA01DB1D8CEE96E_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_222_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFD4E30)
#define CLASS_3_27518451A20BB161_222__CTOR_OFFSET UNITYSDK_OFFSET(0xDFD4E00)

inline static constexpr unsigned int Class_3_27518451A20BB161_222_TypeDefinitionIndex = 55282;

class Class_3_27518451A20BB161_222 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7BA01DB1D8CEE96E_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7BA01DB1D8CEE96E_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7BA01DB1D8CEE96E_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_222__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_222_ONTASKBEGIN_OFFSET))(this);
	}
};
