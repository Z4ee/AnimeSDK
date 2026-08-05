#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_48FC4D1DFC0B2BB7.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_STIMULUSEVENTITEM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x866060)
#define MOLEMOLE_CONFIG_STIMULUSEVENTITEM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x865FD0)
#define MOLEMOLE_CONFIG_STIMULUSEVENTITEM_METHOD_2_1F4AF917A1653551_OFFSET UNITYSDK_OFFSET(0x8660C0)
#define MOLEMOLE_CONFIG_STIMULUSEVENTITEM_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x8660D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StimulusEventItem_TypeDefinitionIndex = 46147;

	struct alignas(4) StimulusEventItem
	{
		::Enum_3_48FC4D1DFC0B2BB7 Event; // 0x10
		::System::Int32 stimulusID; // 0x14

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEVENTITEM_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEVENTITEM_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_1F4AF917A1653551(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEVENTITEM_METHOD_2_1F4AF917A1653551_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEVENTITEM_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/
	};
}
