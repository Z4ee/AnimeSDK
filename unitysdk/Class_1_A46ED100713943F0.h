#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/SimulateInputType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_9ADD1D872350330F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A46ED100713943F0_CLEAR_OFFSET UNITYSDK_OFFSET(0x18CC79A0)
#define CLASS_1_A46ED100713943F0_METHOD_1_52675038485BC592_1_OFFSET UNITYSDK_OFFSET(0x18CC7B00)
#define CLASS_1_A46ED100713943F0_METHOD_1_52675038485BC592_OFFSET UNITYSDK_OFFSET(0x18CC7A40)
#define CLASS_1_A46ED100713943F0__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC7BC0)

inline static constexpr unsigned int Class_1_A46ED100713943F0_TypeDefinitionIndex = 39671;

class Class_1_A46ED100713943F0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_0; // 0x10
	::Class_1_9ADD1D872350330F* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_5; // 0x30
	::System::UInt32 Field_1_6; // 0x38
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_7; // 0x3C
	::System::UInt32 Field_1_8; // 0x44
	::System::Boolean Field_1_9; // 0x48
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_10; // 0x4C
	::System::UInt32 Field_1_11; // 0x54
	::System::UInt32 Field_1_12; // 0x58
	::RPG::Client::LittleGame::Match3::SimulateInputType Field_1_13; // 0x5C
	::System::UInt32 Field_1_14; // 0x60
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_15; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A46ED100713943F0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A46ED100713943F0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_52675038485BC592(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A46ED100713943F0_METHOD_1_52675038485BC592_OFFSET))(this, a1);
	}

	::System::Void Method_1_52675038485BC592_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A46ED100713943F0_METHOD_1_52675038485BC592_1_OFFSET))(this, a1);
	}
};
