#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_4E1479A8543BD31B___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1020D700)
#define CLASS_2_4E1479A8543BD31B___C_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x1020D630)
#define CLASS_2_4E1479A8543BD31B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1020D5E0)
#define CLASS_2_4E1479A8543BD31B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1020D620)

inline static constexpr unsigned int Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex = 51931;

class Class_2_4E1479A8543BD31B___c : public ::System::Object
{
public:
	static ::Class_2_4E1479A8543BD31B___c** StaticGet___9()
	{
		return (::Class_2_4E1479A8543BD31B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x339E0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__8_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x339E8);
	}
	static ::System::Action** StaticGet___9__20_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x339F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
