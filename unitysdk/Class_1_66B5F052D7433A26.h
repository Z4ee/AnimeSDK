#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_66B5F052D7433A26_METHOD_1_3E7A053DF81C1024_OFFSET UNITYSDK_OFFSET(0x15627520)
#define CLASS_1_66B5F052D7433A26__CCTOR_OFFSET UNITYSDK_OFFSET(0x156275B0)

inline static constexpr unsigned int Class_1_66B5F052D7433A26_TypeDefinitionIndex = 50140;

class Class_1_66B5F052D7433A26 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7B4E9156998275BE*>** StaticGet_BEJJCPGEMIG()
	{
		return (::System::Action_1<::Class_1_7B4E9156998275BE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66B5F052D7433A26_TypeDefinitionIndex)->GetStaticField(0x19760);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66B5F052D7433A26__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_3E7A053DF81C1024(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_66B5F052D7433A26_METHOD_1_3E7A053DF81C1024_OFFSET))(a1);
	}
};
