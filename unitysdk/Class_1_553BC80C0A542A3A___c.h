#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_553BC80C0A542A3A___C_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x11EC7560)
#define CLASS_1_553BC80C0A542A3A___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11EC7620)
#define CLASS_1_553BC80C0A542A3A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11EC7510)
#define CLASS_1_553BC80C0A542A3A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11EC7550)

inline static constexpr unsigned int Class_1_553BC80C0A542A3A___c_TypeDefinitionIndex = 72011;

class Class_1_553BC80C0A542A3A___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__29_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_553BC80C0A542A3A___c_TypeDefinitionIndex)->GetStaticField(0x30D60);
	}
	static ::Class_1_553BC80C0A542A3A___c** StaticGet___9()
	{
		return (::Class_1_553BC80C0A542A3A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_553BC80C0A542A3A___c_TypeDefinitionIndex)->GetStaticField(0x30D68);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_553BC80C0A542A3A___c_TypeDefinitionIndex)->GetStaticField(0x30D70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A___C_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
