#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMRTPCPREVIEWCONFIG_METHOD_2_104D3A4A256B4E4D_OFFSET UNITYSDK_OFFSET(0x189183F0)
#define RPG_GAMECORE_FIVEDIMRTPCPREVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18918430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRTPCPreviewConfig_TypeDefinitionIndex = 17881;

	class FiveDimRTPCPreviewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRTPCPREVIEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_104D3A4A256B4E4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRTPCPreviewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRTPCPreviewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRTPCPREVIEWCONFIG_METHOD_2_104D3A4A256B4E4D_OFFSET))(a1, a2);
		}
	};
}
