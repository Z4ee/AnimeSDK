#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F5486EF13585A6C7_2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_SENSERANGECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FFD9E0)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19FFD070)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x19FFD0F0)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG_METHOD_1_CA444252700C31C6_OFFSET UNITYSDK_OFFSET(0x19FFDA40)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFDE20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SenseRangeConfig_TypeDefinitionIndex = 66229;

	class SenseRangeConfig : public ::System::Object
	{
	public:
		::System::String* NameKey; // 0x10
		::Enum_3_F5486EF13585A6C7_2 RangeType; // 0x18
		::System::Single Radius; // 0x1C
		::System::Single HalfAngleInDeg; // 0x20
		::System::Boolean UseRaycast; // 0x24
		::System::Boolean AutoEnable; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_CA444252700C31C6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG_METHOD_1_CA444252700C31C6_OFFSET))(this, a1, a2);
		}
	};
}
