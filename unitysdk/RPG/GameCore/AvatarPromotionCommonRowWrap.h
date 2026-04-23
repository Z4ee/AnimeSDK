#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAvatarPromotionCommonRowWrap.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarPromotionCommonRowWrap; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARPROMOTIONCOMMONROWWRAP_GETALLWRAPDATA_OFFSET UNITYSDK_OFFSET(0x186C6360)
#define RPG_GAMECORE_AVATARPROMOTIONCOMMONROWWRAP_GETWRAPDATA_OFFSET UNITYSDK_OFFSET(0x186C6120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionCommonRowWrap_TypeDefinitionIndex = 23625;

	class AvatarPromotionCommonRowWrap : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAvatarPromotionCommonRowWrap* GetWrapData(::System::UInt32 nConfigID, ::System::UInt32 nPromotion, ::RPG::GameCore::EAvatarPromotionCommonRowWrap eMask, ::System::Boolean bAutoRecycle)
		{
			return ((::RPG::GameCore::IAvatarPromotionCommonRowWrap*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::EAvatarPromotionCommonRowWrap, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONCOMMONROWWRAP_GETWRAPDATA_OFFSET))(nConfigID, nPromotion, eMask, bAutoRecycle);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarPromotionCommonRowWrap*>* GetAllWrapData(::RPG::GameCore::EAvatarPromotionCommonRowWrap eMask)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarPromotionCommonRowWrap*>*(*)(::RPG::GameCore::EAvatarPromotionCommonRowWrap))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONCOMMONROWWRAP_GETALLWRAPDATA_OFFSET))(eMask);
		}
	};
}
