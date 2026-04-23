#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_86773FAC16C8579C_OFFSET UNITYSDK_OFFSET(0x18756B60)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_EB2816B774EF9FD6_OFFSET UNITYSDK_OFFSET(0x18756A90)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x18756B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRogueTournCurRoomFinish_TypeDefinitionIndex = 20986;

	class ByIsRogueTournCurRoomFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EB2816B774EF9FD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_EB2816B774EF9FD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86773FAC16C8579C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_86773FAC16C8579C_OFFSET))(a1, a2);
		}
	};
}
