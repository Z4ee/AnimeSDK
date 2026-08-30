#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_F91AD0C5A85E4AFA_34;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }

#define CLASS_1_2EB7A39FDEDDCC31_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1A0CFF00)
#define CLASS_1_2EB7A39FDEDDCC31_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A0CFFC0)
#define CLASS_1_2EB7A39FDEDDCC31_METHOD_1_9032606E5E161A7C_OFFSET UNITYSDK_OFFSET(0x1A0CFDF0)
#define CLASS_1_2EB7A39FDEDDCC31_METHOD_1_9591CF07FDECD273_OFFSET UNITYSDK_OFFSET(0x1A0D0000)
#define CLASS_1_2EB7A39FDEDDCC31__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CFEF0)

inline static constexpr unsigned int Class_1_2EB7A39FDEDDCC31_TypeDefinitionIndex = 74285;

class Class_1_2EB7A39FDEDDCC31 : public ::System::Object
{
public:
	::System::String* GIFMMMMNIAL; // 0x10
	::RPG::Client::TextID OBBLBEDEKLO; // 0x18
	::System::Boolean NIDCNJMNBIB; // 0x28

	::System::Void _ctor(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_2EB7A39FDEDDCC31__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_2EB7A39FDEDDCC31* Method_1_9032606E5E161A7C(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::Class_1_2EB7A39FDEDDCC31*(*)(::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_2EB7A39FDEDDCC31_METHOD_1_9032606E5E161A7C_OFFSET))(a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB7A39FDEDDCC31_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_1_9591CF07FDECD273(::Class_1_F91AD0C5A85E4AFA_34* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_34*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2EB7A39FDEDDCC31_METHOD_1_9591CF07FDECD273_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB7A39FDEDDCC31_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
