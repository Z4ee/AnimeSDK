#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D2E4F0)
#define MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D2E0C0)
#define MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x17D2E550)
#define MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x17D2E140)
#define MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D2E740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NpcAccessoryVoConfig_TypeDefinitionIndex = 62967;

	class NpcAccessoryVoConfig : public ::System::Object
	{
	public:
		::System::String* SlotKey; // 0x10
		::System::String* OverrideSeqFrameKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NPCACCESSORYVOCONFIG_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
		}
	};
}
