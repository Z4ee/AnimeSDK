#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_33122911FF826437___C_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x17735850)
#define CLASS_3_33122911FF826437___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17735800)
#define CLASS_3_33122911FF826437___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17735840)

inline static constexpr unsigned int Class_3_33122911FF826437___c_TypeDefinitionIndex = 70302;

class Class_3_33122911FF826437___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_33122911FF826437___c_TypeDefinitionIndex)->GetStaticField(0x43FE0);
	}
	static ::Class_3_33122911FF826437___c** StaticGet___9()
	{
		return (::Class_3_33122911FF826437___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_33122911FF826437___c_TypeDefinitionIndex)->GetStaticField(0x43FE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_33122911FF826437___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33122911FF826437___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33122911FF826437___C_METHOD_1_5176DC743E478510_OFFSET))(this);
	}
};
