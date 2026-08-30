#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_547FBBCFF4F06610_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x163A1470)
#define CLASS_1_547FBBCFF4F06610__CCTOR_OFFSET UNITYSDK_OFFSET(0x163A1510)
#define CLASS_1_547FBBCFF4F06610__CTOR_OFFSET UNITYSDK_OFFSET(0x163A15F0)

inline static constexpr unsigned int Class_1_547FBBCFF4F06610_TypeDefinitionIndex = 50142;

class Class_1_547FBBCFF4F06610 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7B4E9156998275BE*>** StaticGet_BEJJCPGEMIG()
	{
		return (::System::Action_1<::Class_1_7B4E9156998275BE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_547FBBCFF4F06610_TypeDefinitionIndex)->GetStaticField(0x5AA50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}
};
