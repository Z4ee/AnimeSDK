#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_47E4172E38154D55_1___C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x116E3210)
#define CLASS_3_47E4172E38154D55_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116E31C0)
#define CLASS_3_47E4172E38154D55_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116E3200)

inline static constexpr unsigned int Class_3_47E4172E38154D55_1___c_TypeDefinitionIndex = 55005;

class Class_3_47E4172E38154D55_1___c : public ::System::Object
{
public:
	static ::Class_3_47E4172E38154D55_1___c** StaticGet___9()
	{
		return (::Class_3_47E4172E38154D55_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_47E4172E38154D55_1___c_TypeDefinitionIndex)->GetStaticField(0x45460);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_47E4172E38154D55_1___c_TypeDefinitionIndex)->GetStaticField(0x45468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_47E4172E38154D55_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47E4172E38154D55_1___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47E4172E38154D55_1___C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
