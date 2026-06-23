#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_4_D1E2B7429EEC08F5___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12803CF0)
#define CLASS_4_D1E2B7429EEC08F5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12803CA0)
#define CLASS_4_D1E2B7429EEC08F5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12803CE0)

inline static constexpr unsigned int Class_4_D1E2B7429EEC08F5___c_TypeDefinitionIndex = 44902;

class Class_4_D1E2B7429EEC08F5___c : public ::System::Object
{
public:
	static ::Class_4_D1E2B7429EEC08F5___c** StaticGet___9()
	{
		return (::Class_4_D1E2B7429EEC08F5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_D1E2B7429EEC08F5___c_TypeDefinitionIndex)->GetStaticField(0x49360);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_D1E2B7429EEC08F5___c_TypeDefinitionIndex)->GetStaticField(0x49368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_D1E2B7429EEC08F5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D1E2B7429EEC08F5___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D1E2B7429EEC08F5___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
