#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MemberInfo; }

#define CLASS_1_8D36F482C2069D06___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x96AAF50)
#define CLASS_1_8D36F482C2069D06___C__CTOR_OFFSET UNITYSDK_OFFSET(0x96AAF80)
#define CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_0_OFFSET UNITYSDK_OFFSET(0x96AAF90)
#define CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_1_OFFSET UNITYSDK_OFFSET(0x96AAFF0)
#define CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_2_OFFSET UNITYSDK_OFFSET(0x96AB020)

inline static constexpr unsigned int Class_1_8D36F482C2069D06___c_TypeDefinitionIndex = 61947;

class Class_1_8D36F482C2069D06___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D36F482C2069D06___c_TypeDefinitionIndex)->GetStaticField(0x66840);
	}
	static ::Class_1_8D36F482C2069D06___c** StaticGet___9()
	{
		return (::Class_1_8D36F482C2069D06___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D36F482C2069D06___c_TypeDefinitionIndex)->GetStaticField(0x66848);
	}
	static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>** StaticGet___9__1_2()
	{
		return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D36F482C2069D06___c_TypeDefinitionIndex)->GetStaticField(0x66850);
	}
	static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D36F482C2069D06___c_TypeDefinitionIndex)->GetStaticField(0x66858);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D36F482C2069D06___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D36F482C2069D06___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetMembersToParse_b__1_0(::System::Reflection::MemberInfo* m)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_0_OFFSET))(this, m);
	}

	::System::Int32 __GetMembersToParse_b__1_1(::System::Reflection::MemberInfo* m)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_1_OFFSET))(this, m);
	}

	::System::Reflection::MemberInfo* __GetMembersToParse_b__1_2(::System::Reflection::MemberInfo* m)
	{
		return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8D36F482C2069D06___C___GETMEMBERSTOPARSE_B__1_2_OFFSET))(this, m);
	}
};
