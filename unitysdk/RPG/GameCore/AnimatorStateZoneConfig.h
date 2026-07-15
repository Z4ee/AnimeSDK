#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimatorStateZoneRangeConfig; }

#define RPG_GAMECORE_ANIMATORSTATEZONECONFIG_METHOD_2_11610B9E46F2D0AE_OFFSET UNITYSDK_OFFSET(0x1A057170)
#define RPG_GAMECORE_ANIMATORSTATEZONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A058710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorStateZoneConfig_TypeDefinitionIndex = 15682;

	class AnimatorStateZoneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimatorStateZoneRangeConfig*>* AnimatorStateZoneRangeList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_11610B9E46F2D0AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimatorStateZoneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimatorStateZoneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONECONFIG_METHOD_2_11610B9E46F2D0AE_OFFSET))(a1, a2);
		}
	};
}
