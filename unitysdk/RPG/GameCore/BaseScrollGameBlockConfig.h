#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG_METHOD_2_7BF217C5D4F83FE6_OFFSET UNITYSDK_OFFSET(0x1B2EED50)
#define RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG_METHOD_2_B7655C643B361DE1_OFFSET UNITYSDK_OFFSET(0x1B2EEF10)
#define RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EEF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseScrollGameBlockConfig_TypeDefinitionIndex = 18597;

	class BaseScrollGameBlockConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PresetName; // 0x10
		::System::Single BlockLength; // 0x18
		::System::Single Probability; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7BF217C5D4F83FE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseScrollGameBlockConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseScrollGameBlockConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG_METHOD_2_7BF217C5D4F83FE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B7655C643B361DE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseScrollGameBlockConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseScrollGameBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG_METHOD_2_B7655C643B361DE1_OFFSET))(a1, a2);
		}
	};
}
