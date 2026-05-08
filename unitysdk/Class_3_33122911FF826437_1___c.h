#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_33122911FF826437_1___C_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xE4CD6B0)
#define CLASS_3_33122911FF826437_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4CD660)
#define CLASS_3_33122911FF826437_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE4CD6A0)

inline static constexpr unsigned int Class_3_33122911FF826437_1___c_TypeDefinitionIndex = 55165;

class Class_3_33122911FF826437_1___c : public ::System::Object
{
public:
	static ::Class_3_33122911FF826437_1___c** StaticGet___9()
	{
		return (::Class_3_33122911FF826437_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_33122911FF826437_1___c_TypeDefinitionIndex)->GetStaticField(0x33EB0);
	}
	static ::System::Action** StaticGet___9__5_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_33122911FF826437_1___c_TypeDefinitionIndex)->GetStaticField(0x33EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_33122911FF826437_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33122911FF826437_1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33122911FF826437_1___C_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}
};
