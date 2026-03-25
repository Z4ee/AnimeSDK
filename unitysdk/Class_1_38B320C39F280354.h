#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
namespace System { class String; }

#define CLASS_1_38B320C39F280354_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xDE42AC0)
#define CLASS_1_38B320C39F280354_METHOD_1_CCC59D9C9CC49FCD_OFFSET UNITYSDK_OFFSET(0xDE42AD0)
#define CLASS_1_38B320C39F280354__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE42CD0)
#define CLASS_1_38B320C39F280354__CTOR_OFFSET UNITYSDK_OFFSET(0xDE42AB0)

inline static constexpr unsigned int Class_1_38B320C39F280354_TypeDefinitionIndex = 54689;

class Class_1_38B320C39F280354 : public ::System::Object
{
public:
	static ::Class_1_38B320C39F280354** StaticGet_Field_1_0()
	{
		return (::Class_1_38B320C39F280354**)Il2CppClass::FromTypeDefinitionIndex(Class_1_38B320C39F280354_TypeDefinitionIndex)->GetStaticField(0x47510);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38B320C39F280354__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_38B320C39F280354__CCTOR_OFFSET))();
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38B320C39F280354_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Object* Method_1_CCC59D9C9CC49FCD(::System::String* a1, ::Class_0_16E4307DCC419505_715* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_715*))((::PBYTE)hIl2Cpp + CLASS_1_38B320C39F280354_METHOD_1_CCC59D9C9CC49FCD_OFFSET))(this, a1, a2);
	}
};
