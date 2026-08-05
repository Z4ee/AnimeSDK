#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_38DE07FB580FE5E9;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_168CE6BD23375D6E___C_METHOD_1_8325A0AF3510E851_OFFSET UNITYSDK_OFFSET(0x14CB67F0)
#define CLASS_2_168CE6BD23375D6E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CB67A0)
#define CLASS_2_168CE6BD23375D6E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CB67E0)

inline static constexpr unsigned int Class_2_168CE6BD23375D6E___c_TypeDefinitionIndex = 83470;

class Class_2_168CE6BD23375D6E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_38DE07FB580FE5E9*>** StaticGet___9__25_0()
	{
		return (::System::Action_1<::Class_1_38DE07FB580FE5E9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_168CE6BD23375D6E___c_TypeDefinitionIndex)->GetStaticField(0x3F030);
	}
	static ::Class_2_168CE6BD23375D6E___c** StaticGet___9()
	{
		return (::Class_2_168CE6BD23375D6E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_168CE6BD23375D6E___c_TypeDefinitionIndex)->GetStaticField(0x3F038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_168CE6BD23375D6E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_168CE6BD23375D6E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8325A0AF3510E851(::Class_1_38DE07FB580FE5E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38DE07FB580FE5E9*))((::PBYTE)hIl2Cpp + CLASS_2_168CE6BD23375D6E___C_METHOD_1_8325A0AF3510E851_OFFSET))(this, a1);
	}
};
