#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F5486EF13585A6C7_1.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_QUESTSHOWAREADATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x74A3A0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREADATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x74A310)
#define MOLEMOLE_CONFIG_QUESTSHOWAREADATA_METHOD_2_280F9DEC4448E988_OFFSET UNITYSDK_OFFSET(0x74A300)
#define MOLEMOLE_CONFIG_QUESTSHOWAREADATA_METHOD_2_2A2B8F84DBD45997_OFFSET UNITYSDK_OFFSET(0x74A400)
#define MOLEMOLE_CONFIG_QUESTSHOWAREADATA_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x74A410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int QuestShowAreaData_TypeDefinitionIndex = 56390;

	struct alignas(8) QuestShowAreaData
	{
		::Enum_3_F5486EF13585A6C7_1 AreaShapeType; // 0x10
		::System::Single RectAreaLength; // 0x14
		::System::Single RectAreaWidth; // 0x18
		::System::Single CircleAreaRadius; // 0x1C
		::System::Single DecalHeightTop; // 0x20
		::System::Single DecalHeightBottom; // 0x24
		::System::Single RadarHeightTop; // 0x28
		::System::Single RadarHeightBottom; // 0x2C
		::System::Boolean ShowEffect; // 0x30
		::System::String* EffectName; // 0x38

		::System::Void Method_2_280F9DEC4448E988(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREADATA_METHOD_2_280F9DEC4448E988_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREADATA_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREADATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A2B8F84DBD45997(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREADATA_METHOD_2_2A2B8F84DBD45997_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREADATA_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/
	};
}
