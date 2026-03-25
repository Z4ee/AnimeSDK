#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyBuildBlock; }

#define RPG_GAMECORE_TRAINPARTYBUILDITEMCONFIG_METHOD_2_FB2E3F8ED119670B_OFFSET UNITYSDK_OFFSET(0x178A86E0)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178A87B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemConfig_TypeDefinitionIndex = 14889;

	class TrainPartyBuildItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartyBuildBlock*>* Blocks; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FB2E3F8ED119670B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMCONFIG_METHOD_2_FB2E3F8ED119670B_OFFSET))(a1, a2);
		}
	};
}
