#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_43;

#define CLASS_3_9DC1512EB6413498___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x137BF270)
#define CLASS_3_9DC1512EB6413498___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x137BF290)

inline static constexpr unsigned int Class_3_9DC1512EB6413498___c__DisplayClass1_0_TypeDefinitionIndex = 51986;

class Class_3_9DC1512EB6413498___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::UInt32 nBattleTargetID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DC1512EB6413498___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnTaskBegin_b__0(::Class_1_7AB88D713F5121B3_43* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7AB88D713F5121B3_43*))((::PBYTE)hIl2Cpp + CLASS_3_9DC1512EB6413498___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
	}
};
