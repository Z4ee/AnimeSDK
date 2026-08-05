#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B8476D59AF56A31C.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B562CC0)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLINFO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B5628B0)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLINFO_METHOD_1_1D8C60247E81BA7F_OFFSET UNITYSDK_OFFSET(0x1B562D20)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLINFO_METHOD_1_7493FC0605E5A625_OFFSET UNITYSDK_OFFSET(0x1B562930)
#define MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B562F50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonMiscTimeCtrlInfo_TypeDefinitionIndex = 85125;

	class DungeonMiscTimeCtrlInfo : public ::System::Object
	{
	public:
		::Enum_3_B8476D59AF56A31C InLevelPauseDialog; // 0x10
		::System::Boolean EnableCtrl; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLINFO_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLINFO_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_7493FC0605E5A625(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLINFO_METHOD_1_7493FC0605E5A625_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1D8C60247E81BA7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCTIMECTRLINFO_METHOD_1_1D8C60247E81BA7F_OFFSET))(this, a1, a2);
		}
	};
}
