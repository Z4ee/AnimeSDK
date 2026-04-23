#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_D6EA30CB1364E86C_2_METHOD_1_2D211D732C8B306F_OFFSET UNITYSDK_OFFSET(0x10012D80)
#define CLASS_1_D6EA30CB1364E86C_2_METHOD_1_49CB7E17733F3B8F_OFFSET UNITYSDK_OFFSET(0x10012DD0)
#define CLASS_1_D6EA30CB1364E86C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10012FC0)

inline static constexpr unsigned int Class_1_D6EA30CB1364E86C_2_TypeDefinitionIndex = 60372;

class Class_1_D6EA30CB1364E86C_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C_2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2D211D732C8B306F(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C_2_METHOD_1_2D211D732C8B306F_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_747* Method_1_49CB7E17733F3B8F(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_0_16E4307DCC419505_747*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C_2_METHOD_1_49CB7E17733F3B8F_OFFSET))(this, a1);
	}
};
