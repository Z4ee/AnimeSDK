#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MemberInfo; }

#define CLASS_1_B01DAA8B2155ABFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ECA7F0)
#define CLASS_1_B01DAA8B2155ABFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECA820)
#define CLASS_1_B01DAA8B2155ABFF___C___GETMEMBERSTOPARSE_B__1_0_OFFSET UNITYSDK_OFFSET(0x17ECA830)
#define CLASS_1_B01DAA8B2155ABFF___C___GETMEMBERSTOPARSE_B__1_1_OFFSET UNITYSDK_OFFSET(0x17ECABA0)
#define CLASS_1_B01DAA8B2155ABFF___C___GETMEMBERSTOPARSE_B__1_2_OFFSET UNITYSDK_OFFSET(0x17ECAC60)
#define CLASS_1_B01DAA8B2155ABFF___C___GETMEMBERSTOPARSE_B__1_3_OFFSET UNITYSDK_OFFSET(0x17ECAC90)

inline static constexpr unsigned int Class_1_B01DAA8B2155ABFF___c_TypeDefinitionIndex = 67237;

class Class_1_B01DAA8B2155ABFF___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B01DAA8B2155ABFF___c_TypeDefinitionIndex)->GetStaticField(0x6ED0);
	}
	static ::System::Func_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B01DAA8B2155ABFF___c_TypeDefinitionIndex)->GetStaticField(0x6ED8);
	}
	static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>** StaticGet___9__1_3()
	{
		return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B01DAA8B2155ABFF___c_TypeDefinitionIndex)->GetStaticField(0x6EE0);
	}
	static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>** StaticGet___9__1_2()
	{
		return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B01DAA8B2155ABFF___c_TypeDefinitionIndex)->GetStaticField(0x6EE8);
	}
	static ::Class_1_B01DAA8B2155ABFF___c** StaticGet___9()
	{
		return (::Class_1_B01DAA8B2155ABFF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B01DAA8B2155ABFF___c_TypeDefinitionIndex)->GetStaticField(0x6EF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B01DAA8B2155ABFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B01DAA8B2155ABFF___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>* __GetMembersToParse_b__1_0(::System::Type* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_B01DAA8B2155ABFF___C___GETMEMBERSTOPARSE_B__1_0_OFFSET))(this, a1);
	}

	::System::Boolean __GetMembersToParse_b__1_1(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B01DAA8B2155ABFF___C___GETMEMBERSTOPARSE_B__1_1_OFFSET))(this, a1);
	}

	::System::Int32 __GetMembersToParse_b__1_2(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B01DAA8B2155ABFF___C___GETMEMBERSTOPARSE_B__1_2_OFFSET))(this, a1);
	}

	::System::Reflection::MemberInfo* __GetMembersToParse_b__1_3(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B01DAA8B2155ABFF___C___GETMEMBERSTOPARSE_B__1_3_OFFSET))(this, a1);
	}
};
