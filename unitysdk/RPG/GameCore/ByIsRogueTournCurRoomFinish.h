#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_04AB1870464A6BA2_OFFSET UNITYSDK_OFFSET(0x1B2A2F50)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_7043728B63E59077_OFFSET UNITYSDK_OFFSET(0x1B2A2F80)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_86773FAC16C8579C_OFFSET UNITYSDK_OFFSET(0x1B2A2E10)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_BBA686AB5C66C517_OFFSET UNITYSDK_OFFSET(0x1B2A2DD0)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A2E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRogueTournCurRoomFinish_TypeDefinitionIndex = 21313;

	class ByIsRogueTournCurRoomFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BBA686AB5C66C517(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_BBA686AB5C66C517_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86773FAC16C8579C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_86773FAC16C8579C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_04AB1870464A6BA2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_04AB1870464A6BA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7043728B63E59077(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_METHOD_4_7043728B63E59077_OFFSET))(a1, a2);
		}
	};
}
