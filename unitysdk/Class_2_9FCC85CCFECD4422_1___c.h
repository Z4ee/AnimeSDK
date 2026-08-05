#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_9FCC85CCFECD4422_1___C_METHOD_1_C40733C602094507_OFFSET UNITYSDK_OFFSET(0x14540180)
#define CLASS_2_9FCC85CCFECD4422_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14540130)
#define CLASS_2_9FCC85CCFECD4422_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14540170)

inline static constexpr unsigned int Class_2_9FCC85CCFECD4422_1___c_TypeDefinitionIndex = 73904;

class Class_2_9FCC85CCFECD4422_1___c : public ::System::Object
{
public:
	static ::Class_2_9FCC85CCFECD4422_1___c** StaticGet___9()
	{
		return (::Class_2_9FCC85CCFECD4422_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9FCC85CCFECD4422_1___c_TypeDefinitionIndex)->GetStaticField(0x34920);
	}
	static ::System::Func_5<::Class_2_1824EF69C8E376A3*, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32, ::System::Int32, ::System::Boolean>** StaticGet___9__36_0()
	{
		return (::System::Func_5<::Class_2_1824EF69C8E376A3*, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9FCC85CCFECD4422_1___c_TypeDefinitionIndex)->GetStaticField(0x34928);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C40733C602094507(::Class_2_1824EF69C8E376A3* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_1___C_METHOD_1_C40733C602094507_OFFSET))(this, a1, a2, a3, a4);
	}
};
