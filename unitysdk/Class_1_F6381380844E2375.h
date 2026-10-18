#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }

#define CLASS_1_F6381380844E2375_METHOD_1_740566D9C76EAE72_OFFSET UNITYSDK_OFFSET(0x1EBBE150)
#define CLASS_1_F6381380844E2375_SET_OFFSET UNITYSDK_OFFSET(0x1EBBDF50)
#define CLASS_1_F6381380844E2375__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBE310)

inline static constexpr unsigned int Class_1_F6381380844E2375_TypeDefinitionIndex = 35215;

class Class_1_F6381380844E2375 : public ::System::Object
{
public:
	::System::Int32 JOGHMLFLGAL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6381380844E2375__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6381380844E2375_SET_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_740566D9C76EAE72(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_F6381380844E2375_METHOD_1_740566D9C76EAE72_OFFSET))(a1);
	}
};
