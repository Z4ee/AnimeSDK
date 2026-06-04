#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_5A4892DF99AC37D7_OFFSET UNITYSDK_OFFSET(0x1956C070)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_7E374014D81B7BE3_OFFSET UNITYSDK_OFFSET(0x1956C0F0)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_86773FAC16C8579C_OFFSET UNITYSDK_OFFSET(0x1956BF30)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_EB2816B774EF9FD6_OFFSET UNITYSDK_OFFSET(0x1956BE60)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1956BEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRogueTournCurRoomFinish_TypeDefinitionIndex = 20898;

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

		static ::System::Void Method_4_5A4892DF99AC37D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_5A4892DF99AC37D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E374014D81B7BE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_7E374014D81B7BE3_OFFSET))(a1, a2);
		}
	};
}
