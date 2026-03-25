#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_648;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_D6EA30CB1364E86C_1_METHOD_1_2D211D732C8B306F_OFFSET UNITYSDK_OFFSET(0xD187A70)
#define CLASS_1_D6EA30CB1364E86C_1_METHOD_1_767381C2817318AF_OFFSET UNITYSDK_OFFSET(0xD187AC0)
#define CLASS_1_D6EA30CB1364E86C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD188050)

inline static constexpr unsigned int Class_1_D6EA30CB1364E86C_1_TypeDefinitionIndex = 53237;

class Class_1_D6EA30CB1364E86C_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2D211D732C8B306F(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C_1_METHOD_1_2D211D732C8B306F_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_648* Method_1_767381C2817318AF(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_0_16E4307DCC419505_648*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C_1_METHOD_1_767381C2817318AF_OFFSET))(this, a1);
	}
};
