#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_11.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_8BDC6D861E060A6F_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xB0D4870)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0xB0D4DC0)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0xB0D4D00)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB0D4830)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xB0D4C30)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB0D4D60)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0xB0D48C0)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB0D4BC0)
#define CLASS_1_8BDC6D861E060A6F__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D4820)

inline static constexpr unsigned int Class_1_8BDC6D861E060A6F_TypeDefinitionIndex = 66397;

class Class_1_8BDC6D861E060A6F : public ::System::Object
{
public:
	::System::Action* CIFOILLJFNF; // 0x10
	::RPG::Client::UIController* JONJFNGDLKI; // 0x18
	::System::UInt32 HMBNCIFGFEO; // 0x20
	::System::Boolean CIFLCHMOJGE; // 0x24
	::Enum_3_0A3761FE34514D6C_11 NJADNHMJJBC; // 0x28

	::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2, ::Enum_3_0A3761FE34514D6C_11 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::Enum_3_0A3761FE34514D6C_11))((::PBYTE)hIl2Cpp + CLASS_1_8BDC6D861E060A6F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BDC6D861E060A6F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8BDC6D861E060A6F_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BDC6D861E060A6F_METHOD_1_674F73509924BD16_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BDC6D861E060A6F_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8BDC6D861E060A6F_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BDC6D861E060A6F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8BDC6D861E060A6F_METHOD_1_256B6E165124982E_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BDC6D861E060A6F_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
