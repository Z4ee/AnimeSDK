#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_606;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xB397610)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB397820)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_REFRESHANDTRYTOAST_OFFSET UNITYSDK_OFFSET(0xB397F80)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_RESET_OFFSET UNITYSDK_OFFSET(0xB397BD0)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB3976F0)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__ONPLAYERSETHEROBASICTYPE_OFFSET UNITYSDK_OFFSET(0xB3978A0)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__TRYTOASTIFLACKEQUIP_OFFSET UNITYSDK_OFFSET(0xB397B20)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL___ONPLAYERSETHEROBASICTYPE_G__CONVERTTOROLEID_5_0_OFFSET UNITYSDK_OFFSET(0xB397AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarTeamEditLackEquipToasterViewModel_TypeDefinitionIndex = 56187;

	class AvatarTeamEditLackEquipToasterViewModel : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_606* _QueryMultiplePathConfigService; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::AvatarSystem::IAvatar*>* _Avatars; // 0x18

		::System::Void _ctor(::Class_0_16E4307DCC419505_606* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_606*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::AvatarTeamEditLackEquipToasterViewModel* Create()
		{
			return ((::RPG::Client::AvatarTeamEditLackEquipToasterViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnPlayerSetHeroBasicType(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__ONPLAYERSETHEROBASICTYPE_OFFSET))(this, a1);
		}

		::System::Void Reset(::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_RESET_OFFSET))(this, a1);
		}

		::System::Void RefreshAndTryToast(::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_REFRESHANDTRYTOAST_OFFSET))(this, a1);
		}

		::System::Void _TryToastIfLackEquip(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__TRYTOASTIFLACKEQUIP_OFFSET))(this, a1);
		}

		::System::UInt32 __OnPlayerSetHeroBasicType_g__ConvertToRoleID_5_0(::Enum_3_DFCB42601400F441 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL___ONPLAYERSETHEROBASICTYPE_G__CONVERTTOROLEID_5_0_OFFSET))(this, a1);
		}
	};
}
