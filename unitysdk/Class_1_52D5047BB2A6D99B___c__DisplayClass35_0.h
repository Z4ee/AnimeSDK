#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_98114A4376157A5D;
namespace System { class String; }

#define CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D4990)
#define CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS35_0__GETINSTANTIATEOPERATION_B__0_OFFSET UNITYSDK_OFFSET(0xB8D6FC0)

inline static constexpr unsigned int Class_1_52D5047BB2A6D99B___c__DisplayClass35_0_TypeDefinitionIndex = 64581;

class Class_1_52D5047BB2A6D99B___c__DisplayClass35_0 : public ::System::Object
{
public:
	::System::String* name; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetInstantiateOperation_b__0(::Class_1_98114A4376157A5D* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98114A4376157A5D*))((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS35_0__GETINSTANTIATEOPERATION_B__0_OFFSET))(this, e);
	}
};
