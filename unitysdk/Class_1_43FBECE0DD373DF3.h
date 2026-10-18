#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_409;
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_43FBECE0DD373DF3_METHOD_1_584292AF5E80215B_OFFSET UNITYSDK_OFFSET(0x1EC39500)
#define CLASS_1_43FBECE0DD373DF3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC39970)

inline static constexpr unsigned int Class_1_43FBECE0DD373DF3_TypeDefinitionIndex = 44253;

class Class_1_43FBECE0DD373DF3 : public ::System::Object
{
public:
	static ::System::Reflection::MethodInfo** StaticGet_IMFLPKHBNEO()
	{
		return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43FBECE0DD373DF3_TypeDefinitionIndex)->GetStaticField(0x47430);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43FBECE0DD373DF3__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_584292AF5E80215B(::Class_0_16E4307DCC419505_409* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_409*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_43FBECE0DD373DF3_METHOD_1_584292AF5E80215B_OFFSET))(a1, a2);
	}
};
