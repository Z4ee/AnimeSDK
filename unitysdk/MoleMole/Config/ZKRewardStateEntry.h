#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_ZKREWARDSTATEENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E3B3F0)
#define MOLEMOLE_CONFIG_ZKREWARDSTATEENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17E3AD80)
#define MOLEMOLE_CONFIG_ZKREWARDSTATEENTRY_METHOD_1_213D736C0BF38CDB_OFFSET UNITYSDK_OFFSET(0x17E3B450)
#define MOLEMOLE_CONFIG_ZKREWARDSTATEENTRY_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x17E3AE00)
#define MOLEMOLE_CONFIG_ZKREWARDSTATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3B820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZKRewardStateEntry_TypeDefinitionIndex = 73547;

	class ZKRewardStateEntry : public ::System::Object
	{
	public:
		::System::String* StateKey; // 0x10
		::System::Int32 StateValue; // 0x18
		::MoleMole::Config::ValueCompareType CompareType; // 0x1C
		::System::Int32 NewRewardID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDSTATEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDSTATEENTRY_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDSTATEENTRY_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_213D736C0BF38CDB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDSTATEENTRY_METHOD_1_213D736C0BF38CDB_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDSTATEENTRY_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
		}
	};
}
