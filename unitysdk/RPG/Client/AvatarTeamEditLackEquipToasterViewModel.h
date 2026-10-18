#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_772;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xC70CC60)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC70CE30)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_REFRESHANDTRYTOAST_OFFSET UNITYSDK_OFFSET(0xC70D870)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL_RESET_OFFSET UNITYSDK_OFFSET(0xC70D290)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__ADDAVATAR_OFFSET UNITYSDK_OFFSET(0xC70D790)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__CREATEAVATARMAP_OFFSET UNITYSDK_OFFSET(0xC70DAB0)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC70CD40)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__GETADDEDAVATARS_OFFSET UNITYSDK_OFFSET(0xC70DFC0)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__ONPLAYERSETHEROBASICTYPE_OFFSET UNITYSDK_OFFSET(0xC70CEB0)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__TRYTOASTIFLACKEQUIP_1_OFFSET UNITYSDK_OFFSET(0xC70D190)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__TRYTOASTIFLACKEQUIP_OFFSET UNITYSDK_OFFSET(0xC70E1D0)
#define RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL___ONPLAYERSETHEROBASICTYPE_G__CONVERTTOROLEID_5_0_OFFSET UNITYSDK_OFFSET(0xC70D160)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarTeamEditLackEquipToasterViewModel_TypeDefinitionIndex = 60107;

	class AvatarTeamEditLackEquipToasterViewModel : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_772* _QueryMultiplePathConfigService; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* _AvatarsByID; // 0x18

		::System::Void _ctor(::Class_0_16E4307DCC419505_772* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_772*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__CTOR_OFFSET))(this, a1);
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

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* _CreateAvatarMap(::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__CREATEAVATARMAP_OFFSET))(this, a1);
		}

		::System::Void _AddAvatar(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__ADDAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _GetAddedAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__GETADDEDAVATARS_OFFSET))(this, a1, a2);
		}

		::System::Void _TryToastIfLackEquip(::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__TRYTOASTIFLACKEQUIP_OFFSET))(this, a1);
		}

		::System::Void _TryToastIfLackEquip_1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL__TRYTOASTIFLACKEQUIP_1_OFFSET))(this, a1);
		}

		::System::UInt32 __OnPlayerSetHeroBasicType_g__ConvertToRoleID_5_0(::Enum_3_DFCB42601400F441_1 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Enum_3_DFCB42601400F441_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARTEAMEDITLACKEQUIPTOASTERVIEWMODEL___ONPLAYERSETHEROBASICTYPE_G__CONVERTTOROLEID_5_0_OFFSET))(this, a1);
		}
	};
}
