#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PUMANHINTNOTIFYCONFIG_METHOD_2_73BF97487F0A95BE_OFFSET UNITYSDK_OFFSET(0x17573820)
#define RPG_GAMECORE_PUMANHINTNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17573920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuManHintNotifyConfig_TypeDefinitionIndex = 15531;

	class PuManHintNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsGold; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHINTNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_73BF97487F0A95BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PuManHintNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PuManHintNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHINTNOTIFYCONFIG_METHOD_2_73BF97487F0A95BE_OFFSET))(a1, a2);
		}
	};
}
