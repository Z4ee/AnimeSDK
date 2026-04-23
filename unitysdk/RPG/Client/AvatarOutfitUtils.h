#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarOutfitUnit; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAROUTFITUTILS_FILLNEWPLAYEROUTFITUNITS_OFFSET UNITYSDK_OFFSET(0x9DB23D0)
#define RPG_CLIENT_AVATAROUTFITUTILS_GETAVATAROUTFITUNITBYITEMID_OFFSET UNITYSDK_OFFSET(0x9DB21F0)
#define RPG_CLIENT_AVATAROUTFITUTILS_GETINTRODUCEIDBYITEMID_OFFSET UNITYSDK_OFFSET(0x9DB22B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfitUtils_TypeDefinitionIndex = 57683;

	class AvatarOutfitUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarOutfitUnit* GetAvatarOutfitUnitByItemID(::System::UInt32 itemID)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUTILS_GETAVATAROUTFITUNITBYITEMID_OFFSET))(itemID);
		}

		static ::System::UInt32 GetIntroduceIDByItemID(::System::UInt32 itemID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUTILS_GETINTRODUCEIDBYITEMID_OFFSET))(itemID);
		}

		static ::System::Void FillNewPlayerOutfitUnits(::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>* buffer)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUTILS_FILLNEWPLAYEROUTFITUNITS_OFFSET))(buffer);
		}
	};
}
