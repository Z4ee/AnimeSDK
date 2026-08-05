#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_86;
class Class_1_1332AEF5DB679BA9;
class Class_1_2879FE367E12164C;

#define CLASS_1_CEA9790860F5F85F_METHOD_1_71CCF53CE813C41F_OFFSET UNITYSDK_OFFSET(0x1CA2DC60)
#define CLASS_1_CEA9790860F5F85F_METHOD_1_B7E3C3DAFBD8F4B2_OFFSET UNITYSDK_OFFSET(0x1CA2DB80)
#define CLASS_1_CEA9790860F5F85F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1CA2DB70)
#define CLASS_1_CEA9790860F5F85F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2DD00)

inline static constexpr unsigned int Class_1_CEA9790860F5F85F_TypeDefinitionIndex = 92629;

class Class_1_CEA9790860F5F85F : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEA9790860F5F85F__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEA9790860F5F85F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_B7E3C3DAFBD8F4B2(::Class_1_1332AEF5DB679BA9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1332AEF5DB679BA9*))((::PBYTE)hIl2Cpp + CLASS_1_CEA9790860F5F85F_METHOD_1_B7E3C3DAFBD8F4B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_71CCF53CE813C41F(::System::Single a1, ::Class_1_2879FE367E12164C* a2, ::System::Int32 a3, ::Class_0_16E4307DCC419505_86* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Class_1_2879FE367E12164C*, ::System::Int32, ::Class_0_16E4307DCC419505_86*))((::PBYTE)hIl2Cpp + CLASS_1_CEA9790860F5F85F_METHOD_1_71CCF53CE813C41F_OFFSET))(this, a1, a2, a3, a4);
	}
};
