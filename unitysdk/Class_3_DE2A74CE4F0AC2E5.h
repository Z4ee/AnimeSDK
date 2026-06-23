#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_1CE3078A8EE9E6A7_OFFSET UNITYSDK_OFFSET(0x12F913C0)
#define CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x12F913A0)
#define CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x12F913B0)
#define CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12F91390)
#define CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_D758B907FFFC1212_1_OFFSET UNITYSDK_OFFSET(0x12F910A0)
#define CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_D758B907FFFC1212_OFFSET UNITYSDK_OFFSET(0x12F90C50)
#define CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_FB13DB40D70D9AE1_OFFSET UNITYSDK_OFFSET(0x12F91420)
#define CLASS_3_DE2A74CE4F0AC2E5_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12F90BF0)
#define CLASS_3_DE2A74CE4F0AC2E5_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12F90B80)
#define CLASS_3_DE2A74CE4F0AC2E5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12F90EA0)
#define CLASS_3_DE2A74CE4F0AC2E5_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x12F91020)
#define CLASS_3_DE2A74CE4F0AC2E5_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x12F90EF0)
#define CLASS_3_DE2A74CE4F0AC2E5__CTOR_OFFSET UNITYSDK_OFFSET(0x12F91300)

inline static constexpr unsigned int Class_3_DE2A74CE4F0AC2E5_TypeDefinitionIndex = 81181;

class Class_3_DE2A74CE4F0AC2E5 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_DE2A74CE4F0AC2E5*>
{
public:
	::System::String* Field_3_0; // 0x20
	::System::Boolean Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_RECEIVEFEATUREEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_RECEIVECUSTOMEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D758B907FFFC1212(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_D758B907FFFC1212_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_D758B907FFFC1212_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_D758B907FFFC1212_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_1CE3078A8EE9E6A7(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_1CE3078A8EE9E6A7_OFFSET))(this, a1);
	}

	::System::Void Method_3_FB13DB40D70D9AE1(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_DE2A74CE4F0AC2E5_METHOD_3_FB13DB40D70D9AE1_OFFSET))(this, a1, a2);
	}
};
