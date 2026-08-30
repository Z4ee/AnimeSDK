#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainConfig; }

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINMAP_METHOD_2_0A52FE55CA21B4B4_OFFSET UNITYSDK_OFFSET(0x1D262510)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D262660)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AIPriorityRetainMap_TypeDefinitionIndex = 24665;

	class MatchThree1v1AIPriorityRetainMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Priority; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig*>* RetainMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0A52FE55CA21B4B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINMAP_METHOD_2_0A52FE55CA21B4B4_OFFSET))(a1, a2);
		}
	};
}
