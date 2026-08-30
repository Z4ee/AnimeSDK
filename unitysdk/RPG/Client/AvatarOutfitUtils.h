#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarOutfitUnit; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAROUTFITUTILS_FILLNEWPLAYEROUTFITUNITS_OFFSET UNITYSDK_OFFSET(0x19EC0780)
#define RPG_CLIENT_AVATAROUTFITUTILS_GETAVATAROUTFITUNITBYITEMID_OFFSET UNITYSDK_OFFSET(0x19EC0560)
#define RPG_CLIENT_AVATAROUTFITUTILS_GETINTRODUCEIDBYITEMID_OFFSET UNITYSDK_OFFSET(0x19EC0620)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfitUtils_TypeDefinitionIndex = 62589;

	class AvatarOutfitUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarOutfitUnit* GetAvatarOutfitUnitByItemID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUTILS_GETAVATAROUTFITUNITBYITEMID_OFFSET))(a1);
		}

		static ::System::UInt32 GetIntroduceIDByItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUTILS_GETINTRODUCEIDBYITEMID_OFFSET))(a1);
		}

		static ::System::Void FillNewPlayerOutfitUnits(::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUTILS_FILLNEWPLAYEROUTFITUNITS_OFFSET))(a1);
		}
	};
}
