#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class EventArgs; }

#define CLASS_3_9D39D2FB5AF56FBD_METHOD_3_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x12EB2A00)
#define CLASS_3_9D39D2FB5AF56FBD_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x12EB25E0)
#define CLASS_3_9D39D2FB5AF56FBD_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x12EB2CC0)
#define CLASS_3_9D39D2FB5AF56FBD_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x12EB2D30)
#define CLASS_3_9D39D2FB5AF56FBD_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12EB2CA0)
#define CLASS_3_9D39D2FB5AF56FBD_METHOD_3_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0x12EB2CD0)
#define CLASS_3_9D39D2FB5AF56FBD_METHOD_3_FB13DB40D70D9AE1_OFFSET UNITYSDK_OFFSET(0x12EB2CB0)
#define CLASS_3_9D39D2FB5AF56FBD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12EB2590)
#define CLASS_3_9D39D2FB5AF56FBD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12EB2520)
#define CLASS_3_9D39D2FB5AF56FBD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12EB27D0)
#define CLASS_3_9D39D2FB5AF56FBD_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x12EB2980)
#define CLASS_3_9D39D2FB5AF56FBD_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x12EB28C0)
#define CLASS_3_9D39D2FB5AF56FBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EB2810)
#define CLASS_3_9D39D2FB5AF56FBD__CTOR_OFFSET UNITYSDK_OFFSET(0x12EB2C60)

inline static constexpr unsigned int Class_3_9D39D2FB5AF56FBD_TypeDefinitionIndex = 86806;

class Class_3_9D39D2FB5AF56FBD : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_9D39D2FB5AF56FBD*>
{
public:
	::System::Boolean Field_3_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_RECEIVECUSTOMEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_METHOD_3_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_3_FB13DB40D70D9AE1(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_METHOD_3_FB13DB40D70D9AE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_METHOD_3_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_METHOD_3_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D39D2FB5AF56FBD_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
