#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_11.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_8BDC6D861E060A6F_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xB0D5F90)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0xB0D64E0)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0xB0D6420)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB0D5F50)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xB0D6350)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB0D6480)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0xB0D5FE0)
#define CLASS_1_8BDC6D861E060A6F_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB0D62E0)
#define CLASS_1_8BDC6D861E060A6F__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D5F40)

inline static constexpr unsigned int Class_1_8BDC6D861E060A6F_TypeDefinitionIndex = 66397;

class Class_1_8BDC6D861E060A6F : public ::System::Object
{
public:
	::RPG::Client::UIController* JONJFNGDLKI; // 0x10
	::System::Action* CIFOILLJFNF; // 0x18
	::Enum_3_0A3761FE34514D6C_11 NJADNHMJJBC; // 0x20
	::System::UInt32 HMBNCIFGFEO; // 0x24
	::System::Boolean CIFLCHMOJGE; // 0x28

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
