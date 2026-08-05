#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

class Class_3_C93CC3D2C2AC4067;
class PiplineManager;
namespace System { class EventArgs; }
namespace System { class String; }

#define CLASS_3_EA043A3103D6B832_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1679C980)
#define CLASS_3_EA043A3103D6B832_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1679C9E0)
#define CLASS_3_EA043A3103D6B832_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1679C970)
#define CLASS_3_EA043A3103D6B832_METHOD_3_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x1679C5E0)
#define CLASS_3_EA043A3103D6B832_METHOD_3_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0x1679C9F0)
#define CLASS_3_EA043A3103D6B832_METHOD_3_CB4C69BFC0B19A5B_OFFSET UNITYSDK_OFFSET(0x1679CA50)
#define CLASS_3_EA043A3103D6B832_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1679C1E0)
#define CLASS_3_EA043A3103D6B832_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1679C190)
#define CLASS_3_EA043A3103D6B832_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1679C390)
#define CLASS_3_EA043A3103D6B832_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x1679C510)
#define CLASS_3_EA043A3103D6B832__CCTOR_OFFSET UNITYSDK_OFFSET(0x1679C3E0)
#define CLASS_3_EA043A3103D6B832__CTOR_OFFSET UNITYSDK_OFFSET(0x1679C930)

inline static constexpr unsigned int Class_3_EA043A3103D6B832_TypeDefinitionIndex = 81782;

class Class_3_EA043A3103D6B832 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_EA043A3103D6B832*>
{
public:
	::PiplineManager* Field_3_0; // 0x20
	::System::String* Field_3_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832_METHOD_3_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_3_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832_METHOD_3_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_CB4C69BFC0B19A5B(::Class_3_C93CC3D2C2AC4067* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA043A3103D6B832_METHOD_3_CB4C69BFC0B19A5B_OFFSET))(this, a1, a2);
	}
};
