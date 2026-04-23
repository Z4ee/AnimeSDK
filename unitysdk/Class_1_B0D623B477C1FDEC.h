#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_B0D623B477C1FDEC_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9302940)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9302820)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x9302980)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_BF3A97FF800F0C24_1_OFFSET UNITYSDK_OFFSET(0x9302B10)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0x9302A70)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9302AD0)
#define CLASS_1_B0D623B477C1FDEC_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x9302860)
#define CLASS_1_B0D623B477C1FDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x9302810)

inline static constexpr unsigned int Class_1_B0D623B477C1FDEC_TypeDefinitionIndex = 55765;

class Class_1_B0D623B477C1FDEC : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_BF3A97FF800F0C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_BF3A97FF800F0C24_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0D623B477C1FDEC_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
