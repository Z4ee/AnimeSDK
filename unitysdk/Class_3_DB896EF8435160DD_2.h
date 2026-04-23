#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_DB896EF8435160DD_2_METHOD_3_59E52142EB73E32E_OFFSET UNITYSDK_OFFSET(0x18988440)
#define CLASS_3_DB896EF8435160DD_2_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x189884C0)
#define CLASS_3_DB896EF8435160DD_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18988490)

inline static constexpr unsigned int Class_3_DB896EF8435160DD_2_TypeDefinitionIndex = 22271;

class Class_3_DB896EF8435160DD_2 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB896EF8435160DD_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59E52142EB73E32E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB896EF8435160DD_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB896EF8435160DD_2*&))((::PBYTE)hIl2Cpp + CLASS_3_DB896EF8435160DD_2_METHOD_3_59E52142EB73E32E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB896EF8435160DD_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB896EF8435160DD_2*))((::PBYTE)hIl2Cpp + CLASS_3_DB896EF8435160DD_2_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
