#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETROGUEROOMFINISH_METHOD_3_22B98FB137F517F5_OFFSET UNITYSDK_OFFSET(0x18E40840)
#define RPG_GAMECORE_SETROGUEROOMFINISH_METHOD_3_622C41F78873E3E5_OFFSET UNITYSDK_OFFSET(0x18E407B0)
#define RPG_GAMECORE_SETROGUEROOMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x18E40810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetRogueRoomFinish_TypeDefinitionIndex = 19438;

	class SetRogueRoomFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEROOMFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_622C41F78873E3E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRogueRoomFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRogueRoomFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEROOMFINISH_METHOD_3_622C41F78873E3E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_22B98FB137F517F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRogueRoomFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRogueRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEROOMFINISH_METHOD_3_22B98FB137F517F5_OFFSET))(a1, a2);
		}
	};
}
