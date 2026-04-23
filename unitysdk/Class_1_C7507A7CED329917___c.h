#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_C7507A7CED329917___C__BORROW_B__4_1_OFFSET UNITYSDK_OFFSET(0x9878D50)
#define CLASS_1_C7507A7CED329917___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9878D10)
#define CLASS_1_C7507A7CED329917___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9878D40)
#define CLASS_1_C7507A7CED329917___C___ONPRELOADTIMELINEASSETFINISH_B__31_0_OFFSET UNITYSDK_OFFSET(0x9878D80)

inline static constexpr unsigned int Class_1_C7507A7CED329917___c_TypeDefinitionIndex = 45193;

class Class_1_C7507A7CED329917___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_36264895A759B0FF*>** StaticGet___9__31_0()
	{
		return (::System::Predicate_1<::Class_1_36264895A759B0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7507A7CED329917___c_TypeDefinitionIndex)->GetStaticField(0x116B0);
	}
	static ::Class_1_C7507A7CED329917___c** StaticGet___9()
	{
		return (::Class_1_C7507A7CED329917___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7507A7CED329917___c_TypeDefinitionIndex)->GetStaticField(0x116B8);
	}
	static ::System::Predicate_1<::Class_1_36264895A759B0FF*>** StaticGet___9__4_1()
	{
		return (::System::Predicate_1<::Class_1_36264895A759B0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7507A7CED329917___c_TypeDefinitionIndex)->GetStaticField(0x116C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Borrow_b__4_1(::Class_1_36264895A759B0FF* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__BORROW_B__4_1_OFFSET))(this, x);
	}

	::System::Boolean __OnPreloadTimelineAssetFinish_b__31_0(::Class_1_36264895A759B0FF* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C___ONPRELOADTIMELINEASSETFINISH_B__31_0_OFFSET))(this, x);
	}
};
