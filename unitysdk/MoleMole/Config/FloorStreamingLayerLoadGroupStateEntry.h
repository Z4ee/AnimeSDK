#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/FloorStreamingLayerLoadGroupStateCompareType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E49B0)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4E4360)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_METHOD_1_213D736C0BF38CDB_OFFSET UNITYSDK_OFFSET(0x1B4E4A10)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x1B4E43E0)
#define MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E4DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FloorStreamingLayerLoadGroupStateEntry_TypeDefinitionIndex = 54753;

	class FloorStreamingLayerLoadGroupStateEntry : public ::System::Object
	{
	public:
		::System::Int32 GroupID; // 0x10
		::System::String* GroupState; // 0x18
		::System::Int32 GroupStateValue; // 0x20
		::MoleMole::Config::FloorStreamingLayerLoadGroupStateCompareType CompareType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_213D736C0BF38CDB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOORSTREAMINGLAYERLOADGROUPSTATEENTRY_METHOD_1_213D736C0BF38CDB_OFFSET))(this, a1, a2);
		}
	};
}
