#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_44D83C5A6A243C17.h"
#include "unitysdk/Enum_3_F5486EF13585A6C7_1.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_50E88D52C3691096;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_96A04AD133ECCAF1_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x15BF1190)
#define CLASS_3_96A04AD133ECCAF1_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x15BF1300)
#define CLASS_3_96A04AD133ECCAF1_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x15BF1310)
#define CLASS_3_96A04AD133ECCAF1_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x15BF1320)
#define CLASS_3_96A04AD133ECCAF1_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15BF1180)
#define CLASS_3_96A04AD133ECCAF1_METHOD_3_A974B4EB1BD1FF0F_OFFSET UNITYSDK_OFFSET(0x15BF11A0)
#define CLASS_3_96A04AD133ECCAF1_ONATTACH_OFFSET UNITYSDK_OFFSET(0x15BF0E70)
#define CLASS_3_96A04AD133ECCAF1_ONDETACH_OFFSET UNITYSDK_OFFSET(0x15BF0EB0)
#define CLASS_3_96A04AD133ECCAF1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15BF0EF0)
#define CLASS_3_96A04AD133ECCAF1_ONREADY_OFFSET UNITYSDK_OFFSET(0x15BF1020)
#define CLASS_3_96A04AD133ECCAF1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15BF1060)
#define CLASS_3_96A04AD133ECCAF1__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF1110)

inline static constexpr unsigned int Class_3_96A04AD133ECCAF1_TypeDefinitionIndex = 63217;

class Class_3_96A04AD133ECCAF1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_96A04AD133ECCAF1*>
{
public:
	::System::String* Field_3_7; // 0x20
	::System::String* Field_3_8; // 0x28
	::System::Collections::Generic::List_1<::System::Single>* Field_3_5; // 0x30
	::Enum_3_F5486EF13585A6C7_1 Field_3_6; // 0x38
	::System::Single Field_3_11; // 0x3C
	::System::Int32 Field_3_0; // 0x40
	::System::Single Field_3_4; // 0x44
	::System::Single Field_3_9; // 0x48
	::Enum_3_44D83C5A6A243C17 Field_3_14; // 0x4C
	::System::Single Field_3_10; // 0x50
	::System::Boolean Field_3_15; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_ONDETACH_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Boolean Method_3_A974B4EB1BD1FF0F(::Class_1_50E88D52C3691096*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_50E88D52C3691096*&))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_METHOD_3_A974B4EB1BD1FF0F_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96A04AD133ECCAF1_METHOD_3_832295EC279E5994_4_OFFSET))(this);
	}
};
