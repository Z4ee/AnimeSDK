#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARHEIGHTRTPCCONFIG_METHOD_2_754FB2AA9415C887_OFFSET UNITYSDK_OFFSET(0x1A06C560)
#define RPG_GAMECORE_AVATARHEIGHTRTPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07B370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarHeightRTPCConfig_TypeDefinitionIndex = 15753;

	class AvatarHeightRTPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single UpdateInterval; // 0x18
		::System::Single UpdateThreshold; // 0x1C
		::System::Single AbsValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARHEIGHTRTPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_754FB2AA9415C887(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarHeightRTPCConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarHeightRTPCConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARHEIGHTRTPCCONFIG_METHOD_2_754FB2AA9415C887_OFFSET))(a1, a2);
		}
	};
}
