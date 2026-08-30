#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHTIPRANGECONFIG_METHOD_2_845A88146AA11D6A_OFFSET UNITYSDK_OFFSET(0x1D32EA90)
#define RPG_GAMECORE_PHOTOGRAPHTIPRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D32EC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphTipRangeConfig_TypeDefinitionIndex = 21392;

	class PhotoGraphTipRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MinDistance; // 0x10
		::System::Single MaxDistance; // 0x14
		::RPG::Client::TextID TipText; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTIPRANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_845A88146AA11D6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphTipRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphTipRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTIPRANGECONFIG_METHOD_2_845A88146AA11D6A_OFFSET))(a1, a2);
		}
	};
}
