#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2D06946EF1533F6A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_SENSERANGECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B804B40)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8042C0)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG_METHOD_1_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x1B804340)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG_METHOD_1_2D1580F2F7D86B31_OFFSET UNITYSDK_OFFSET(0x1B804BA0)
#define MOLEMOLE_CONFIG_SENSERANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B804EC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SenseRangeConfig_TypeDefinitionIndex = 77838;

	class SenseRangeConfig : public ::System::Object
	{
	public:
		::System::String* NameKey; // 0x10
		::Enum_3_2D06946EF1533F6A RangeType; // 0x18
		::System::Single Radius; // 0x1C
		::System::Single HalfAngleInDeg; // 0x20
		::System::Boolean AutoEnable; // 0x24

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

		::System::Boolean Method_1_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG_METHOD_1_0CB3D614A4DB34A1_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_2D1580F2F7D86B31(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENSERANGECONFIG_METHOD_1_2D1580F2F7D86B31_OFFSET))(this, a1, a2);
		}
	};
}
