#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D10D530)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10DD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeBossGroupExtraConfigRow_TypeDefinitionIndex = 12852;

	class ChallengeBossGroupExtraConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffList3; // 0x10
		::System::String* ThemePosterTabPicPath; // 0x18
		::Il2CppArray<::System::UInt32>* BuffList2; // 0x20
		::System::String* ThemeIconPicPath; // 0x28
		::System::String* BossPositionDetailPrefabPath3; // 0x30
		::Il2CppArray<::System::UInt32>* BuffList1; // 0x38
		::System::String* BossPositionPrefabPath1; // 0x40
		::System::String* BossPositionEntrancePrefabPath3; // 0x48
		::System::String* BossPositionPrefabPath2; // 0x50
		::System::UInt32 GroupID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
