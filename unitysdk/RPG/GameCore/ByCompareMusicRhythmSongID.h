#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_64E1F2AF82396CBB_OFFSET UNITYSDK_OFFSET(0x1BBA97C0)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_6FC5CEB322AAAA7F_OFFSET UNITYSDK_OFFSET(0x1BBA9650)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_78D0E32809C51DF2_OFFSET UNITYSDK_OFFSET(0x1BBA9610)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_D4E98AFF36561814_OFFSET UNITYSDK_OFFSET(0x1BBA97F0)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA9640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMusicRhythmSongID_TypeDefinitionIndex = 21812;

	class ByCompareMusicRhythmSongID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 SongID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_78D0E32809C51DF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMusicRhythmSongID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_78D0E32809C51DF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FC5CEB322AAAA7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_6FC5CEB322AAAA7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_64E1F2AF82396CBB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_64E1F2AF82396CBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4E98AFF36561814(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_D4E98AFF36561814_OFFSET))(a1, a2);
		}
	};
}
