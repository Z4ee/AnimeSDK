#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BUBBLENOTIFYCONFIG_METHOD_2_98F26E0D22E2C9BE_OFFSET UNITYSDK_OFFSET(0x16FF85D0)
#define RPG_GAMECORE_BUBBLENOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF8790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BubbleNotifyConfig_TypeDefinitionIndex = 15526;

	class BubbleNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::UInt32 BubbleId; // 0x14
		::System::String* PeppyText; // 0x18
		::System::Single Offset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUBBLENOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_98F26E0D22E2C9BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BubbleNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BubbleNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUBBLENOTIFYCONFIG_METHOD_2_98F26E0D22E2C9BE_OFFSET))(a1, a2);
		}
	};
}
