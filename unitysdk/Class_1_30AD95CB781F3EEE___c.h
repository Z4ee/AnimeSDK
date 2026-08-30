#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_30AD95CB781F3EEE___C__BORROW_B__4_1_OFFSET UNITYSDK_OFFSET(0x18DC5570)
#define CLASS_1_30AD95CB781F3EEE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DC5530)
#define CLASS_1_30AD95CB781F3EEE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC5560)
#define CLASS_1_30AD95CB781F3EEE___C___ONPRELOADTIMELINEASSETFINISH_B__33_0_OFFSET UNITYSDK_OFFSET(0x18DC55A0)

inline static constexpr unsigned int Class_1_30AD95CB781F3EEE___c_TypeDefinitionIndex = 48934;

class Class_1_30AD95CB781F3EEE___c : public ::System::Object
{
public:
	static ::Class_1_30AD95CB781F3EEE___c** StaticGet___9()
	{
		return (::Class_1_30AD95CB781F3EEE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AD95CB781F3EEE___c_TypeDefinitionIndex)->GetStaticField(0x60BD0);
	}
	static ::System::Predicate_1<::Class_1_36264895A759B0FF*>** StaticGet___9__4_1()
	{
		return (::System::Predicate_1<::Class_1_36264895A759B0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AD95CB781F3EEE___c_TypeDefinitionIndex)->GetStaticField(0x60BD8);
	}
	static ::System::Predicate_1<::Class_1_36264895A759B0FF*>** StaticGet___9__33_0()
	{
		return (::System::Predicate_1<::Class_1_36264895A759B0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AD95CB781F3EEE___c_TypeDefinitionIndex)->GetStaticField(0x60BE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Borrow_b__4_1(::Class_1_36264895A759B0FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__BORROW_B__4_1_OFFSET))(this, a1);
	}

	::System::Boolean __OnPreloadTimelineAssetFinish_b__33_0(::Class_1_36264895A759B0FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C___ONPRELOADTIMELINEASSETFINISH_B__33_0_OFFSET))(this, a1);
	}
};
