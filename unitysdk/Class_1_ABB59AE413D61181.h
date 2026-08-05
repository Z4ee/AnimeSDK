#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE3538232762A08C;
namespace System { class String; }

#define CLASS_1_ABB59AE413D61181_METHOD_1_34770E7843BCBA57_OFFSET UNITYSDK_OFFSET(0x1F8EB760)
#define CLASS_1_ABB59AE413D61181__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8EB730)

inline static constexpr unsigned int Class_1_ABB59AE413D61181_TypeDefinitionIndex = 29545;

class Class_1_ABB59AE413D61181 : public ::System::Object
{
public:
	static ::System::Object** StaticGet_Field_1_0()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ABB59AE413D61181_TypeDefinitionIndex)->GetStaticField(0x24E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ABB59AE413D61181__CCTOR_OFFSET))();
	}

	static ::Class_1_CE3538232762A08C* Method_1_34770E7843BCBA57(::System::String* a1)
	{
		return ((::Class_1_CE3538232762A08C*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ABB59AE413D61181_METHOD_1_34770E7843BCBA57_OFFSET))(a1);
	}
};
