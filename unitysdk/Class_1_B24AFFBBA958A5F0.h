#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
namespace System { class String; }

#define CLASS_1_B24AFFBBA958A5F0_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x8CB78F0)
#define CLASS_1_B24AFFBBA958A5F0_METHOD_1_2319EA23F34BAD44_OFFSET UNITYSDK_OFFSET(0x8CB7900)
#define CLASS_1_B24AFFBBA958A5F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CB7B30)
#define CLASS_1_B24AFFBBA958A5F0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CB78E0)

inline static constexpr unsigned int Class_1_B24AFFBBA958A5F0_TypeDefinitionIndex = 54700;

class Class_1_B24AFFBBA958A5F0 : public ::System::Object
{
public:
	static ::Class_1_B24AFFBBA958A5F0** StaticGet_Field_1_0()
	{
		return (::Class_1_B24AFFBBA958A5F0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B24AFFBBA958A5F0_TypeDefinitionIndex)->GetStaticField(0x87B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B24AFFBBA958A5F0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B24AFFBBA958A5F0__CCTOR_OFFSET))();
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B24AFFBBA958A5F0_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Object* Method_1_2319EA23F34BAD44(::System::String* a1, ::Class_0_16E4307DCC419505_715* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_715*))((::PBYTE)hIl2Cpp + CLASS_1_B24AFFBBA958A5F0_METHOD_1_2319EA23F34BAD44_OFFSET))(this, a1, a2);
	}
};
