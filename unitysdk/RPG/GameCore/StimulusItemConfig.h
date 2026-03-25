#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STIMULUSITEMCONFIG_METHOD_2_B6468824F6353279_OFFSET UNITYSDK_OFFSET(0x1777C460)
#define RPG_GAMECORE_STIMULUSITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1777C510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StimulusItemConfig_TypeDefinitionIndex = 14332;

	class StimulusItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Range; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STIMULUSITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B6468824F6353279(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StimulusItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StimulusItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STIMULUSITEMCONFIG_METHOD_2_B6468824F6353279_OFFSET))(a1, a2);
		}
	};
}
