#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEISLANDHLODCONFIG_METHOD_2_85327A53B300A75B_OFFSET UNITYSDK_OFFSET(0x1D5593D0)
#define RPG_GAMECORE_STAGEISLANDHLODCONFIG_METHOD_2_AB25782E2113A148_OFFSET UNITYSDK_OFFSET(0x1D5592B0)
#define RPG_GAMECORE_STAGEISLANDHLODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5593C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageIslandHLODConfig_TypeDefinitionIndex = 18905;

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

		static ::System::Void Method_2_85327A53B300A75B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandHLODConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandHLODConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDHLODCONFIG_METHOD_2_85327A53B300A75B_OFFSET))(a1, a2);
		}
	};
}
