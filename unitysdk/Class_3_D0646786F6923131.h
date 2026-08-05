#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define CLASS_3_D0646786F6923131_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x147C92C0)
#define CLASS_3_D0646786F6923131_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x147C92B0)
#define CLASS_3_D0646786F6923131_METHOD_3_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0x147C9250)
#define CLASS_3_D0646786F6923131_ONDETACH_OFFSET UNITYSDK_OFFSET(0x147C9090)
#define CLASS_3_D0646786F6923131_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x147C91C0)
#define CLASS_3_D0646786F6923131_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x147C8F20)
#define CLASS_3_D0646786F6923131__CCTOR_OFFSET UNITYSDK_OFFSET(0x147C8E70)
#define CLASS_3_D0646786F6923131__CTOR_OFFSET UNITYSDK_OFFSET(0x147C9210)

inline static constexpr unsigned int Class_3_D0646786F6923131_TypeDefinitionIndex = 47446;

class Class_3_D0646786F6923131 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_D0646786F6923131*>
{
public:
	::System::String* Field_3_7; // 0x20
	::System::Int32 Field_3_0; // 0x28
	::System::Boolean Field_3_6; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D0646786F6923131__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0646786F6923131__CTOR_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_D0646786F6923131_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0646786F6923131_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0646786F6923131_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_D0646786F6923131_METHOD_3_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0646786F6923131_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0646786F6923131_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}
};
