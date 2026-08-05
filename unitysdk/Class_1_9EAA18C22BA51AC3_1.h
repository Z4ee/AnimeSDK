#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_BFF89227F03C4DD2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9EAA18C22BA51AC3_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EEE470)
#define CLASS_1_9EAA18C22BA51AC3_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16EEE0E0)
#define CLASS_1_9EAA18C22BA51AC3_1_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x16EEE160)
#define CLASS_1_9EAA18C22BA51AC3_1_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x16EEE4D0)
#define CLASS_1_9EAA18C22BA51AC3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16EEE6C0)

inline static constexpr unsigned int Class_1_9EAA18C22BA51AC3_1_TypeDefinitionIndex = 77595;

class Class_1_9EAA18C22BA51AC3_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BFF89227F03C4DD2*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA18C22BA51AC3_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_9EAA18C22BA51AC3_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9EAA18C22BA51AC3_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9EAA18C22BA51AC3_1_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_9EAA18C22BA51AC3_1_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
	}
};
