#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_55183DEC87F7E407.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class SenseRangeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AA722C0)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1AA717C0)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x1AA71840)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_METHOD_1_63504F43D182DDB3_OFFSET UNITYSDK_OFFSET(0x1AA72320)
#define MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA72880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PerceptionSenseConfig_TypeDefinitionIndex = 40153;

	class PerceptionSenseConfig : public ::System::Object
	{
	public:
		::System::String* NameKey; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::SenseRangeConfig*>* RangeList; // 0x18
		::Enum_3_55183DEC87F7E407 TargetFilter; // 0x20
		::MoleMole::Config::CampType TargetFilterCampType; // 0x24
		::System::Collections::Generic::List_1<::System::String*>* TargetFilterTagQuery; // 0x28
		::System::Boolean SortResultByDistance; // 0x30
		::System::Boolean AutoEnable; // 0x31

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

		::System::Boolean Method_1_63504F43D182DDB3(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_METHOD_1_63504F43D182DDB3_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONSENSECONFIG_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
		}
	};
}
