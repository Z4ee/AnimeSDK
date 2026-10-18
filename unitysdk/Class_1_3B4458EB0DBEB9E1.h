#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }

#define CLASS_1_3B4458EB0DBEB9E1_METHOD_1_0DFC48556228982A_1_OFFSET UNITYSDK_OFFSET(0x1EBEBCA0)
#define CLASS_1_3B4458EB0DBEB9E1_METHOD_1_0DFC48556228982A_OFFSET UNITYSDK_OFFSET(0x1EBEBAE0)
#define CLASS_1_3B4458EB0DBEB9E1_SET_OFFSET UNITYSDK_OFFSET(0x1EBEB950)
#define CLASS_1_3B4458EB0DBEB9E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEBD20)

inline static constexpr unsigned int Class_1_3B4458EB0DBEB9E1_TypeDefinitionIndex = 35214;

class Class_1_3B4458EB0DBEB9E1 : public ::System::Object
{
public:
	::System::UInt32 NCKKCDFPCMF; // 0x10
	::System::UInt32 GILCAMPLLLN; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B4458EB0DBEB9E1__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3B4458EB0DBEB9E1_SET_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_0DFC48556228982A(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::UInt32(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_3B4458EB0DBEB9E1_METHOD_1_0DFC48556228982A_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_0DFC48556228982A_1(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::UInt32(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_3B4458EB0DBEB9E1_METHOD_1_0DFC48556228982A_1_OFFSET))(a1);
	}
};
