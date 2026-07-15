#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_07CB640A20D6F01A.h"

class Class_4_F9AA78D6418441B9;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_329876128237FA4D_METHOD_3_841AF12A7F4327AE_OFFSET UNITYSDK_OFFSET(0x16E46EA0)
#define CLASS_3_329876128237FA4D__CTOR_OFFSET UNITYSDK_OFFSET(0x16E46DE0)

inline static constexpr unsigned int Class_3_329876128237FA4D_TypeDefinitionIndex = 53203;

class Class_3_329876128237FA4D : public ::Class_2_07CB640A20D6F01A
{
public:
	::Class_4_F9AA78D6418441B9* Field_3_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_F9AA78D6418441B9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_F9AA78D6418441B9*))((::PBYTE)hIl2Cpp + CLASS_3_329876128237FA4D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_841AF12A7F4327AE(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_3_329876128237FA4D_METHOD_3_841AF12A7F4327AE_OFFSET))(this, a1);
	}
};
