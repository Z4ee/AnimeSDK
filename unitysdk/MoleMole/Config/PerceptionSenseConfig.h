#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1B9F00670C415C4C.h"
#include "unitysdk/Enum_3_E31D4025871297C2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class SenseRangeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C473330)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C472420)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x1C4724A0)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_METHOD_1_5FF68F5BEF283770_OFFSET UNITYSDK_OFFSET(0x1C473390)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C473960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PerceptionSenseConfig_TypeDefinitionIndex = 65639;

	class PerceptionSenseConfig : public ::System::Object
	{
	public:
		::System::String* NameKey; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::SenseRangeConfig*>* RangeList; // 0x18
		::Enum_3_1B9F00670C415C4C TargetFilter; // 0x20
		::MoleMole::Config::CampType TargetFilterCampType; // 0x24
		::System::Collections::Generic::List_1<::System::String*>* TargetFilterTagQuery; // 0x28
		::System::Int32 MaxQueryNum; // 0x30
		::System::Boolean UseRaycast; // 0x34
		::Enum_3_E31D4025871297C2 EventMode; // 0x38
		::System::Single TickInterval; // 0x3C
		::System::Boolean AutoEnable; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_5FF68F5BEF283770(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_METHOD_1_5FF68F5BEF283770_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
		}
	};
}
