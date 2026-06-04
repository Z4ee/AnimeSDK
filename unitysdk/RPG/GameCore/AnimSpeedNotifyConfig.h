#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ANIMSPEEDNOTIFYCONFIG_METHOD_2_C54CDE49DFAEBB6C_OFFSET UNITYSDK_OFFSET(0x19479620)
#define RPG_GAMECORE_ANIMSPEEDNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194797E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimSpeedNotifyConfig_TypeDefinitionIndex = 16097;

	class AnimSpeedNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LayerName; // 0x10
		::System::String* StateName; // 0x18
		::System::String* SpeedName; // 0x20
		::System::Single BeatNum; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMSPEEDNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C54CDE49DFAEBB6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimSpeedNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimSpeedNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMSPEEDNOTIFYCONFIG_METHOD_2_C54CDE49DFAEBB6C_OFFSET))(a1, a2);
		}
	};
}
