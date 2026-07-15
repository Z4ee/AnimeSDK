#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_30AD95CB781F3EEE___C__BORROW_B__4_1_OFFSET UNITYSDK_OFFSET(0x17A5A650)
#define CLASS_1_30AD95CB781F3EEE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A5A610)
#define CLASS_1_30AD95CB781F3EEE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5A640)
#define CLASS_1_30AD95CB781F3EEE___C___ONPRELOADTIMELINEASSETFINISH_B__32_0_OFFSET UNITYSDK_OFFSET(0x17A5A680)

inline static constexpr unsigned int Class_1_30AD95CB781F3EEE___c_TypeDefinitionIndex = 46689;

class Class_1_30AD95CB781F3EEE___c : public ::System::Object
{
public:
	static ::Class_1_30AD95CB781F3EEE___c** StaticGet___9()
	{
		return (::Class_1_30AD95CB781F3EEE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AD95CB781F3EEE___c_TypeDefinitionIndex)->GetStaticField(0x5F5A0);
	}
	static ::System::Predicate_1<::Class_1_36264895A759B0FF*>** StaticGet___9__4_1()
	{
		return (::System::Predicate_1<::Class_1_36264895A759B0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AD95CB781F3EEE___c_TypeDefinitionIndex)->GetStaticField(0x5F5A8);
	}
	static ::System::Predicate_1<::Class_1_36264895A759B0FF*>** StaticGet___9__32_0()
	{
		return (::System::Predicate_1<::Class_1_36264895A759B0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AD95CB781F3EEE___c_TypeDefinitionIndex)->GetStaticField(0x5F5B0);
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

	::System::Boolean __OnPreloadTimelineAssetFinish_b__32_0(::Class_1_36264895A759B0FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C___ONPRELOADTIMELINEASSETFINISH_B__32_0_OFFSET))(this, a1);
	}
};
