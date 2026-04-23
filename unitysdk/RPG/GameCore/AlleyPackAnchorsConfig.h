#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorTypeEnum.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYPACKANCHORSCONFIG_METHOD_2_2BFF5B9A530EC02F_OFFSET UNITYSDK_OFFSET(0x1869B1E0)
#define RPG_GAMECORE_ALLEYPACKANCHORSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1869B3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyPackAnchorsConfig_TypeDefinitionIndex = 14846;

	class AlleyPackAnchorsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AlleyPackAnchorTypeEnum AnchorType; // 0x10
		::RPG::MVector3 RootPosition; // 0x14
		::System::UInt32 AnchorNumX; // 0x20
		::System::UInt32 AnchorNumY; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYPACKANCHORSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2BFF5B9A530EC02F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyPackAnchorsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyPackAnchorsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYPACKANCHORSCONFIG_METHOD_2_2BFF5B9A530EC02F_OFFSET))(a1, a2);
		}
	};
}
