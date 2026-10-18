#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8771DEDD2FBCE1AB;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_198_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DAC6F0)
#define CLASS_3_27518451A20BB161_198__CTOR_OFFSET UNITYSDK_OFFSET(0x15DAC6C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_198_TypeDefinitionIndex = 55128;

class Class_3_27518451A20BB161_198 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8771DEDD2FBCE1AB*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8771DEDD2FBCE1AB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8771DEDD2FBCE1AB*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_198__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_198_ONTASKBEGIN_OFFSET))(this);
	}
};
