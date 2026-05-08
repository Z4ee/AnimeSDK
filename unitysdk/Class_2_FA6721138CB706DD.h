#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FA6721138CB706DD_METHOD_2_66EE8B6810A8C8E1_OFFSET UNITYSDK_OFFSET(0xF0AF7C0)
#define CLASS_2_FA6721138CB706DD_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xF0AF7B0)
#define CLASS_2_FA6721138CB706DD_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xF0AF7A0)
#define CLASS_2_FA6721138CB706DD_ONDETACH_OFFSET UNITYSDK_OFFSET(0xF0AF530)
#define CLASS_2_FA6721138CB706DD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xF0AF4C0)
#define CLASS_2_FA6721138CB706DD__CTOR_OFFSET UNITYSDK_OFFSET(0xF0AF710)

inline static constexpr unsigned int Class_2_FA6721138CB706DD_TypeDefinitionIndex = 81967;

class Class_2_FA6721138CB706DD : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_FA6721138CB706DD*>
{
public:
	::System::Collections::Generic::List_1<::System::IDisposable*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA6721138CB706DD__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA6721138CB706DD_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA6721138CB706DD_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA6721138CB706DD_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA6721138CB706DD_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::IDisposable*>* Method_2_66EE8B6810A8C8E1()
	{
		return ((::System::Collections::Generic::List_1<::System::IDisposable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA6721138CB706DD_METHOD_2_66EE8B6810A8C8E1_OFFSET))(this);
	}
};
