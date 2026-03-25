#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_649;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_486ECEF0FA4B91F8_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xDE41230)
#define CLASS_1_486ECEF0FA4B91F8_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xDE41180)
#define CLASS_1_486ECEF0FA4B91F8_METHOD_1_6536EE468ABFB6F7_OFFSET UNITYSDK_OFFSET(0xDE411D0)
#define CLASS_1_486ECEF0FA4B91F8_METHOD_1_A7064B88FDB61D47_OFFSET UNITYSDK_OFFSET(0xDE41270)
#define CLASS_1_486ECEF0FA4B91F8__CTOR_OFFSET UNITYSDK_OFFSET(0xDE41350)

inline static constexpr unsigned int Class_1_486ECEF0FA4B91F8_TypeDefinitionIndex = 53253;

class Class_1_486ECEF0FA4B91F8 : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_486ECEF0FA4B91F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_486ECEF0FA4B91F8_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6536EE468ABFB6F7(::RPG::Client::IAvatarInfoProvider* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_486ECEF0FA4B91F8_METHOD_1_6536EE468ABFB6F7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_486ECEF0FA4B91F8_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_649* Method_1_A7064B88FDB61D47()
	{
		return ((::Class_0_16E4307DCC419505_649*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_486ECEF0FA4B91F8_METHOD_1_A7064B88FDB61D47_OFFSET))(this);
	}
};
