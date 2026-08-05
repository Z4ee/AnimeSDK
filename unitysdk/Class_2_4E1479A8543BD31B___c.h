#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_4E1479A8543BD31B___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x15424C90)
#define CLASS_2_4E1479A8543BD31B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15424C40)
#define CLASS_2_4E1479A8543BD31B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15424C80)

inline static constexpr unsigned int Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex = 61801;

class Class_2_4E1479A8543BD31B___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__8_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x3E860);
	}
	static ::Class_2_4E1479A8543BD31B___c** StaticGet___9()
	{
		return (::Class_2_4E1479A8543BD31B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x3E868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
