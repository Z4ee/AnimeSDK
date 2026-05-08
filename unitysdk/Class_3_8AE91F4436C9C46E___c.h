#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_8AE91F4436C9C46E___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10900C50)
#define CLASS_3_8AE91F4436C9C46E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10900C00)
#define CLASS_3_8AE91F4436C9C46E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10900C40)

inline static constexpr unsigned int Class_3_8AE91F4436C9C46E___c_TypeDefinitionIndex = 64947;

class Class_3_8AE91F4436C9C46E___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__6_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8AE91F4436C9C46E___c_TypeDefinitionIndex)->GetStaticField(0x2C170);
	}
	static ::Class_3_8AE91F4436C9C46E___c** StaticGet___9()
	{
		return (::Class_3_8AE91F4436C9C46E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8AE91F4436C9C46E___c_TypeDefinitionIndex)->GetStaticField(0x2C178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8AE91F4436C9C46E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE91F4436C9C46E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE91F4436C9C46E___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
