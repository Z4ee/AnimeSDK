#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x8CD070)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8CD110)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8CD080)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x8CD170)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_METHOD_2_F777B3BEDBE68D53_OFFSET UNITYSDK_OFFSET(0x8CD1A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigColliderRegisterData_TypeDefinitionIndex = 54798;

	struct alignas(8) ConfigColliderRegisterData
	{
		::System::String* ColliderName; // 0x10
		::System::Boolean ActiveState; // 0x18

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERREGISTERDATA_EXPOSEMEMBER_OFFSET))(this, a1, a2);
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
