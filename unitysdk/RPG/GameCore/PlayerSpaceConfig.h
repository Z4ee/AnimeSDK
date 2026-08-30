#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERSPACECONFIG_METHOD_2_901B6599D95E06FD_OFFSET UNITYSDK_OFFSET(0x1D356F70)
#define RPG_GAMECORE_PLAYERSPACECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3572A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerSpaceConfig_TypeDefinitionIndex = 16225;

	class PlayerSpaceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SpaceRTPC; // 0x10
		::System::String* SpaceRTPCAvatar; // 0x18
		::System::Single MaxSpaceRTPC; // 0x20
		::System::Single DefaultSpaceRTPC; // 0x24
		::System::String* LeftRightRTPC; // 0x28
		::System::String* LeftRightRTPCAvatar; // 0x30
		::System::Single MaxSideSpaceRTPC; // 0x38
		::System::Single DefaultSideSpaceRTPC; // 0x3C
		::System::Single RaycastAroundMaxDistance; // 0x40
		::System::Single RaycastTopMaxHeight; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSPACECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_901B6599D95E06FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerSpaceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerSpaceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSPACECONFIG_METHOD_2_901B6599D95E06FD_OFFSET))(a1, a2);
		}
	};
}
