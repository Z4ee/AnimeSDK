#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F5486EF13585A6C7_1.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_50E88D52C3691096;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9E035814094717F1_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x16DE1C20)
#define CLASS_2_9E035814094717F1_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x16DE1D90)
#define CLASS_2_9E035814094717F1_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x16DE1DA0)
#define CLASS_2_9E035814094717F1_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16DE1C10)
#define CLASS_2_9E035814094717F1_METHOD_2_A974B4EB1BD1FF0F_OFFSET UNITYSDK_OFFSET(0x16DE1C30)
#define CLASS_2_9E035814094717F1_ONATTACH_OFFSET UNITYSDK_OFFSET(0x16DE1960)
#define CLASS_2_9E035814094717F1_ONDETACH_OFFSET UNITYSDK_OFFSET(0x16DE19A0)
#define CLASS_2_9E035814094717F1_ONREADY_OFFSET UNITYSDK_OFFSET(0x16DE1AC0)
#define CLASS_2_9E035814094717F1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16DE1B00)
#define CLASS_2_9E035814094717F1__CTOR_OFFSET UNITYSDK_OFFSET(0x16DE1BA0)

inline static constexpr unsigned int Class_2_9E035814094717F1_TypeDefinitionIndex = 49015;

class Class_2_9E035814094717F1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_9E035814094717F1*>
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_2_3; // 0x20
	::System::String* Field_2_1; // 0x28
	::System::String* Field_2_8; // 0x30
	::System::Single Field_2_7; // 0x38
	::System::Single Field_2_5; // 0x3C
	::System::Int32 Field_2_0; // 0x40
	::Enum_3_F5486EF13585A6C7_1 Field_2_2; // 0x44
	::System::Single Field_2_4; // 0x48
	::System::Single Field_2_6; // 0x4C
	::System::Boolean Field_2_9; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E035814094717F1__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E035814094717F1_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E035814094717F1_ONDETACH_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E035814094717F1_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E035814094717F1_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E035814094717F1_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E035814094717F1_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Boolean Method_2_A974B4EB1BD1FF0F(::Class_1_50E88D52C3691096*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_50E88D52C3691096*&))((::PBYTE)hIl2Cpp + CLASS_2_9E035814094717F1_METHOD_2_A974B4EB1BD1FF0F_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E035814094717F1_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E035814094717F1_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}
};
