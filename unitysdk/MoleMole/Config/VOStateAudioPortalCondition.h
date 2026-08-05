#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172BF6F0)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_FROMFLX_OFFSET UNITYSDK_OFFSET(0x172BF210)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x172BF290)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_METHOD_1_FC98BB22B7077EE4_OFFSET UNITYSDK_OFFSET(0x172BF750)
#define MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x172BFA20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VOStateAudioPortalCondition_TypeDefinitionIndex = 47910;

	class VOStateAudioPortalCondition : public ::System::Object
	{
	public:
		::System::String* StateKey; // 0x10
		::MoleMole::Config::ValueCompareType CompareType; // 0x18
		::System::Int32 StateValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_FC98BB22B7077EE4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_METHOD_1_FC98BB22B7077EE4_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEAUDIOPORTALCONDITION_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
		}
	};
}
