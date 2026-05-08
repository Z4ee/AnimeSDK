#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B0C501EE14648A58;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8BEEC9EDE4EA3320___C_METHOD_1_784F320F3AD1601F_OFFSET UNITYSDK_OFFSET(0x13F63D70)
#define CLASS_1_8BEEC9EDE4EA3320___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F63D20)
#define CLASS_1_8BEEC9EDE4EA3320___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13F63D60)

inline static constexpr unsigned int Class_1_8BEEC9EDE4EA3320___c_TypeDefinitionIndex = 72182;

class Class_1_8BEEC9EDE4EA3320___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_B0C501EE14648A58*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_B0C501EE14648A58*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BEEC9EDE4EA3320___c_TypeDefinitionIndex)->GetStaticField(0x3E430);
	}
	static ::Class_1_8BEEC9EDE4EA3320___c** StaticGet___9()
	{
		return (::Class_1_8BEEC9EDE4EA3320___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BEEC9EDE4EA3320___c_TypeDefinitionIndex)->GetStaticField(0x3E438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BEEC9EDE4EA3320___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BEEC9EDE4EA3320___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_784F320F3AD1601F(::Class_1_B0C501EE14648A58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B0C501EE14648A58*))((::PBYTE)hIl2Cpp + CLASS_1_8BEEC9EDE4EA3320___C_METHOD_1_784F320F3AD1601F_OFFSET))(this, a1);
	}
};
