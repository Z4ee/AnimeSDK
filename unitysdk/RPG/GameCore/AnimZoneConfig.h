#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimatorStateZoneConfig; }

#define RPG_GAMECORE_ANIMZONECONFIG_METHOD_2_FED5CCEC31384970_OFFSET UNITYSDK_OFFSET(0x1A0570B0)
#define RPG_GAMECORE_ANIMZONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A057160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimZoneConfig_TypeDefinitionIndex = 15683;

	class AnimZoneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimatorStateZoneConfig* StateZoneConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FED5CCEC31384970(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimZoneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimZoneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONECONFIG_METHOD_2_FED5CCEC31384970_OFFSET))(a1, a2);
		}
	};
}
