#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_F12BA24DE155B7BB.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_204C453CC79AE4E0_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11F1FE90)
#define CLASS_1_204C453CC79AE4E0_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11F1FA80)
#define CLASS_1_204C453CC79AE4E0_1_METHOD_1_020D79381203C043_OFFSET UNITYSDK_OFFSET(0x11F1FEF0)
#define CLASS_1_204C453CC79AE4E0_1_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x11F1FB00)
#define CLASS_1_204C453CC79AE4E0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11F200F0)

inline static constexpr unsigned int Class_1_204C453CC79AE4E0_1_TypeDefinitionIndex = 71299;

class Class_1_204C453CC79AE4E0_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Struct_2_F12BA24DE155B7BB Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_1_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_020D79381203C043(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_1_METHOD_1_020D79381203C043_OFFSET))(this, a1, a2);
	}
};
