#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1B9BBF1B9A8CC806_Flags.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1B9BBF1B9A8CC806_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1409EF50)
#define CLASS_1_1B9BBF1B9A8CC806_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x14067790)
#define CLASS_1_1B9BBF1B9A8CC806__CTOR_OFFSET UNITYSDK_OFFSET(0x140676E0)

inline static constexpr unsigned int Class_1_1B9BBF1B9A8CC806_TypeDefinitionIndex = 40256;

class Class_1_1B9BBF1B9A8CC806 : public ::System::Object
{
public:
	::System::String* MEBGACKEOOG; // 0x10
	::System::UInt32 MPOOGFEJOOF; // 0x18
	::System::UInt16 ADLIHHPHHLG; // 0x1C
	::System::UInt16 DGDINKFBOID; // 0x1E
	::Class_1_1B9BBF1B9A8CC806_Flags FNPGDNFLMPC; // 0x20
	::System::UInt16 ABNPHONMCEP; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B9BBF1B9A8CC806__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B9BBF1B9A8CC806_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B9BBF1B9A8CC806_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
