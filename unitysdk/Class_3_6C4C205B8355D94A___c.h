#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_806C38C50E9F30A7;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_6C4C205B8355D94A___C_METHOD_1_9EA69478762B570A_OFFSET UNITYSDK_OFFSET(0xE9675B0)
#define CLASS_3_6C4C205B8355D94A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE967560)
#define CLASS_3_6C4C205B8355D94A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE9675A0)

inline static constexpr unsigned int Class_3_6C4C205B8355D94A___c_TypeDefinitionIndex = 48246;

class Class_3_6C4C205B8355D94A___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_806C38C50E9F30A7*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_806C38C50E9F30A7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6C4C205B8355D94A___c_TypeDefinitionIndex)->GetStaticField(0x3AEC0);
	}
	static ::Class_3_6C4C205B8355D94A___c** StaticGet___9()
	{
		return (::Class_3_6C4C205B8355D94A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6C4C205B8355D94A___c_TypeDefinitionIndex)->GetStaticField(0x3AEC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9EA69478762B570A(::Class_3_806C38C50E9F30A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_806C38C50E9F30A7*))((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A___C_METHOD_1_9EA69478762B570A_OFFSET))(this, a1);
	}
};
