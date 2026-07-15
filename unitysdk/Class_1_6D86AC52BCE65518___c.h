#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D86AC52BCE65518;

#define CLASS_1_6D86AC52BCE65518___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC9B740)
#define CLASS_1_6D86AC52BCE65518___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9B780)
#define CLASS_1_6D86AC52BCE65518___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1CC9B790)

inline static constexpr unsigned int Class_1_6D86AC52BCE65518___c_TypeDefinitionIndex = 27531;

class Class_1_6D86AC52BCE65518___c : public ::System::Object
{
public:
	static ::Class_1_6D86AC52BCE65518___c** StaticGet___9()
	{
		return (::Class_1_6D86AC52BCE65518___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D86AC52BCE65518___c_TypeDefinitionIndex)->GetStaticField(0x5E7B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518___C__CTOR_OFFSET))(this);
	}

	::Class_1_6D86AC52BCE65518* __cctor_b__38_0()
	{
		return ((::Class_1_6D86AC52BCE65518*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
