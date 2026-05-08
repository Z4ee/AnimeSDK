#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_AA16E651773526F7___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xDACA590)
#define CLASS_2_AA16E651773526F7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDACA540)
#define CLASS_2_AA16E651773526F7___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDACA580)

inline static constexpr unsigned int Class_2_AA16E651773526F7___c_TypeDefinitionIndex = 41279;

class Class_2_AA16E651773526F7___c : public ::System::Object
{
public:
	static ::Class_2_AA16E651773526F7___c** StaticGet___9()
	{
		return (::Class_2_AA16E651773526F7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AA16E651773526F7___c_TypeDefinitionIndex)->GetStaticField(0x3BE10);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__37_12()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AA16E651773526F7___c_TypeDefinitionIndex)->GetStaticField(0x3BE18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AA16E651773526F7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA16E651773526F7___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA16E651773526F7___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
