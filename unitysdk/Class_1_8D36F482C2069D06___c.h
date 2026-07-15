#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MemberInfo; }

#define CLASS_1_8D36F482C2069D06___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1870C420)
#define CLASS_1_8D36F482C2069D06___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1870C450)
#define CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1870C460)
#define CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_1_OFFSET UNITYSDK_OFFSET(0x1870C520)
#define CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_2_OFFSET UNITYSDK_OFFSET(0x1870C550)

inline static constexpr unsigned int Class_1_8D36F482C2069D06___c_TypeDefinitionIndex = 64247;

class Class_1_8D36F482C2069D06___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D36F482C2069D06___c_TypeDefinitionIndex)->GetStaticField(0x5DD20);
	}
	static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D36F482C2069D06___c_TypeDefinitionIndex)->GetStaticField(0x5DD28);
	}
	static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>** StaticGet___9__1_2()
	{
		return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D36F482C2069D06___c_TypeDefinitionIndex)->GetStaticField(0x5DD30);
	}
	static ::Class_1_8D36F482C2069D06___c** StaticGet___9()
	{
		return (::Class_1_8D36F482C2069D06___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D36F482C2069D06___c_TypeDefinitionIndex)->GetStaticField(0x5DD38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D36F482C2069D06___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D36F482C2069D06___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetMembersToParse_b__1_0(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_0_OFFSET))(this, a1);
	}

	::System::Int32 __GetMembersToParse_b__1_1(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_1_OFFSET))(this, a1);
	}

	::System::Reflection::MemberInfo* __GetMembersToParse_b__1_2(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_2_OFFSET))(this, a1);
	}
};
