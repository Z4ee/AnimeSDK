#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BackgroundTalkInfo; }

#define RPG_GAMECORE_BATTLEPLAYTALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B303550)
#define RPG_GAMECORE_BATTLEPLAYTALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B303510)
#define RPG_GAMECORE_BATTLEPLAYTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B303540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePlayTalk_TypeDefinitionIndex = 23118;

	class BattlePlayTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BackgroundTalkInfo*>* TalkList; // 0x18
		::System::Boolean KeepDisplay; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePlayTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePlayTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYTALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePlayTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePlayTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYTALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
