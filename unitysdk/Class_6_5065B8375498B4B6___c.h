#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_6_5065B8375498B4B6___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x110EF4F0)
#define CLASS_6_5065B8375498B4B6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x110EF4A0)
#define CLASS_6_5065B8375498B4B6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x110EF4E0)

inline static constexpr unsigned int Class_6_5065B8375498B4B6___c_TypeDefinitionIndex = 48795;

class Class_6_5065B8375498B4B6___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__3_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_6_5065B8375498B4B6___c_TypeDefinitionIndex)->GetStaticField(0x3BBC0);
	}
	static ::Class_6_5065B8375498B4B6___c** StaticGet___9()
	{
		return (::Class_6_5065B8375498B4B6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_6_5065B8375498B4B6___c_TypeDefinitionIndex)->GetStaticField(0x3BBC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_6_5065B8375498B4B6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_5065B8375498B4B6___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_5065B8375498B4B6___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
