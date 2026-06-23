#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6FC1FE687969C05E_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xD380AB0)
#define CLASS_3_6FC1FE687969C05E_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xD380AA0)
#define CLASS_3_6FC1FE687969C05E_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD3809D0)
#define CLASS_3_6FC1FE687969C05E_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD380990)
#define CLASS_3_6FC1FE687969C05E__CTOR_OFFSET UNITYSDK_OFFSET(0xD380A10)

inline static constexpr unsigned int Class_3_6FC1FE687969C05E_TypeDefinitionIndex = 79939;

class Class_3_6FC1FE687969C05E : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_6FC1FE687969C05E*>
{
public:
	::System::String* Field_3_1; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_3_4; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_3_5; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_2; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_6; // 0x40
	::System::Int32 Field_3_3; // 0x48
	::System::Int32 Field_3_0; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FC1FE687969C05E__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FC1FE687969C05E_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FC1FE687969C05E_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FC1FE687969C05E_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FC1FE687969C05E_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}
};
