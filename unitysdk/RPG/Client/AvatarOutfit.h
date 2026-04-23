#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarOutfit_PlayerOutfitSlotTypeFlags.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_999AE0B49D951C72;
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::Client { class AvatarOutfit_IServerAgent; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAROUTFIT_CHECKISDRESSED_OFFSET UNITYSDK_OFFSET(0x9DAD6A0)
#define RPG_CLIENT_AVATAROUTFIT_CREATE_OFFSET UNITYSDK_OFFSET(0x9DA83F0)
#define RPG_CLIENT_AVATAROUTFIT_FILLDRESSEDIDSTO_OFFSET UNITYSDK_OFFSET(0x9DAD740)
#define RPG_CLIENT_AVATAROUTFIT_GETMODELSBYTARGETSLOTS_OFFSET UNITYSDK_OFFSET(0x9DAE170)
#define RPG_CLIENT_AVATAROUTFIT_GETMODELS_1_OFFSET UNITYSDK_OFFSET(0x9DAD860)
#define RPG_CLIENT_AVATAROUTFIT_GETMODELS_OFFSET UNITYSDK_OFFSET(0x9DAD800)
#define RPG_CLIENT_AVATAROUTFIT_GETSERVERDATA_OFFSET UNITYSDK_OFFSET(0x9DAED50)
#define RPG_CLIENT_AVATAROUTFIT_ISSAME_OFFSET UNITYSDK_OFFSET(0x9DAEDA0)
#define RPG_CLIENT_AVATAROUTFIT_SETDRESSEDIDS_OFFSET UNITYSDK_OFFSET(0x9DAD7A0)
#define RPG_CLIENT_AVATAROUTFIT__CTOR_OFFSET UNITYSDK_OFFSET(0x9DAD690)
#define RPG_CLIENT_AVATAROUTFIT__FILLUNITSTO_OFFSET UNITYSDK_OFFSET(0x9DAE7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfit_TypeDefinitionIndex = 57671;

	class AvatarOutfit : public ::System::Object
	{
	public:
		::RPG::Client::AvatarOutfit_IServerAgent* _ServerAgent; // 0x10

		::System::Void _ctor(::RPG::Client::AvatarOutfit_IServerAgent* serverAgent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfit_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT__CTOR_OFFSET))(this, serverAgent);
		}

		static ::RPG::Client::AvatarOutfit* Create(::RPG::Client::AvatarOutfit_IServerAgent* serverAgent)
		{
			return ((::RPG::Client::AvatarOutfit*(*)(::RPG::Client::AvatarOutfit_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_CREATE_OFFSET))(serverAgent);
		}

		::System::Boolean CheckIsDressed(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_CHECKISDRESSED_OFFSET))(this, id);
		}

		::System::Void FillDressedIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_FILLDRESSEDIDSTO_OFFSET))(this, buffer);
		}

		::System::Void SetDressedIDs(::System::Collections::Generic::List_1<::System::UInt32>* dressedOutfitIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_SETDRESSEDIDS_OFFSET))(this, dressedOutfitIDs);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* GetModels(::RPG::GameCore::GenderType gender, ::RPG::GameCore::AvatarBaseType type)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID, ::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_GETMODELS_OFFSET))(this, gender, type);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* GetModels_1(::RPG::GameCore::GenderType gender, ::RPG::GameCore::AvatarBaseType type, ::RPG::Client::AvatarOutfitUnit* previewUnit)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID, ::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_GETMODELS_1_OFFSET))(this, gender, type, previewUnit);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* GetModelsByTargetSlots(::RPG::GameCore::GenderType gender, ::RPG::GameCore::AvatarBaseType type, ::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags useDefaultSlotFlags)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID, ::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType, ::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_GETMODELSBYTARGETSLOTS_OFFSET))(this, gender, type, useDefaultSlotFlags);
		}

		::Class_1_075C34D03AFA1215_7* GetServerData()
		{
			return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_GETSERVERDATA_OFFSET))(this);
		}

		::System::Boolean IsSame(::RPG::Client::AvatarOutfit* otherOutfit)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_ISSAME_OFFSET))(this, otherOutfit);
		}

		::System::Void _FillUnitsTo(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* buffer, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>* excludeSlotTypes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT__FILLUNITSTO_OFFSET))(this, buffer, excludeSlotTypes);
		}
	};
}
