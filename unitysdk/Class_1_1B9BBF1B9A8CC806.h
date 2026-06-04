#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1B9BBF1B9A8CC806_Flags.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1B9BBF1B9A8CC806_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x188BBF70)
#define CLASS_1_1B9BBF1B9A8CC806_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18888FB0)
#define CLASS_1_1B9BBF1B9A8CC806__CTOR_OFFSET UNITYSDK_OFFSET(0x18888E70)

inline static constexpr unsigned int Class_1_1B9BBF1B9A8CC806_TypeDefinitionIndex = 38575;

class Class_1_1B9BBF1B9A8CC806 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt16 Field_1_2; // 0x1C
	::System::UInt16 Field_1_3; // 0x1E
	::System::UInt16 Field_1_4; // 0x20
	::Class_1_1B9BBF1B9A8CC806_Flags Field_1_5; // 0x22

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
