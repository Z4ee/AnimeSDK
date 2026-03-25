#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace System { class String; }

#define CLASS_1_93E7EE67D090CF1F_METHOD_1_F6E4187D9536B89B_OFFSET UNITYSDK_OFFSET(0x1832DF00)
#define CLASS_1_93E7EE67D090CF1F_SET_OFFSET UNITYSDK_OFFSET(0x1832DEC0)
#define CLASS_1_93E7EE67D090CF1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1832DF40)

inline static constexpr unsigned int Class_1_93E7EE67D090CF1F_TypeDefinitionIndex = 9436;

class Class_1_93E7EE67D090CF1F : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93E7EE67D090CF1F__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_93E7EE67D090CF1F_SET_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_F6E4187D9536B89B(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_93E7EE67D090CF1F_METHOD_1_F6E4187D9536B89B_OFFSET))(a1);
	}
};
