#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEISLANDHLODCONFIG_METHOD_2_AB25782E2113A148_OFFSET UNITYSDK_OFFSET(0x177687F0)
#define RPG_GAMECORE_STAGEISLANDHLODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17768900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageIslandHLODConfig_TypeDefinitionIndex = 17543;

	class StageIslandHLODConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* HLODPath; // 0x10
		::RPG::GameCore::HoyoTagContainer* HoyoTag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDHLODCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AB25782E2113A148(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageIslandHLODConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageIslandHLODConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDHLODCONFIG_METHOD_2_AB25782E2113A148_OFFSET))(a1, a2);
		}
	};
}
