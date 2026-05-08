#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_8C81679C2B324FE9___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16E05F70)
#define CLASS_3_8C81679C2B324FE9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E05F20)
#define CLASS_3_8C81679C2B324FE9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E05F60)

inline static constexpr unsigned int Class_3_8C81679C2B324FE9___c_TypeDefinitionIndex = 75850;

class Class_3_8C81679C2B324FE9___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C81679C2B324FE9___c_TypeDefinitionIndex)->GetStaticField(0x33930);
	}
	static ::Class_3_8C81679C2B324FE9___c** StaticGet___9()
	{
		return (::Class_3_8C81679C2B324FE9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C81679C2B324FE9___c_TypeDefinitionIndex)->GetStaticField(0x33938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C81679C2B324FE9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C81679C2B324FE9___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C81679C2B324FE9___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
