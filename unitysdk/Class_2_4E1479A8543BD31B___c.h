#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_4E1479A8543BD31B___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x15A0F080)
#define CLASS_2_4E1479A8543BD31B___C_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x15A0F0C0)
#define CLASS_2_4E1479A8543BD31B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A0F030)
#define CLASS_2_4E1479A8543BD31B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A0F070)

inline static constexpr unsigned int Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex = 59368;

class Class_2_4E1479A8543BD31B___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__20_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x2EC40);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__8_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x2EC48);
	}
	static ::Class_2_4E1479A8543BD31B___c** StaticGet___9()
	{
		return (::Class_2_4E1479A8543BD31B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1479A8543BD31B___c_TypeDefinitionIndex)->GetStaticField(0x2EC50);
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

	::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B___C_METHOD_1_C293B8F3ADB851B9_OFFSET))(this);
	}
};
