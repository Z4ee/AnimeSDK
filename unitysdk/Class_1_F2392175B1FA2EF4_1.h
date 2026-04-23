#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_F2392175B1FA2EF4_1_METHOD_1_49CB7E17733F3B8F_OFFSET UNITYSDK_OFFSET(0x1002CDE0)
#define CLASS_1_F2392175B1FA2EF4_1_METHOD_1_7A9EE6E4B8F1006C_OFFSET UNITYSDK_OFFSET(0x1002CC80)
#define CLASS_1_F2392175B1FA2EF4_1_METHOD_1_D50FACBE4CA7FEAA_OFFSET UNITYSDK_OFFSET(0x1002CB30)
#define CLASS_1_F2392175B1FA2EF4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1002CFF0)

inline static constexpr unsigned int Class_1_F2392175B1FA2EF4_1_TypeDefinitionIndex = 60387;

class Class_1_F2392175B1FA2EF4_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2392175B1FA2EF4_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D50FACBE4CA7FEAA(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_F2392175B1FA2EF4_1_METHOD_1_D50FACBE4CA7FEAA_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_747* Method_1_49CB7E17733F3B8F(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_0_16E4307DCC419505_747*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_F2392175B1FA2EF4_1_METHOD_1_49CB7E17733F3B8F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7A9EE6E4B8F1006C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2392175B1FA2EF4_1_METHOD_1_7A9EE6E4B8F1006C_OFFSET))(this);
	}
};
