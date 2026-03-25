#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_648;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_D6EA30CB1364E86C_METHOD_1_2D211D732C8B306F_OFFSET UNITYSDK_OFFSET(0x106B2190)
#define CLASS_1_D6EA30CB1364E86C_METHOD_1_87A626AB959FADA7_OFFSET UNITYSDK_OFFSET(0x106B21E0)
#define CLASS_1_D6EA30CB1364E86C__CTOR_OFFSET UNITYSDK_OFFSET(0x106B2620)

inline static constexpr unsigned int Class_1_D6EA30CB1364E86C_TypeDefinitionIndex = 53235;

class Class_1_D6EA30CB1364E86C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2D211D732C8B306F(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C_METHOD_1_2D211D732C8B306F_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_648* Method_1_87A626AB959FADA7(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_0_16E4307DCC419505_648*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_D6EA30CB1364E86C_METHOD_1_87A626AB959FADA7_OFFSET))(this, a1);
	}
};
