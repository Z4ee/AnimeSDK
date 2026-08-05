#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_2A56CCCB20A346FA;
namespace MoleMole::Config { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_41557767124BA48C_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10B2BE10)
#define CLASS_1_41557767124BA48C_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10B2B8C0)
#define CLASS_1_41557767124BA48C_METHOD_1_01A38C1C04BF8076_OFFSET UNITYSDK_OFFSET(0x10B2BE70)
#define CLASS_1_41557767124BA48C_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x10B2B940)
#define CLASS_1_41557767124BA48C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B2B8B0)

inline static constexpr unsigned int Class_1_41557767124BA48C_TypeDefinitionIndex = 45930;

class Class_1_41557767124BA48C : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41557767124BA48C__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_41557767124BA48C_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_41557767124BA48C_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_41557767124BA48C_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_01A38C1C04BF8076(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_41557767124BA48C_METHOD_1_01A38C1C04BF8076_OFFSET))(this, a1, a2);
	}
};
