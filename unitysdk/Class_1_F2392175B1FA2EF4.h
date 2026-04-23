#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_F2392175B1FA2EF4_METHOD_1_49CB7E17733F3B8F_OFFSET UNITYSDK_OFFSET(0x118F9A80)
#define CLASS_1_F2392175B1FA2EF4_METHOD_1_703969E2C1308F98_OFFSET UNITYSDK_OFFSET(0x118F9930)
#define CLASS_1_F2392175B1FA2EF4__CTOR_OFFSET UNITYSDK_OFFSET(0x118F9C90)

inline static constexpr unsigned int Class_1_F2392175B1FA2EF4_TypeDefinitionIndex = 60385;

class Class_1_F2392175B1FA2EF4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2392175B1FA2EF4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_703969E2C1308F98(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_F2392175B1FA2EF4_METHOD_1_703969E2C1308F98_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_747* Method_1_49CB7E17733F3B8F(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_0_16E4307DCC419505_747*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_F2392175B1FA2EF4_METHOD_1_49CB7E17733F3B8F_OFFSET))(this, a1);
	}
};
