#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_648;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_A6EC17E81FDF5751_METHOD_1_0B85F9E0A7F9A1C8_OFFSET UNITYSDK_OFFSET(0x1190D100)
#define CLASS_1_A6EC17E81FDF5751_METHOD_1_49CB7E17733F3B8F_OFFSET UNITYSDK_OFFSET(0x1190D160)
#define CLASS_1_A6EC17E81FDF5751__CTOR_OFFSET UNITYSDK_OFFSET(0x1190D370)

inline static constexpr unsigned int Class_1_A6EC17E81FDF5751_TypeDefinitionIndex = 53256;

class Class_1_A6EC17E81FDF5751 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6EC17E81FDF5751__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_0B85F9E0A7F9A1C8(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_A6EC17E81FDF5751_METHOD_1_0B85F9E0A7F9A1C8_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_648* Method_1_49CB7E17733F3B8F(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_0_16E4307DCC419505_648*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_A6EC17E81FDF5751_METHOD_1_49CB7E17733F3B8F_OFFSET))(this, a1);
	}
};
