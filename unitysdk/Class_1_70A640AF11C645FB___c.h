#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_70A640AF11C645FB___C__BORROW_B__4_1_OFFSET UNITYSDK_OFFSET(0x13C60360)
#define CLASS_1_70A640AF11C645FB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C60320)
#define CLASS_1_70A640AF11C645FB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C60350)
#define CLASS_1_70A640AF11C645FB___C___ONPRELOADTIMELINEASSETFINISH_B__31_0_OFFSET UNITYSDK_OFFSET(0x13C60390)

inline static constexpr unsigned int Class_1_70A640AF11C645FB___c_TypeDefinitionIndex = 45750;

class Class_1_70A640AF11C645FB___c : public ::System::Object
{
public:
	static ::Class_1_70A640AF11C645FB___c** StaticGet___9()
	{
		return (::Class_1_70A640AF11C645FB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70A640AF11C645FB___c_TypeDefinitionIndex)->GetStaticField(0x65550);
	}
	static ::System::Predicate_1<::Class_1_36264895A759B0FF*>** StaticGet___9__31_0()
	{
		return (::System::Predicate_1<::Class_1_36264895A759B0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70A640AF11C645FB___c_TypeDefinitionIndex)->GetStaticField(0x65558);
	}
	static ::System::Predicate_1<::Class_1_36264895A759B0FF*>** StaticGet___9__4_1()
	{
		return (::System::Predicate_1<::Class_1_36264895A759B0FF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70A640AF11C645FB___c_TypeDefinitionIndex)->GetStaticField(0x65560);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70A640AF11C645FB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70A640AF11C645FB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Borrow_b__4_1(::Class_1_36264895A759B0FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_70A640AF11C645FB___C__BORROW_B__4_1_OFFSET))(this, a1);
	}

	::System::Boolean __OnPreloadTimelineAssetFinish_b__31_0(::Class_1_36264895A759B0FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_70A640AF11C645FB___C___ONPRELOADTIMELINEASSETFINISH_B__31_0_OFFSET))(this, a1);
	}
};
