#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_7824092F65A8B931___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x153EC5B0)
#define CLASS_1_7824092F65A8B931___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x153EC560)
#define CLASS_1_7824092F65A8B931___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153EC5A0)

inline static constexpr unsigned int Class_1_7824092F65A8B931___c_TypeDefinitionIndex = 44491;

class Class_1_7824092F65A8B931___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__72_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7824092F65A8B931___c_TypeDefinitionIndex)->GetStaticField(0x3E6D0);
	}
	static ::Class_1_7824092F65A8B931___c** StaticGet___9()
	{
		return (::Class_1_7824092F65A8B931___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7824092F65A8B931___c_TypeDefinitionIndex)->GetStaticField(0x3E6D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7824092F65A8B931___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7824092F65A8B931___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7824092F65A8B931___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
