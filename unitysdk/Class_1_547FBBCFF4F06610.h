#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6F4C4ABEDB8B5E9;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_547FBBCFF4F06610_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0xB28DF40)
#define CLASS_1_547FBBCFF4F06610__CCTOR_OFFSET UNITYSDK_OFFSET(0xB28DFE0)
#define CLASS_1_547FBBCFF4F06610__CTOR_OFFSET UNITYSDK_OFFSET(0xB28E0C0)

inline static constexpr unsigned int Class_1_547FBBCFF4F06610_TypeDefinitionIndex = 49770;

class Class_1_547FBBCFF4F06610 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_C6F4C4ABEDB8B5E9*>** StaticGet_BEJJCPGEMIG()
	{
		return (::System::Action_1<::Class_1_C6F4C4ABEDB8B5E9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_547FBBCFF4F06610_TypeDefinitionIndex)->GetStaticField(0x23200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_C6F4C4ABEDB8B5E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}
};
