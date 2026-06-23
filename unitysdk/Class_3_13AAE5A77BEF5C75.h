#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class String; }

#define CLASS_3_13AAE5A77BEF5C75_METHOD_3_1CE3078A8EE9E6A7_OFFSET UNITYSDK_OFFSET(0x11B0E7A0)
#define CLASS_3_13AAE5A77BEF5C75_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x11B0E790)
#define CLASS_3_13AAE5A77BEF5C75_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11B0E780)
#define CLASS_3_13AAE5A77BEF5C75_ONDETACH_OFFSET UNITYSDK_OFFSET(0x11B0E570)
#define CLASS_3_13AAE5A77BEF5C75_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x11B0E6A0)
#define CLASS_3_13AAE5A77BEF5C75_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x11B0E400)
#define CLASS_3_13AAE5A77BEF5C75__CTOR_OFFSET UNITYSDK_OFFSET(0x11B0E6F0)

inline static constexpr unsigned int Class_3_13AAE5A77BEF5C75_TypeDefinitionIndex = 50103;

class Class_3_13AAE5A77BEF5C75 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_13AAE5A77BEF5C75*>
{
public:
	::System::String* Field_3_1; // 0x20
	::System::Int32 Field_3_0; // 0x28
	::System::Boolean Field_3_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13AAE5A77BEF5C75__CTOR_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + CLASS_3_13AAE5A77BEF5C75_RECEIVEFEATUREEVENT_OFFSET))(this, a1);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13AAE5A77BEF5C75_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13AAE5A77BEF5C75_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13AAE5A77BEF5C75_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13AAE5A77BEF5C75_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_1CE3078A8EE9E6A7(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + CLASS_3_13AAE5A77BEF5C75_METHOD_3_1CE3078A8EE9E6A7_OFFSET))(this, a1);
	}
};
