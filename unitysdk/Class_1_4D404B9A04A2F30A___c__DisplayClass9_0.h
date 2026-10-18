#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44340B2393166A74;
class Class_1_F1F83A16E5B8B459_3;

#define CLASS_1_4D404B9A04A2F30A___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5862C0)
#define CLASS_1_4D404B9A04A2F30A___C__DISPLAYCLASS9_0___ONQUERYSERVERINFO_B__1_OFFSET UNITYSDK_OFFSET(0xB5863B0)

inline static constexpr unsigned int Class_1_4D404B9A04A2F30A___c__DisplayClass9_0_TypeDefinitionIndex = 80232;

class Class_1_4D404B9A04A2F30A___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_F1F83A16E5B8B459_3* rsp; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D404B9A04A2F30A___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnQueryServerInfo_b__1(::Class_1_44340B2393166A74* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_44340B2393166A74*))((::PBYTE)hIl2Cpp + CLASS_1_4D404B9A04A2F30A___C__DISPLAYCLASS9_0___ONQUERYSERVERINFO_B__1_OFFSET))(this, a1);
	}
};
