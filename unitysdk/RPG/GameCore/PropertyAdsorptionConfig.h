#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPERTYADSORPTIONCONFIG_METHOD_2_E35973DF0AD0AA2F_OFFSET UNITYSDK_OFFSET(0x17573070)
#define RPG_GAMECORE_PROPERTYADSORPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175731E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropertyAdsorptionConfig_TypeDefinitionIndex = 15685;

	class PropertyAdsorptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint AdsorptionThresh; // 0x10
		::System::Int32 FractionalDigit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPERTYADSORPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E35973DF0AD0AA2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropertyAdsorptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropertyAdsorptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPERTYADSORPTIONCONFIG_METHOD_2_E35973DF0AD0AA2F_OFFSET))(a1, a2);
		}
	};
}
