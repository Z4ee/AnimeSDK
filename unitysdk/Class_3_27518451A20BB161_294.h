#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_16356D7FCC1AD1D8;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_294_METHOD_3_B95515B9CD4B321A_OFFSET UNITYSDK_OFFSET(0xBD59740)
#define CLASS_3_27518451A20BB161_294_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD594E0)
#define CLASS_3_27518451A20BB161_294__CTOR_OFFSET UNITYSDK_OFFSET(0xBD594B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_294_TypeDefinitionIndex = 58757;

class Class_3_27518451A20BB161_294 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_16356D7FCC1AD1D8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_16356D7FCC1AD1D8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_16356D7FCC1AD1D8*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_294__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_294_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_B95515B9CD4B321A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_294_METHOD_3_B95515B9CD4B321A_OFFSET))(this);
	}
};
