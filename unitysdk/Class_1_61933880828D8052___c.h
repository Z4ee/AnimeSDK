#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_1_61933880828D8052___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10B99430)
#define CLASS_1_61933880828D8052___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B993E0)
#define CLASS_1_61933880828D8052___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B99420)

inline static constexpr unsigned int Class_1_61933880828D8052___c_TypeDefinitionIndex = 62681;

class Class_1_61933880828D8052___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61933880828D8052___c_TypeDefinitionIndex)->GetStaticField(0x464C0);
	}
	static ::Class_1_61933880828D8052___c** StaticGet___9()
	{
		return (::Class_1_61933880828D8052___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61933880828D8052___c_TypeDefinitionIndex)->GetStaticField(0x464C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
