#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHBODYSIZEHEIGHTCONFIG_METHOD_2_BFEF9988F62FE8D1_OFFSET UNITYSDK_OFFSET(0x1D32AD50)
#define RPG_GAMECORE_PHOTOGRAPHBODYSIZEHEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D32AE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphBodySizeHeightConfig_TypeDefinitionIndex = 18830;

	class PhotoGraphBodySizeHeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BodySize Size; // 0x10
		::System::Single Height; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHBODYSIZEHEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BFEF9988F62FE8D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphBodySizeHeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphBodySizeHeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHBODYSIZEHEIGHTCONFIG_METHOD_2_BFEF9988F62FE8D1_OFFSET))(a1, a2);
		}
	};
}
