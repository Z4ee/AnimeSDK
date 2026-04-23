#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_CFD42DB97A07D957_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xCD56F10)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xCD571B0)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCD56ED0)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xCD56F60)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xCD57340)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xCD571F0)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_BF3A97FF800F0C24_1_OFFSET UNITYSDK_OFFSET(0xCD57390)
#define CLASS_1_CFD42DB97A07D957_METHOD_1_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0xCD572E0)
#define CLASS_1_CFD42DB97A07D957__CTOR_OFFSET UNITYSDK_OFFSET(0xCD56EC0)

inline static constexpr unsigned int Class_1_CFD42DB97A07D957_TypeDefinitionIndex = 61159;

class Class_1_CFD42DB97A07D957 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x24

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

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_BF3A97FF800F0C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_BF3A97FF800F0C24_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFD42DB97A07D957_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
