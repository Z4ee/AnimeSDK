#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_884860A2FAB24301_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1598BB50)
#define CLASS_1_884860A2FAB24301_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1598B1A0)
#define CLASS_1_884860A2FAB24301_METHOD_1_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1598B220)
#define CLASS_1_884860A2FAB24301_METHOD_1_213D736C0BF38CDB_OFFSET UNITYSDK_OFFSET(0x1598BBB0)
#define CLASS_1_884860A2FAB24301__CTOR_OFFSET UNITYSDK_OFFSET(0x1598C1E0)

inline static constexpr unsigned int Class_1_884860A2FAB24301_TypeDefinitionIndex = 79114;

class Class_1_884860A2FAB24301 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Int32 Field_1_4; // 0x18
	::System::Int32 Field_1_5; // 0x1C
	::System::Int32 Field_1_6; // 0x20
	::System::Boolean Field_1_11; // 0x24
	::System::Boolean Field_1_7; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_884860A2FAB24301__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_884860A2FAB24301_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_884860A2FAB24301_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_213D736C0BF38CDB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_884860A2FAB24301_METHOD_1_213D736C0BF38CDB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_884860A2FAB24301_METHOD_1_00531776927FE5B6_OFFSET))(this, a1);
	}
};
