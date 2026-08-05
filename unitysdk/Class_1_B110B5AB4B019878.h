#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_B110B5AB4B019878_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13C2D0D0)
#define CLASS_1_B110B5AB4B019878_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13C2CCF0)
#define CLASS_1_B110B5AB4B019878_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13C2D710)
#define CLASS_1_B110B5AB4B019878_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0x13C2D130)
#define CLASS_1_B110B5AB4B019878_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x13C2CD70)
#define CLASS_1_B110B5AB4B019878_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13C2D400)
#define CLASS_1_B110B5AB4B019878__CTOR_OFFSET UNITYSDK_OFFSET(0x13C2D700)

inline static constexpr unsigned int Class_1_B110B5AB4B019878_TypeDefinitionIndex = 68795;

class Class_1_B110B5AB4B019878 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Il2CppArray<::System::Byte>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B110B5AB4B019878__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B110B5AB4B019878_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B110B5AB4B019878_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B110B5AB4B019878_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B110B5AB4B019878_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B110B5AB4B019878_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B110B5AB4B019878_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
	}
};
