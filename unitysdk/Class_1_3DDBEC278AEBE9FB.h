#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }

#define CLASS_1_3DDBEC278AEBE9FB_METHOD_1_4EF3764EB856D9C6_OFFSET UNITYSDK_OFFSET(0x1C876730)
#define CLASS_1_3DDBEC278AEBE9FB_SET_OFFSET UNITYSDK_OFFSET(0x1C876700)
#define CLASS_1_3DDBEC278AEBE9FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C876770)

inline static constexpr unsigned int Class_1_3DDBEC278AEBE9FB_TypeDefinitionIndex = 34551;

class Class_1_3DDBEC278AEBE9FB : public ::System::Object
{
public:
	::System::Int32 JOGHMLFLGAL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DDBEC278AEBE9FB__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3DDBEC278AEBE9FB_SET_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_4EF3764EB856D9C6(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_3DDBEC278AEBE9FB_METHOD_1_4EF3764EB856D9C6_OFFSET))(a1);
	}
};
