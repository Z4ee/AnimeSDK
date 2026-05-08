#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_85C557A921FA375E_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x13F2E750)
#define CLASS_2_85C557A921FA375E_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13F2E740)
#define CLASS_2_85C557A921FA375E_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13F2E6F0)
#define CLASS_2_85C557A921FA375E_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13F2E6B0)
#define CLASS_2_85C557A921FA375E__CTOR_OFFSET UNITYSDK_OFFSET(0x13F2E730)

inline static constexpr unsigned int Class_2_85C557A921FA375E_TypeDefinitionIndex = 71933;

class Class_2_85C557A921FA375E : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_85C557A921FA375E*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_5; // 0x30
	::System::String* Field_2_1; // 0x38
	::System::Int32 Field_2_0; // 0x40
	::System::Int32 Field_2_3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85C557A921FA375E__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85C557A921FA375E_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85C557A921FA375E_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85C557A921FA375E_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85C557A921FA375E_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}
};
