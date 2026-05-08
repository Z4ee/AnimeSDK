#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class Behavior; }

#define CLASS_3_6D73516CC6FEADD7_CLASS_1_1E194E478D745369_METHOD_1_3FA0C709EB15854C_OFFSET UNITYSDK_OFFSET(0x14CE5910)
#define CLASS_3_6D73516CC6FEADD7_CLASS_1_1E194E478D745369__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE5900)

inline static constexpr unsigned int Class_3_6D73516CC6FEADD7_Class_1_1E194E478D745369_TypeDefinitionIndex = 40309;

class Class_3_6D73516CC6FEADD7_Class_1_1E194E478D745369 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_CLASS_1_1E194E478D745369__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3FA0C709EB15854C(::BehaviorDesigner::Runtime::Behavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_CLASS_1_1E194E478D745369_METHOD_1_3FA0C709EB15854C_OFFSET))(this, a1);
	}
};
