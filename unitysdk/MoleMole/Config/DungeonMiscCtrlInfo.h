#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5CD8071E94907A55.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11711590)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11711180)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_METHOD_1_1D8C60247E81BA7F_OFFSET UNITYSDK_OFFSET(0x117115F0)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_METHOD_1_7493FC0605E5A625_OFFSET UNITYSDK_OFFSET(0x11711200)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11711820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonMiscCtrlInfo_TypeDefinitionIndex = 82314;

	class DungeonMiscCtrlInfo : public ::System::Object
	{
	public:
		::Enum_3_5CD8071E94907A55 CtrlType; // 0x10
		::System::Boolean EnableCtrl; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_1D8C60247E81BA7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_METHOD_1_1D8C60247E81BA7F_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_7493FC0605E5A625(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_METHOD_1_7493FC0605E5A625_OFFSET))(this, a1);
		}
	};
}
