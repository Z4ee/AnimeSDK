#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_43;

#define CLASS_3_9DC1512EB6413498___C__DISPLAYCLASS1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1257D0B0)
#define CLASS_3_9DC1512EB6413498___C__DISPLAYCLASS1_1__ONTASKBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1257D0E0)

inline static constexpr unsigned int Class_3_9DC1512EB6413498___c__DisplayClass1_1_TypeDefinitionIndex = 51319;

class Class_3_9DC1512EB6413498___c__DisplayClass1_1 : public ::System::Object
{
public:
	::System::UInt32 stageBattleTargetID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DC1512EB6413498___C__DISPLAYCLASS1_1__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnTaskBegin_b__1(::Class_1_7AB88D713F5121B3_43* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7AB88D713F5121B3_43*))((::PBYTE)hIl2Cpp + CLASS_3_9DC1512EB6413498___C__DISPLAYCLASS1_1__ONTASKBEGIN_B__1_OFFSET))(this, e);
	}
};
