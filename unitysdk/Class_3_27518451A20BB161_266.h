#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_16356D7FCC1AD1D8;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_266_METHOD_3_B95515B9CD4B321A_OFFSET UNITYSDK_OFFSET(0x18221250)
#define CLASS_3_27518451A20BB161_266_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18220FF0)
#define CLASS_3_27518451A20BB161_266__CTOR_OFFSET UNITYSDK_OFFSET(0x18220FC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_266_TypeDefinitionIndex = 55982;

class Class_3_27518451A20BB161_266 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_16356D7FCC1AD1D8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_16356D7FCC1AD1D8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_16356D7FCC1AD1D8*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_266__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_266_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_B95515B9CD4B321A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_266_METHOD_3_B95515B9CD4B321A_OFFSET))(this);
	}
};
