#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9465CC52E1CFB15A;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_02E31C7F1CFE27A7___C_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x156D5D90)
#define CLASS_4_02E31C7F1CFE27A7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156D5D40)
#define CLASS_4_02E31C7F1CFE27A7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156D5D80)

inline static constexpr unsigned int Class_4_02E31C7F1CFE27A7___c_TypeDefinitionIndex = 59553;

class Class_4_02E31C7F1CFE27A7___c : public ::System::Object
{
public:
	static ::Class_4_02E31C7F1CFE27A7___c** StaticGet___9()
	{
		return (::Class_4_02E31C7F1CFE27A7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_02E31C7F1CFE27A7___c_TypeDefinitionIndex)->GetStaticField(0x42D30);
	}
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_02E31C7F1CFE27A7___c_TypeDefinitionIndex)->GetStaticField(0x42D38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_02E31C7F1CFE27A7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_02E31C7F1CFE27A7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9D938B6A30770AD(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_02E31C7F1CFE27A7___C_METHOD_1_E9D938B6A30770AD_OFFSET))(this, a1);
	}
};
