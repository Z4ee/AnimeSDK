#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_98746D5BD2ECE306_METHOD_1_370953114C581C27_OFFSET UNITYSDK_OFFSET(0xAFF0300)
#define CLASS_1_98746D5BD2ECE306_METHOD_1_49CB7E17733F3B8F_OFFSET UNITYSDK_OFFSET(0xAFF04D0)
#define CLASS_1_98746D5BD2ECE306__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF06C0)

inline static constexpr unsigned int Class_1_98746D5BD2ECE306_TypeDefinitionIndex = 60370;

class Class_1_98746D5BD2ECE306 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98746D5BD2ECE306__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_370953114C581C27(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_98746D5BD2ECE306_METHOD_1_370953114C581C27_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_747* Method_1_49CB7E17733F3B8F(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_0_16E4307DCC419505_747*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_98746D5BD2ECE306_METHOD_1_49CB7E17733F3B8F_OFFSET))(this, a1);
	}
};
