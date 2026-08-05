#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13518DD0)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13518750)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_METHOD_1_03482897E56BA861_OFFSET UNITYSDK_OFFSET(0x13518E30)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x135187D0)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13519170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VOStateAudioPortalEntry_TypeDefinitionIndex = 89718;

	class VOStateAudioPortalEntry : public ::System::Object
	{
	public:
		::System::String* PortalKey; // 0x10
		::System::String* StateKey; // 0x18
		::System::Int32 StateValue; // 0x20
		::MoleMole::Config::ValueCompareType CompareType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_03482897E56BA861(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALENTRY_METHOD_1_03482897E56BA861_OFFSET))(this, a1, a2);
		}
	};
}
