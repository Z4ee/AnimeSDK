#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_5_21B7B2D2EF25B508___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x134D2DB0)
#define CLASS_5_21B7B2D2EF25B508___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134D2D60)
#define CLASS_5_21B7B2D2EF25B508___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134D2DA0)

inline static constexpr unsigned int Class_5_21B7B2D2EF25B508___c_TypeDefinitionIndex = 76438;

class Class_5_21B7B2D2EF25B508___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_21B7B2D2EF25B508___c_TypeDefinitionIndex)->GetStaticField(0x3FD60);
	}
	static ::Class_5_21B7B2D2EF25B508___c** StaticGet___9()
	{
		return (::Class_5_21B7B2D2EF25B508___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_21B7B2D2EF25B508___c_TypeDefinitionIndex)->GetStaticField(0x3FD68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_21B7B2D2EF25B508___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_21B7B2D2EF25B508___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_21B7B2D2EF25B508___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
