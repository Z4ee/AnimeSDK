#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ANIMZONEFOOTCONFIG_METHOD_3_12F08FC795DDFE97_OFFSET UNITYSDK_OFFSET(0x19479DF0)
#define RPG_GAMECORE_ANIMZONEFOOTCONFIG_METHOD_3_82FF33A42A444127_OFFSET UNITYSDK_OFFSET(0x1947A0C0)
#define RPG_GAMECORE_ANIMZONEFOOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19479DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimZoneFootConfig_TypeDefinitionIndex = 15509;

	class AnimZoneFootConfig : public ::RPG::GameCore::AnimZoneBaseConfig
	{
	public:
		::System::Boolean IsStepL; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEFOOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82FF33A42A444127(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimZoneFootConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimZoneFootConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEFOOTCONFIG_METHOD_3_82FF33A42A444127_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12F08FC795DDFE97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimZoneFootConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimZoneFootConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEFOOTCONFIG_METHOD_3_12F08FC795DDFE97_OFFSET))(a1, a2);
		}
	};
}
