#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AEA0006661D84E3E;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDBB3240)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS2_0__GETTRIALAVATARLIST_B__0_OFFSET UNITYSDK_OFFSET(0xDBB34A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnTrialAvatarGroup___c__DisplayClass2_0_TypeDefinitionIndex = 61975;

	class PlayerReturnTrialAvatarGroup___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Class_1_AEA0006661D84E3E* trialAvatarService; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* _GetTrialAvatarList_b__0(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS2_0__GETTRIALAVATARLIST_B__0_OFFSET))(this, a1);
		}
	};
}
