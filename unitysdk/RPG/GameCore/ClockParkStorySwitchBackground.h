#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND_METHOD_3_2F853D45CE797F8C_OFFSET UNITYSDK_OFFSET(0x1C262580)
#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND_METHOD_3_E97FA74A6E754839_OFFSET UNITYSDK_OFFSET(0x1C2625D0)
#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2625C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStorySwitchBackground_TypeDefinitionIndex = 20160;

	class ClockParkStorySwitchBackground : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BackgroundPrefabPath; // 0x18
		::System::String* BackgroundFrontPrefabPath; // 0x20
		::System::Boolean BackgroundFrontVisible; // 0x28
		::System::Boolean WaitFinish; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F853D45CE797F8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStorySwitchBackground*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStorySwitchBackground*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND_METHOD_3_2F853D45CE797F8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E97FA74A6E754839(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStorySwitchBackground* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStorySwitchBackground*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND_METHOD_3_E97FA74A6E754839_OFFSET))(a1, a2);
		}
	};
}
