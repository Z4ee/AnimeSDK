#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK_METHOD_3_5E11CBC456D203F2_OFFSET UNITYSDK_OFFSET(0x199A49D0)
#define RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK_METHOD_3_B5DB89854E13815B_OFFSET UNITYSDK_OFFSET(0x199A4A50)
#define RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x199A4A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShowPlayerBubbleTalk_TypeDefinitionIndex = 19780;

	class MonopolyShowPlayerBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TalkParam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E11CBC456D203F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK_METHOD_3_5E11CBC456D203F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5DB89854E13815B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK_METHOD_3_B5DB89854E13815B_OFFSET))(a1, a2);
		}
	};
}
