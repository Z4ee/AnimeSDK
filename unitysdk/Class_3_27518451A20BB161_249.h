#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7244B7F5B6DD070D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_249_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17ED1110)
#define CLASS_3_27518451A20BB161_249__CTOR_OFFSET UNITYSDK_OFFSET(0x17ED10E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_249_TypeDefinitionIndex = 55877;

class Class_3_27518451A20BB161_249 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7244B7F5B6DD070D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7244B7F5B6DD070D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7244B7F5B6DD070D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_249__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_249_ONTASKBEGIN_OFFSET))(this);
	}
};
