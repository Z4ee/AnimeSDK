#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_8A64642F183CF094_1;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }

#define CLASS_1_2EB7A39FDEDDCC31_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x8BC9AC0)
#define CLASS_1_2EB7A39FDEDDCC31_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8BC9B80)
#define CLASS_1_2EB7A39FDEDDCC31_METHOD_1_9032606E5E161A7C_OFFSET UNITYSDK_OFFSET(0x8BC99B0)
#define CLASS_1_2EB7A39FDEDDCC31_METHOD_1_9591CF07FDECD273_OFFSET UNITYSDK_OFFSET(0x8BC9BC0)
#define CLASS_1_2EB7A39FDEDDCC31__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC9AB0)

inline static constexpr unsigned int Class_1_2EB7A39FDEDDCC31_TypeDefinitionIndex = 61153;

class Class_1_2EB7A39FDEDDCC31 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::RPG::Client::TextID Field_1_1; // 0x20

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

	::System::Void Method_1_9591CF07FDECD273(::Class_1_8A64642F183CF094_1* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A64642F183CF094_1*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2EB7A39FDEDDCC31_METHOD_1_9591CF07FDECD273_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB7A39FDEDDCC31_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
