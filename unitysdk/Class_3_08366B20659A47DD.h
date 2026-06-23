#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_08366B20659A47DD_METHOD_3_66EE8B6810A8C8E1_OFFSET UNITYSDK_OFFSET(0x12F039A0)
#define CLASS_3_08366B20659A47DD_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x12F039C0)
#define CLASS_3_08366B20659A47DD_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12F039B0)
#define CLASS_3_08366B20659A47DD_ONDETACH_OFFSET UNITYSDK_OFFSET(0x12F03700)
#define CLASS_3_08366B20659A47DD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12F03690)
#define CLASS_3_08366B20659A47DD__CTOR_OFFSET UNITYSDK_OFFSET(0x12F038D0)

inline static constexpr unsigned int Class_3_08366B20659A47DD_TypeDefinitionIndex = 62456;

class Class_3_08366B20659A47DD : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_08366B20659A47DD*>
{
public:
	::System::Collections::Generic::List_1<::System::IDisposable*>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08366B20659A47DD__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08366B20659A47DD_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08366B20659A47DD_ONDETACH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::IDisposable*>* Method_3_66EE8B6810A8C8E1()
	{
		return ((::System::Collections::Generic::List_1<::System::IDisposable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08366B20659A47DD_METHOD_3_66EE8B6810A8C8E1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08366B20659A47DD_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08366B20659A47DD_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}
};
