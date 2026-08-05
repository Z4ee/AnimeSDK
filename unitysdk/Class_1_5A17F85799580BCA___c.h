#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_5A17F85799580BCA___C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x13CFF430)
#define CLASS_1_5A17F85799580BCA___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13CFF420)
#define CLASS_1_5A17F85799580BCA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CFF3D0)
#define CLASS_1_5A17F85799580BCA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CFF410)

inline static constexpr unsigned int Class_1_5A17F85799580BCA___c_TypeDefinitionIndex = 43953;

class Class_1_5A17F85799580BCA___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__21_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A17F85799580BCA___c_TypeDefinitionIndex)->GetStaticField(0x38920);
	}
	static ::System::Action** StaticGet___9__10_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A17F85799580BCA___c_TypeDefinitionIndex)->GetStaticField(0x38928);
	}
	static ::Class_1_5A17F85799580BCA___c** StaticGet___9()
	{
		return (::Class_1_5A17F85799580BCA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A17F85799580BCA___c_TypeDefinitionIndex)->GetStaticField(0x38930);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A17F85799580BCA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A17F85799580BCA___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A17F85799580BCA___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A17F85799580BCA___C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}
};
