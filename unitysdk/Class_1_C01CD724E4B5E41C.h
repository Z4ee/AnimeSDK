#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_C01CD724E4B5E41C_METHOD_1_271C61DF1F216E72_1_OFFSET UNITYSDK_OFFSET(0x13A469C0)
#define CLASS_1_C01CD724E4B5E41C_METHOD_1_271C61DF1F216E72_OFFSET UNITYSDK_OFFSET(0x13A46720)
#define CLASS_1_C01CD724E4B5E41C_METHOD_1_55F60C84B6E8DDCC_OFFSET UNITYSDK_OFFSET(0x13A46880)
#define CLASS_1_C01CD724E4B5E41C_METHOD_1_9B2A22811DC88969_OFFSET UNITYSDK_OFFSET(0x13A465B0)
#define CLASS_1_C01CD724E4B5E41C_METHOD_1_B51526177175E83E_OFFSET UNITYSDK_OFFSET(0x13A464B0)
#define CLASS_1_C01CD724E4B5E41C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13A46970)
#define CLASS_1_C01CD724E4B5E41C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A46B50)
#define CLASS_1_C01CD724E4B5E41C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A46AD0)
#define CLASS_1_C01CD724E4B5E41C___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13A46B90)

inline static constexpr unsigned int Class_1_C01CD724E4B5E41C_TypeDefinitionIndex = 46333;

class Class_1_C01CD724E4B5E41C : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C01CD724E4B5E41C_TypeDefinitionIndex)->GetStaticField(0x54E60);
	}
	::System::Text::StringBuilder* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C01CD724E4B5E41C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C01CD724E4B5E41C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B51526177175E83E(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C01CD724E4B5E41C_METHOD_1_B51526177175E83E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9B2A22811DC88969(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C01CD724E4B5E41C_METHOD_1_9B2A22811DC88969_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_271C61DF1F216E72(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C01CD724E4B5E41C_METHOD_1_271C61DF1F216E72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_55F60C84B6E8DDCC(::Class_1_C01CD724E4B5E41C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C01CD724E4B5E41C*))((::PBYTE)hIl2Cpp + CLASS_1_C01CD724E4B5E41C_METHOD_1_55F60C84B6E8DDCC_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C01CD724E4B5E41C_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_271C61DF1F216E72_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C01CD724E4B5E41C_METHOD_1_271C61DF1F216E72_1_OFFSET))(this, a1, a2);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C01CD724E4B5E41C___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
