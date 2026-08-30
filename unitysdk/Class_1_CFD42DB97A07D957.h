#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_CFD42DB97A07D957_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x17CA29D0)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0x17CA2E80)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x17CA2DC0)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17CA2990)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x17CA2CF0)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17CA2E20)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x17CA2A20)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x17CA2C80)
#define CLASS_1_CFD42DB97A07D957__CTOR_OFFSET UNITYSDK_OFFSET(0x17CA2980)

inline static constexpr unsigned int Class_1_CFD42DB97A07D957_TypeDefinitionIndex = 66433;

class Class_1_CFD42DB97A07D957 : public ::System::Object
{
public:
	::RPG::Client::UIController* JONJFNGDLKI; // 0x10
	::System::Action* CIFOILLJFNF; // 0x18
	::System::Boolean CIFLCHMOJGE; // 0x20
	::System::UInt32 HMBNCIFGFEO; // 0x24

	::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_68805403250CC013_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_256B6E165124982E_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
