#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7010B980A51AA9E1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCC4F00)
#define CLASS_3_27518451A20BB161_42__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC4ED0)

inline static constexpr unsigned int Class_3_27518451A20BB161_42_TypeDefinitionIndex = 52833;

class Class_3_27518451A20BB161_42 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7010B980A51AA9E1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7010B980A51AA9E1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7010B980A51AA9E1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_42_ONTASKBEGIN_OFFSET))(this);
	}
};
