#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7D60A0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7D6010)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x7D6000)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x7D6100)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_METHOD_2_F777B3BEDBE68D53_OFFSET UNITYSDK_OFFSET(0x7D6130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigColliderRegisterData_TypeDefinitionIndex = 81348;

	struct alignas(8) ConfigColliderRegisterData
	{
		::System::String* ColliderName; // 0x10
		::System::Boolean ActiveState; // 0x18

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_F777B3BEDBE68D53(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_METHOD_2_F777B3BEDBE68D53_OFFSET))(this, a1, a2);
		}
	};
}
