#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_FA702C103FB59536;
class Class_3_1D619D0868607927;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_109_METHOD_3_47BA313143631830_OFFSET UNITYSDK_OFFSET(0x9390F10)
#define CLASS_3_27518451A20BB161_109_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9390C70)
#define CLASS_3_27518451A20BB161_109__CTOR_OFFSET UNITYSDK_OFFSET(0x9390C40)

inline static constexpr unsigned int Class_3_27518451A20BB161_109_TypeDefinitionIndex = 50666;

class Class_3_27518451A20BB161_109 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1D619D0868607927*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1D619D0868607927* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1D619D0868607927*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_109__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_109_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_FA702C103FB59536* Method_3_47BA313143631830()
	{
		return ((::Class_1_FA702C103FB59536*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_109_METHOD_3_47BA313143631830_OFFSET))(this);
	}
};
