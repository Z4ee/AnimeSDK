#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TrainPartyEventFadeInType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN_METHOD_3_79B1783C9BDFD16B_OFFSET UNITYSDK_OFFSET(0x1C163EE0)
#define RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN_METHOD_3_94F56E17D97AD626_OFFSET UNITYSDK_OFFSET(0x1C163F20)
#define RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C163F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyShowEventFadeIn_TypeDefinitionIndex = 21558;

	class TrainPartyShowEventFadeIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TrainPartyEventFadeInType FadeInType; // 0x18
		::System::Boolean IsReplaceImage; // 0x1C
		::System::String* ImagePath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79B1783C9BDFD16B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyShowEventFadeIn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyShowEventFadeIn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN_METHOD_3_79B1783C9BDFD16B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_94F56E17D97AD626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyShowEventFadeIn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyShowEventFadeIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEVENTFADEIN_METHOD_3_94F56E17D97AD626_OFFSET))(a1, a2);
		}
	};
}
