#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STROYLINETRIALAVATARDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B422710)
#define RPG_GAMECORE_STROYLINETRIALAVATARDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B422920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StroyLineTrialAvatarDataRow_TypeDefinitionIndex = 14593;

	class StroyLineTrialAvatarDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x10
		::Il2CppArray<::System::UInt32>* InitTrialAvatarList; // 0x18
		::System::UInt32 CaptainAvatarID; // 0x20
		::System::UInt32 StoryLineID; // 0x24
		::System::Boolean SkipJoinLineup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STROYLINETRIALAVATARDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StroyLineTrialAvatarDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StroyLineTrialAvatarDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STROYLINETRIALAVATARDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
