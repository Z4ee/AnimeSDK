#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class Object; }

#define CLASS_2_A6647B85ED184BC8_METHOD_2_57ED677A69C0520D_OFFSET UNITYSDK_OFFSET(0x12141940)
#define CLASS_2_A6647B85ED184BC8__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x121418D0)
#define CLASS_2_A6647B85ED184BC8__CTOR_OFFSET UNITYSDK_OFFSET(0x12141D00)
#define CLASS_2_A6647B85ED184BC8___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x12141D20)

inline static constexpr unsigned int Class_2_A6647B85ED184BC8_TypeDefinitionIndex = 62933;

class Class_2_A6647B85ED184BC8 : public ::RPG::Client::BaseModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6647B85ED184BC8__CTOR_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6647B85ED184BC8__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_57ED677A69C0520D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A6647B85ED184BC8_METHOD_2_57ED677A69C0520D_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6647B85ED184BC8___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};
