#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainMap; }

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AILEVELCONFIG_METHOD_2_872FC6E20B81FC73_OFFSET UNITYSDK_OFFSET(0x1BD298F0)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AILEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD29A90)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AILevelConfig_TypeDefinitionIndex = 24077;

	class MatchThree1v1AILevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Level; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainMap*>* PriorityRetainMap; // 0x18
		::Il2CppArray<::System::UInt32>* MaxPropUseCountMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AILEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_872FC6E20B81FC73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::MatchThree1v1AILevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::MatchThree1v1AILevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AILEVELCONFIG_METHOD_2_872FC6E20B81FC73_OFFSET))(a1, a2);
		}
	};
}
