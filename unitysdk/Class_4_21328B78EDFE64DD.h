#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"

class Class_1_B7E341C5F1A6F199;
namespace System { class EventArgs; }

#define CLASS_4_21328B78EDFE64DD_METHOD_4_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1328E720)
#define CLASS_4_21328B78EDFE64DD_METHOD_4_FB13DB40D70D9AE1_OFFSET UNITYSDK_OFFSET(0x1328E710)
#define CLASS_4_21328B78EDFE64DD_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1328DFE0)
#define CLASS_4_21328B78EDFE64DD_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1328E350)
#define CLASS_4_21328B78EDFE64DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1328DE40)

inline static constexpr unsigned int Class_4_21328B78EDFE64DD_TypeDefinitionIndex = 80890;

class Class_4_21328B78EDFE64DD : public ::Class_3_627DF5C40DDAA45B<::Class_4_21328B78EDFE64DD*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_21328B78EDFE64DD__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_4_21328B78EDFE64DD_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_21328B78EDFE64DD_RECEIVECUSTOMEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_FB13DB40D70D9AE1(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_21328B78EDFE64DD_METHOD_4_FB13DB40D70D9AE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_4_21328B78EDFE64DD_METHOD_4_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
