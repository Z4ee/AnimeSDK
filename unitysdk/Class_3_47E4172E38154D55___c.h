#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_47E4172E38154D55___C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16B0E310)
#define CLASS_3_47E4172E38154D55___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B0E2C0)
#define CLASS_3_47E4172E38154D55___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B0E300)

inline static constexpr unsigned int Class_3_47E4172E38154D55___c_TypeDefinitionIndex = 62119;

class Class_3_47E4172E38154D55___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_47E4172E38154D55___c_TypeDefinitionIndex)->GetStaticField(0x441A0);
	}
	static ::Class_3_47E4172E38154D55___c** StaticGet___9()
	{
		return (::Class_3_47E4172E38154D55___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_47E4172E38154D55___c_TypeDefinitionIndex)->GetStaticField(0x441A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_47E4172E38154D55___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47E4172E38154D55___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47E4172E38154D55___C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
