#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1C4318405086A580_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x17AEE590)
#define CLASS_3_1C4318405086A580_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x17AEE5A0)
#define CLASS_3_1C4318405086A580_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17AEE580)
#define CLASS_3_1C4318405086A580_ONATTACH_OFFSET UNITYSDK_OFFSET(0x17AEE200)
#define CLASS_3_1C4318405086A580_ONDETACH_OFFSET UNITYSDK_OFFSET(0x17AEE330)
#define CLASS_3_1C4318405086A580_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17AEE460)
#define CLASS_3_1C4318405086A580__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEE4F0)

inline static constexpr unsigned int Class_3_1C4318405086A580_TypeDefinitionIndex = 40319;

class Class_3_1C4318405086A580 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_1C4318405086A580*>
{
public:
	::System::String* Field_3_2; // 0x20
	::System::String* Field_3_9; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_7; // 0x30
	::System::String* Field_3_4; // 0x38
	::System::Int32 Field_3_5; // 0x40
	::System::Single Field_3_10; // 0x44
	::System::Int32 Field_3_0; // 0x48
	::UnityEngine::Vector3 Field_3_11; // 0x4C
	::System::Boolean Field_3_8; // 0x58
	::System::Boolean Field_3_6; // 0x59
	::System::Boolean Field_3_1; // 0x5A
	::System::Int32 Field_3_3; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C4318405086A580__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C4318405086A580_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C4318405086A580_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C4318405086A580_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C4318405086A580_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C4318405086A580_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C4318405086A580_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
