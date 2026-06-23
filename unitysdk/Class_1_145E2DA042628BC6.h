#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0B4A82D7D33DF0CF.h"
#include "unitysdk/Enum_3_85A37873CC9A51B0.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class String; }

#define CLASS_1_145E2DA042628BC6_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188E9650)
#define CLASS_1_145E2DA042628BC6_FROMFLX_OFFSET UNITYSDK_OFFSET(0x188E8EC0)
#define CLASS_1_145E2DA042628BC6_METHOD_1_12273F70078AFD69_OFFSET UNITYSDK_OFFSET(0x188E96B0)
#define CLASS_1_145E2DA042628BC6_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x188E8F40)
#define CLASS_1_145E2DA042628BC6__CTOR_OFFSET UNITYSDK_OFFSET(0x188E9970)

inline static constexpr unsigned int Class_1_145E2DA042628BC6_TypeDefinitionIndex = 81196;

class Class_1_145E2DA042628BC6 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigDynamicValue* Field_1_3; // 0x10
	::System::String* Field_1_2; // 0x18
	::Enum_3_85A37873CC9A51B0 Field_1_4; // 0x20
	::Enum_3_85A37873CC9A51B0 Field_1_0; // 0x24
	::Enum_3_0B4A82D7D33DF0CF Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_145E2DA042628BC6__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_145E2DA042628BC6_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_145E2DA042628BC6_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_12273F70078AFD69(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_145E2DA042628BC6_METHOD_1_12273F70078AFD69_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_145E2DA042628BC6_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
