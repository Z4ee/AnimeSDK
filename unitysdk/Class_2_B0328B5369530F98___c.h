#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_B0328B5369530F98___C_METHOD_1_A1645B00DB5C6FD5_OFFSET UNITYSDK_OFFSET(0x12FE6C10)
#define CLASS_2_B0328B5369530F98___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FE6BC0)
#define CLASS_2_B0328B5369530F98___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE6C00)

inline static constexpr unsigned int Class_2_B0328B5369530F98___c_TypeDefinitionIndex = 72654;

class Class_2_B0328B5369530F98___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_2_F8FEC3ABC4732593_Struct_2_46A3F15720DA5D2E>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B0328B5369530F98___c_TypeDefinitionIndex)->GetStaticField(0x36CA0);
	}
	static ::Class_2_B0328B5369530F98___c** StaticGet___9()
	{
		return (::Class_2_B0328B5369530F98___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B0328B5369530F98___c_TypeDefinitionIndex)->GetStaticField(0x36CA8);
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
