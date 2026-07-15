#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6BA10DC46C47290E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_229_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169AFEE0)
#define CLASS_3_27518451A20BB161_229__CTOR_OFFSET UNITYSDK_OFFSET(0x169AFEB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_229_TypeDefinitionIndex = 53148;

class Class_3_27518451A20BB161_229 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6BA10DC46C47290E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6BA10DC46C47290E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6BA10DC46C47290E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_229__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_229_ONTASKBEGIN_OFFSET))(this);
	}
};
