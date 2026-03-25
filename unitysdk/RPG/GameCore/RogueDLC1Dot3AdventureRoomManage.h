#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDLC1Dot3AdventureRoomType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE_METHOD_3_D78A7F648B382E88_OFFSET UNITYSDK_OFFSET(0x175EF6F0)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE_METHOD_3_D7ECE59D81973C97_OFFSET UNITYSDK_OFFSET(0x175EF670)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x175EF6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3AdventureRoomManage_TypeDefinitionIndex = 20470;

	class RogueDLC1Dot3AdventureRoomManage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RogueDLC1Dot3AdventureRoomType Type; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetBoxTrigger; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7ECE59D81973C97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE_METHOD_3_D7ECE59D81973C97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D78A7F648B382E88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE_METHOD_3_D78A7F648B382E88_OFFSET))(a1, a2);
		}
	};
}
