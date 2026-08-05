#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_107E8C66EE9C72A0___C_METHOD_1_DD4F016BB5B32AD3_OFFSET UNITYSDK_OFFSET(0x14534420)
#define CLASS_2_107E8C66EE9C72A0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145343D0)
#define CLASS_2_107E8C66EE9C72A0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14534410)

inline static constexpr unsigned int Class_2_107E8C66EE9C72A0___c_TypeDefinitionIndex = 59731;

class Class_2_107E8C66EE9C72A0___c : public ::System::Object
{
public:
	static ::Class_2_107E8C66EE9C72A0___c** StaticGet___9()
	{
		return (::Class_2_107E8C66EE9C72A0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_107E8C66EE9C72A0___c_TypeDefinitionIndex)->GetStaticField(0x4CBB0);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__12_3()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_107E8C66EE9C72A0___c_TypeDefinitionIndex)->GetStaticField(0x4CBB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_107E8C66EE9C72A0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_107E8C66EE9C72A0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DD4F016BB5B32AD3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_107E8C66EE9C72A0___C_METHOD_1_DD4F016BB5B32AD3_OFFSET))(this, a1);
	}
};
