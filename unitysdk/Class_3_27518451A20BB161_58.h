#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_FA702C103FB59536;
class Class_3_1D619D0868607927;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_58_METHOD_3_47BA313143631830_OFFSET UNITYSDK_OFFSET(0xEA52410)
#define CLASS_3_27518451A20BB161_58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEA52170)
#define CLASS_3_27518451A20BB161_58__CTOR_OFFSET UNITYSDK_OFFSET(0xEA52140)

inline static constexpr unsigned int Class_3_27518451A20BB161_58_TypeDefinitionIndex = 43965;

class Class_3_27518451A20BB161_58 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1D619D0868607927*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1D619D0868607927* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1D619D0868607927*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_58_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_FA702C103FB59536* Method_3_47BA313143631830()
	{
		return ((::Class_1_FA702C103FB59536*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_58_METHOD_3_47BA313143631830_OFFSET))(this);
	}
};
