#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B9D5951434CC70FD;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A0B303CFFFC3A578___C_METHOD_1_29BC902BDD7B23DD_OFFSET UNITYSDK_OFFSET(0x14D044E0)
#define CLASS_3_A0B303CFFFC3A578___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D04490)
#define CLASS_3_A0B303CFFFC3A578___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D044D0)

inline static constexpr unsigned int Class_3_A0B303CFFFC3A578___c_TypeDefinitionIndex = 50010;

class Class_3_A0B303CFFFC3A578___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_B9D5951434CC70FD*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_3_B9D5951434CC70FD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A0B303CFFFC3A578___c_TypeDefinitionIndex)->GetStaticField(0x440E0);
	}
	static ::Class_3_A0B303CFFFC3A578___c** StaticGet___9()
	{
		return (::Class_3_A0B303CFFFC3A578___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A0B303CFFFC3A578___c_TypeDefinitionIndex)->GetStaticField(0x440E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A0B303CFFFC3A578___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0B303CFFFC3A578___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_29BC902BDD7B23DD(::Class_3_B9D5951434CC70FD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B9D5951434CC70FD*))((::PBYTE)hIl2Cpp + CLASS_3_A0B303CFFFC3A578___C_METHOD_1_29BC902BDD7B23DD_OFFSET))(this, a1);
	}
};
