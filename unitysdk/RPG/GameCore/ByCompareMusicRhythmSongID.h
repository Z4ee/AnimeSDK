#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_4A8E18261784EB02_OFFSET UNITYSDK_OFFSET(0x19523410)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_6FC5CEB322AAAA7F_OFFSET UNITYSDK_OFFSET(0x19523220)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_7EB7BADC0CAA415E_OFFSET UNITYSDK_OFFSET(0x19523390)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_B2A281183527795D_OFFSET UNITYSDK_OFFSET(0x19523150)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID__CTOR_OFFSET UNITYSDK_OFFSET(0x195231D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMusicRhythmSongID_TypeDefinitionIndex = 20837;

	class ByCompareMusicRhythmSongID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 SongID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B2A281183527795D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMusicRhythmSongID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_B2A281183527795D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FC5CEB322AAAA7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_6FC5CEB322AAAA7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EB7BADC0CAA415E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_7EB7BADC0CAA415E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4A8E18261784EB02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_METHOD_4_4A8E18261784EB02_OFFSET))(a1, a2);
		}
	};
}
