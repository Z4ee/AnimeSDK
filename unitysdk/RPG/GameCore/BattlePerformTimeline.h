#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMTIMELINE_METHOD_3_04DEECB3CCBED62E_OFFSET UNITYSDK_OFFSET(0x1A3F5830)
#define RPG_GAMECORE_BATTLEPERFORMTIMELINE_METHOD_3_0D8F9034ED15A3ED_OFFSET UNITYSDK_OFFSET(0x1A3F57F0)
#define RPG_GAMECORE_BATTLEPERFORMTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F5820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformTimeline_TypeDefinitionIndex = 22546;

	class BattlePerformTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelinePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMTIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D8F9034ED15A3ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformTimeline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformTimeline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMTIMELINE_METHOD_3_0D8F9034ED15A3ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04DEECB3CCBED62E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformTimeline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMTIMELINE_METHOD_3_04DEECB3CCBED62E_OFFSET))(a1, a2);
		}
	};
}
