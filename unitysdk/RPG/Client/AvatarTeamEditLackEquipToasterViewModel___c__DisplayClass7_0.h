#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarTeamEditLackEquipToasterViewModel; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB398320)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL___C__DISPLAYCLASS7_0__REFRESHANDTRYTOAST_B__0_OFFSET UNITYSDK_OFFSET(0xB398330)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL___C__DISPLAYCLASS7_0__REFRESHANDTRYTOAST_B__1_OFFSET UNITYSDK_OFFSET(0xB398390)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarTeamEditLackEquipToasterViewModel___c__DisplayClass7_0_TypeDefinitionIndex = 56188;

	class AvatarTeamEditLackEquipToasterViewModel___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::AvatarSystem::IAvatar*>* newAvatars; // 0x10
		::RPG::Client::AvatarTeamEditLackEquipToasterViewModel* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAndTryToast_b__0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL___C__DISPLAYCLASS7_0__REFRESHANDTRYTOAST_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _RefreshAndTryToast_b__1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL___C__DISPLAYCLASS7_0__REFRESHANDTRYTOAST_B__1_OFFSET))(this, a1);
		}
	};
}
