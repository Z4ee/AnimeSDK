#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYFINALITYBATTLEROLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D336EB0)
#define RPG_GAMECORE_ACTIVITYFINALITYBATTLEROLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D337380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFinalityBattleRoleRow_TypeDefinitionIndex = 11606;

	class ActivityFinalityBattleRoleRow : public ::System::Object
	{
	public:
		::System::String* AvatarEnglishName; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_ModifiedSkill; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_Stage; // 0x20
		::RPG::Client::TextID StageFeverSimpleDesc; // 0x28
		::RPG::Client::TextID AvatarFeverDesc; // 0x38
		::RPG::Client::TextID StageFeverDesc; // 0x48
		::RPG::Client::TextID AvatarFeverSimpleDesc; // 0x58
		::RPG::Client::TextID StageFeverCond; // 0x68
		::System::UInt32 ID; // 0x78
		::System::UInt32 SpecialAvatarID; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINALITYBATTLEROLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityFinalityBattleRoleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFinalityBattleRoleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINALITYBATTLEROLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
