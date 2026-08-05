#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C7A54F151AFC278C_METHOD_3_66EE8B6810A8C8E1_OFFSET UNITYSDK_OFFSET(0x19441A20)
#define CLASS_3_C7A54F151AFC278C_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x19441A10)
#define CLASS_3_C7A54F151AFC278C_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19441A00)
#define CLASS_3_C7A54F151AFC278C_ONDETACH_OFFSET UNITYSDK_OFFSET(0x19441820)
#define CLASS_3_C7A54F151AFC278C_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x194417B0)
#define CLASS_3_C7A54F151AFC278C__CTOR_OFFSET UNITYSDK_OFFSET(0x19441970)

inline static constexpr unsigned int Class_3_C7A54F151AFC278C_TypeDefinitionIndex = 48697;

class Class_3_C7A54F151AFC278C : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_C7A54F151AFC278C*>
{
public:
	::System::Collections::Generic::List_1<::System::IDisposable*>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7A54F151AFC278C__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7A54F151AFC278C_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7A54F151AFC278C_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7A54F151AFC278C_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7A54F151AFC278C_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::IDisposable*>* Method_3_66EE8B6810A8C8E1()
	{
		return ((::System::Collections::Generic::List_1<::System::IDisposable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7A54F151AFC278C_METHOD_3_66EE8B6810A8C8E1_OFFSET))(this);
	}
};
