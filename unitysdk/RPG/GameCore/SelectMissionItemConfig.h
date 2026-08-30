#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SELECTMISSIONITEMCONFIG_METHOD_2_B5932F766CCA8734_OFFSET UNITYSDK_OFFSET(0x1D4D8B20)
#define RPG_GAMECORE_SELECTMISSIONITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D8CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelectMissionItemConfig_TypeDefinitionIndex = 20208;

	class SelectMissionItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Item1; // 0x10
		::System::UInt32 Item2; // 0x14
		::System::UInt32 Item3; // 0x18
		::System::String* TriggerCustomString; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTMISSIONITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B5932F766CCA8734(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SelectMissionItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SelectMissionItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTMISSIONITEMCONFIG_METHOD_2_B5932F766CCA8734_OFFSET))(a1, a2);
		}
	};
}
