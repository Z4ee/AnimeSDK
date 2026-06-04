#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_21611E8BFC39DB2F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC04190)
#define CLASS_3_27518451A20BB161_13__CTOR_OFFSET UNITYSDK_OFFSET(0xCC04160)

inline static constexpr unsigned int Class_3_27518451A20BB161_13_TypeDefinitionIndex = 49395;

class Class_3_27518451A20BB161_13 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_21611E8BFC39DB2F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_21611E8BFC39DB2F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_21611E8BFC39DB2F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_13_ONTASKBEGIN_OFFSET))(this);
	}
};
