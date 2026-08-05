#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_B0328B5369530F98___C_METHOD_1_A1645B00DB5C6FD5_OFFSET UNITYSDK_OFFSET(0x140307D0)
#define CLASS_2_B0328B5369530F98___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14030780)
#define CLASS_2_B0328B5369530F98___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140307C0)

inline static constexpr unsigned int Class_2_B0328B5369530F98___c_TypeDefinitionIndex = 54869;

class Class_2_B0328B5369530F98___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B0328B5369530F98___c_TypeDefinitionIndex)->GetStaticField(0x41D70);
	}
	static ::Class_2_B0328B5369530F98___c** StaticGet___9()
	{
		return (::Class_2_B0328B5369530F98___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B0328B5369530F98___c_TypeDefinitionIndex)->GetStaticField(0x41D78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B0328B5369530F98___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0328B5369530F98___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A1645B00DB5C6FD5(::Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E))((::PBYTE)hIl2Cpp + CLASS_2_B0328B5369530F98___C_METHOD_1_A1645B00DB5C6FD5_OFFSET))(this, a1);
	}
};
