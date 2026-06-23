#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define CLASS_3_2048D4EA184CEFB6_METHOD_3_3E40076576EE6BC1_OFFSET UNITYSDK_OFFSET(0x108C5AD0)
#define CLASS_3_2048D4EA184CEFB6_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x108C5E10)
#define CLASS_3_2048D4EA184CEFB6_METHOD_3_B80A0C41DE490B33_OFFSET UNITYSDK_OFFSET(0x108C51F0)
#define CLASS_3_2048D4EA184CEFB6_METHOD_3_CDBE6B0008BA5B08_OFFSET UNITYSDK_OFFSET(0x108C5600)
#define CLASS_3_2048D4EA184CEFB6_METHOD_3_FB13DB40D70D9AE1_OFFSET UNITYSDK_OFFSET(0x108C5AC0)
#define CLASS_3_2048D4EA184CEFB6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x108C5120)
#define CLASS_3_2048D4EA184CEFB6_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x108C5170)
#define CLASS_3_2048D4EA184CEFB6__CTOR_OFFSET UNITYSDK_OFFSET(0x108C5A30)

inline static constexpr unsigned int Class_3_2048D4EA184CEFB6_TypeDefinitionIndex = 65086;

class Class_3_2048D4EA184CEFB6 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_2048D4EA184CEFB6*>
{
public:
	::System::String* Field_3_0; // 0x20
	::System::Boolean Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2048D4EA184CEFB6__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2048D4EA184CEFB6_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_2048D4EA184CEFB6_RECEIVECUSTOMEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FB13DB40D70D9AE1(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_2048D4EA184CEFB6_METHOD_3_FB13DB40D70D9AE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3E40076576EE6BC1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2048D4EA184CEFB6_METHOD_3_3E40076576EE6BC1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CDBE6B0008BA5B08(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_2048D4EA184CEFB6_METHOD_3_CDBE6B0008BA5B08_OFFSET))(this, a1);
	}

	::System::Void Method_3_B80A0C41DE490B33(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_2048D4EA184CEFB6_METHOD_3_B80A0C41DE490B33_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2048D4EA184CEFB6_METHOD_3_832295EC279E5994_OFFSET))(this);
	}
};
