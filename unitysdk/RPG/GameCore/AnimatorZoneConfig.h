#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimatorStateCustomZoneBinding; }
namespace RPG::GameCore { class AnimatorStateGroupZoneNewConfig; }
namespace RPG::GameCore { class AnimatorStateZoneNewConfig; }

#define RPG_GAMECORE_ANIMATORZONECONFIG_METHOD_2_C76AC9F8DB3D4820_OFFSET UNITYSDK_OFFSET(0x1947B9D0)
#define RPG_GAMECORE_ANIMATORZONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1947BAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorZoneConfig_TypeDefinitionIndex = 15521;

	class AnimatorZoneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimatorStateGroupZoneNewConfig* StateGroupZoneConfig; // 0x10
		::RPG::GameCore::AnimatorStateZoneNewConfig* StateZoneConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::AnimatorStateCustomZoneBinding*>* StateCustomZoneBindings; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORZONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C76AC9F8DB3D4820(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimatorZoneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimatorZoneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORZONECONFIG_METHOD_2_C76AC9F8DB3D4820_OFFSET))(a1, a2);
		}
	};
}
