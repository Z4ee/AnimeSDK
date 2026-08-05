#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_3_07AAFA6F7F79BEB3;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AF243356388FF2FB_METHOD_3_0DF1EB4535487F60_OFFSET UNITYSDK_OFFSET(0x10D1B530)
#define CLASS_3_AF243356388FF2FB_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x10D1B8D0)
#define CLASS_3_AF243356388FF2FB_METHOD_3_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x10D1B960)
#define CLASS_3_AF243356388FF2FB_METHOD_3_5FFF477DE12718CC_OFFSET UNITYSDK_OFFSET(0x10D1B7E0)
#define CLASS_3_AF243356388FF2FB_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10D1BAE0)
#define CLASS_3_AF243356388FF2FB_METHOD_3_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0x10D1BAF0)
#define CLASS_3_AF243356388FF2FB_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x10D1BAD0)
#define CLASS_3_AF243356388FF2FB_METHOD_3_E3F1085D69410E82_OFFSET UNITYSDK_OFFSET(0x10D1B980)
#define CLASS_3_AF243356388FF2FB_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10D1BAC0)
#define CLASS_3_AF243356388FF2FB_METHOD_3_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0x10D1B970)
#define CLASS_3_AF243356388FF2FB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x10D1B750)
#define CLASS_3_AF243356388FF2FB_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x10D1B430)
#define CLASS_3_AF243356388FF2FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D1B380)
#define CLASS_3_AF243356388FF2FB__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1B7A0)

inline static constexpr unsigned int Class_3_AF243356388FF2FB_TypeDefinitionIndex = 69902;

class Class_3_AF243356388FF2FB : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_AF243356388FF2FB*>
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x20
	::System::Boolean Field_3_7; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB__CTOR_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_5FFF477DE12718CC(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_METHOD_3_5FFF477DE12718CC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_3_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_METHOD_3_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Void Method_3_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_METHOD_3_F5CD8BFA444150BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E3F1085D69410E82(::MoleMole::EntityHandle& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_METHOD_3_E3F1085D69410E82_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_0DF1EB4535487F60(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_METHOD_3_0DF1EB4535487F60_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_AF243356388FF2FB_METHOD_3_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}
};
