#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_50A54FE211D87093___C_METHOD_1_69AEC1BEACE4EA4F_OFFSET UNITYSDK_OFFSET(0x132ADD50)
#define CLASS_2_50A54FE211D87093___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x132ADD00)
#define CLASS_2_50A54FE211D87093___C__CTOR_OFFSET UNITYSDK_OFFSET(0x132ADD40)

inline static constexpr unsigned int Class_2_50A54FE211D87093___c_TypeDefinitionIndex = 40838;

class Class_2_50A54FE211D87093___c : public ::System::Object
{
public:
	static ::Class_2_50A54FE211D87093___c** StaticGet___9()
	{
		return (::Class_2_50A54FE211D87093___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_50A54FE211D87093___c_TypeDefinitionIndex)->GetStaticField(0x3B870);
	}
	static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_50A54FE211D87093___c_TypeDefinitionIndex)->GetStaticField(0x3B878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_50A54FE211D87093___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50A54FE211D87093___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_69AEC1BEACE4EA4F(::Class_1_E9529ED64113E4E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + CLASS_2_50A54FE211D87093___C_METHOD_1_69AEC1BEACE4EA4F_OFFSET))(this, a1);
	}
};
