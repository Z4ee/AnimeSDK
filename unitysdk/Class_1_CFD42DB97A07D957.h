#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_CFD42DB97A07D957_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x1562BF80)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0x1562C430)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x1562C370)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1562BF40)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x1562C2A0)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1562C3D0)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x1562BFD0)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1562C230)
#define CLASS_1_CFD42DB97A07D957__CTOR_OFFSET UNITYSDK_OFFSET(0x1562BF30)

inline static constexpr unsigned int Class_1_CFD42DB97A07D957_TypeDefinitionIndex = 63448;

class Class_1_CFD42DB97A07D957 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24

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
