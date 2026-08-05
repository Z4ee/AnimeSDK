#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DBDA3E4299D9C543_2_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x116ADF10)
#define CLASS_3_DBDA3E4299D9C543_2_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x116ADF20)
#define CLASS_3_DBDA3E4299D9C543_2_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x116ADF00)
#define CLASS_3_DBDA3E4299D9C543_2_ONATTACH_OFFSET UNITYSDK_OFFSET(0x116ADBC0)
#define CLASS_3_DBDA3E4299D9C543_2_ONDETACH_OFFSET UNITYSDK_OFFSET(0x116ADCF0)
#define CLASS_3_DBDA3E4299D9C543_2_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x116ADE20)
#define CLASS_3_DBDA3E4299D9C543_2__CTOR_OFFSET UNITYSDK_OFFSET(0x116ADEC0)

inline static constexpr unsigned int Class_3_DBDA3E4299D9C543_2_TypeDefinitionIndex = 62996;

class Class_3_DBDA3E4299D9C543_2 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_DBDA3E4299D9C543_2*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_9; // 0x20
	::System::String* Field_3_6; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_3_17; // 0x30
	::System::String* Field_3_4; // 0x38
	::System::String* Field_3_15; // 0x40
	::System::Boolean Field_3_7; // 0x48
	::System::Int32 Field_3_11; // 0x4C
	::UnityEngine::Vector3 Field_3_13; // 0x50
	::System::Int32 Field_3_5; // 0x5C
	::System::Single Field_3_14; // 0x60
	::System::Boolean Field_3_19; // 0x64
	::System::Boolean Field_3_8; // 0x65
	::System::Boolean Field_3_12; // 0x66
	::System::Boolean Field_3_10; // 0x67
	::System::Int32 Field_3_18; // 0x68
	::System::Int32 Field_3_0; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBDA3E4299D9C543_2__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBDA3E4299D9C543_2_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBDA3E4299D9C543_2_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBDA3E4299D9C543_2_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBDA3E4299D9C543_2_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBDA3E4299D9C543_2_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBDA3E4299D9C543_2_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
