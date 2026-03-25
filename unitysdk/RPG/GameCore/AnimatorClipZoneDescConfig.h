#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimationZone; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATORCLIPZONEDESCCONFIG_METHOD_2_5BAEB39FB4ED61CC_OFFSET UNITYSDK_OFFSET(0x16F83810)
#define RPG_GAMECORE_ANIMATORCLIPZONEDESCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F83960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorClipZoneDescConfig_TypeDefinitionIndex = 14946;

	class AnimatorClipZoneDescConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ClipName; // 0x10
		::Il2CppArray<::RPG::GameCore::AnimationZone*>* ZoneList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORCLIPZONEDESCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5BAEB39FB4ED61CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimatorClipZoneDescConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimatorClipZoneDescConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORCLIPZONEDESCCONFIG_METHOD_2_5BAEB39FB4ED61CC_OFFSET))(a1, a2);
		}
	};
}
