#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_547FBBCFF4F06610_1_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x121DD980)
#define CLASS_1_547FBBCFF4F06610_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x121DDA30)
#define CLASS_1_547FBBCFF4F06610_1__CTOR_OFFSET UNITYSDK_OFFSET(0x121DDA20)

inline static constexpr unsigned int Class_1_547FBBCFF4F06610_1_TypeDefinitionIndex = 50144;

class Class_1_547FBBCFF4F06610_1 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7B4E9156998275BE*>** StaticGet_BEJJCPGEMIG()
	{
		return (::System::Action_1<::Class_1_7B4E9156998275BE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_547FBBCFF4F06610_1_TypeDefinitionIndex)->GetStaticField(0x48B50);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_1__CCTOR_OFFSET))();
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_1_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}
};
