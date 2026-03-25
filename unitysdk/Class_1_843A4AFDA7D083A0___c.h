#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6C555725EE740F88;
class Class_1_D7976A8B64BD43B9;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_843A4AFDA7D083A0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B3AF40)
#define CLASS_1_843A4AFDA7D083A0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B3AF70)
#define CLASS_1_843A4AFDA7D083A0___C___TRYADDSHOWDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0x10B3AFC0)
#define CLASS_1_843A4AFDA7D083A0___C___UPDATEENTITYMODIFIERLIST_B__5_0_OFFSET UNITYSDK_OFFSET(0x10B3AF80)
#define CLASS_1_843A4AFDA7D083A0___C___UPDATEENTITYMODIFIERLIST_B__5_1_OFFSET UNITYSDK_OFFSET(0x10B3AFA0)

inline static constexpr unsigned int Class_1_843A4AFDA7D083A0___c_TypeDefinitionIndex = 59025;

class Class_1_843A4AFDA7D083A0___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_6C555725EE740F88*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_1_6C555725EE740F88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_843A4AFDA7D083A0___c_TypeDefinitionIndex)->GetStaticField(0x478D0);
	}
	static ::System::Comparison_1<::Class_1_D7976A8B64BD43B9*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::Class_1_D7976A8B64BD43B9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_843A4AFDA7D083A0___c_TypeDefinitionIndex)->GetStaticField(0x478D8);
	}
	static ::Class_1_843A4AFDA7D083A0___c** StaticGet___9()
	{
		return (::Class_1_843A4AFDA7D083A0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_843A4AFDA7D083A0___c_TypeDefinitionIndex)->GetStaticField(0x478E0);
	}
	static ::System::Comparison_1<::Class_1_D7976A8B64BD43B9*>** StaticGet___9__5_1()
	{
		return (::System::Comparison_1<::Class_1_D7976A8B64BD43B9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_843A4AFDA7D083A0___c_TypeDefinitionIndex)->GetStaticField(0x478E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __UpdateEntityModifierList_b__5_0(::Class_1_D7976A8B64BD43B9* lhs, ::Class_1_D7976A8B64BD43B9* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D7976A8B64BD43B9*, ::Class_1_D7976A8B64BD43B9*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C___UPDATEENTITYMODIFIERLIST_B__5_0_OFFSET))(this, lhs, rhs);
	}

	::System::Int32 __UpdateEntityModifierList_b__5_1(::Class_1_D7976A8B64BD43B9* lhs, ::Class_1_D7976A8B64BD43B9* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D7976A8B64BD43B9*, ::Class_1_D7976A8B64BD43B9*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C___UPDATEENTITYMODIFIERLIST_B__5_1_OFFSET))(this, lhs, rhs);
	}

	::System::Int32 __TryAddShowData_b__9_0(::Class_1_6C555725EE740F88* lhs, ::Class_1_6C555725EE740F88* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_6C555725EE740F88*, ::Class_1_6C555725EE740F88*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C___TRYADDSHOWDATA_B__9_0_OFFSET))(this, lhs, rhs);
	}
};
