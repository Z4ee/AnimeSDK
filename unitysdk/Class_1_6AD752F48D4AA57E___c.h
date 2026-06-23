#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_6AD752F48D4AA57E___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x153CDEC0)
#define CLASS_1_6AD752F48D4AA57E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x153CDE70)
#define CLASS_1_6AD752F48D4AA57E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153CDEB0)

inline static constexpr unsigned int Class_1_6AD752F48D4AA57E___c_TypeDefinitionIndex = 50549;

class Class_1_6AD752F48D4AA57E___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6AD752F48D4AA57E___c_TypeDefinitionIndex)->GetStaticField(0x462B0);
	}
	static ::Class_1_6AD752F48D4AA57E___c** StaticGet___9()
	{
		return (::Class_1_6AD752F48D4AA57E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6AD752F48D4AA57E___c_TypeDefinitionIndex)->GetStaticField(0x462B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6AD752F48D4AA57E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD752F48D4AA57E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AD752F48D4AA57E___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
