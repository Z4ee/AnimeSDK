#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define CLASS_3_8A9FAC1060EC2311_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x134CEA20)
#define CLASS_3_8A9FAC1060EC2311_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x134CEA00)
#define CLASS_3_8A9FAC1060EC2311_METHOD_3_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x134CDE40)
#define CLASS_3_8A9FAC1060EC2311_METHOD_3_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0x134CE530)
#define CLASS_3_8A9FAC1060EC2311_METHOD_3_FB13DB40D70D9AE1_OFFSET UNITYSDK_OFFSET(0x134CEA10)
#define CLASS_3_8A9FAC1060EC2311_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x134CDDF0)
#define CLASS_3_8A9FAC1060EC2311_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x134CDD90)
#define CLASS_3_8A9FAC1060EC2311_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x134CE280)
#define CLASS_3_8A9FAC1060EC2311__CTOR_OFFSET UNITYSDK_OFFSET(0x134CE970)

inline static constexpr unsigned int Class_3_8A9FAC1060EC2311_TypeDefinitionIndex = 62357;

class Class_3_8A9FAC1060EC2311 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_8A9FAC1060EC2311*>
{
public:
	::System::String* Field_3_5; // 0x20
	::System::String* Field_3_3; // 0x28
	::System::String* Field_3_4; // 0x30
	::System::Int32 Field_3_1; // 0x38
	::System::Int32 Field_3_2; // 0x3C
	::System::Int32 Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A9FAC1060EC2311__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A9FAC1060EC2311_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A9FAC1060EC2311_ONDISABLE_OFFSET))(this);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_8A9FAC1060EC2311_RECEIVECUSTOMEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A9FAC1060EC2311_METHOD_3_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_3_FAADEE08E4E52BA5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A9FAC1060EC2311_METHOD_3_FAADEE08E4E52BA5_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A9FAC1060EC2311_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_FB13DB40D70D9AE1(::Foundation::ViewObject::EViewObjectComponentCustomEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_8A9FAC1060EC2311_METHOD_3_FB13DB40D70D9AE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A9FAC1060EC2311_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}
};
