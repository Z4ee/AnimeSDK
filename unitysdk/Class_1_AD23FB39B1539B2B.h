#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AD23FB39B1539B2B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C12ACA0)
#define CLASS_1_AD23FB39B1539B2B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C12A780)
#define CLASS_1_AD23FB39B1539B2B_METHOD_1_020D79381203C043_OFFSET UNITYSDK_OFFSET(0x1C12AD00)
#define CLASS_1_AD23FB39B1539B2B_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x1C12A800)
#define CLASS_1_AD23FB39B1539B2B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12B160)

inline static constexpr unsigned int Class_1_AD23FB39B1539B2B_TypeDefinitionIndex = 74459;

class Class_1_AD23FB39B1539B2B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD23FB39B1539B2B__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_AD23FB39B1539B2B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AD23FB39B1539B2B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_020D79381203C043(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AD23FB39B1539B2B_METHOD_1_020D79381203C043_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_AD23FB39B1539B2B_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
	}
};
