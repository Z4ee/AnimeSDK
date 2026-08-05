#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C2B61C78396059C1_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xE989E50)
#define CLASS_3_C2B61C78396059C1_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0xE989E60)
#define CLASS_3_C2B61C78396059C1_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE989E40)
#define CLASS_3_C2B61C78396059C1_METHOD_3_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0xE989DE0)
#define CLASS_3_C2B61C78396059C1_METHOD_3_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0xE989560)
#define CLASS_3_C2B61C78396059C1_METHOD_3_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xE989940)
#define CLASS_3_C2B61C78396059C1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE989510)
#define CLASS_3_C2B61C78396059C1_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE9894A0)
#define CLASS_3_C2B61C78396059C1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xE9896F0)
#define CLASS_3_C2B61C78396059C1_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0xE989870)
#define CLASS_3_C2B61C78396059C1__CCTOR_OFFSET UNITYSDK_OFFSET(0xE989740)
#define CLASS_3_C2B61C78396059C1__CTOR_OFFSET UNITYSDK_OFFSET(0xE989DA0)

inline static constexpr unsigned int Class_3_C2B61C78396059C1_TypeDefinitionIndex = 54383;

class Class_3_C2B61C78396059C1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_C2B61C78396059C1*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1_METHOD_3_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1_METHOD_3_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_3_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1_METHOD_3_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B61C78396059C1_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
