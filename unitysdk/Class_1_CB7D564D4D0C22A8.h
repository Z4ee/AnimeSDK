#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_CB7D564D4D0C22A8_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xDE399F0)
#define CLASS_1_CB7D564D4D0C22A8_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xDE398D0)
#define CLASS_1_CB7D564D4D0C22A8_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xDE39A30)
#define CLASS_1_CB7D564D4D0C22A8_METHOD_1_BF3A97FF800F0C24_1_OFFSET UNITYSDK_OFFSET(0xDE39BC0)
#define CLASS_1_CB7D564D4D0C22A8_METHOD_1_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0xDE39B20)
#define CLASS_1_CB7D564D4D0C22A8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDE39B80)
#define CLASS_1_CB7D564D4D0C22A8_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0xDE39910)
#define CLASS_1_CB7D564D4D0C22A8__CTOR_OFFSET UNITYSDK_OFFSET(0xDE398C0)

inline static constexpr unsigned int Class_1_CB7D564D4D0C22A8_TypeDefinitionIndex = 48969;

class Class_1_CB7D564D4D0C22A8 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7D564D4D0C22A8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7D564D4D0C22A8_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7D564D4D0C22A8_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7D564D4D0C22A8_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CB7D564D4D0C22A8_METHOD_1_BF3A97FF800F0C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7D564D4D0C22A8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CB7D564D4D0C22A8_METHOD_1_BF3A97FF800F0C24_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7D564D4D0C22A8_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
