#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAvatarPromotionCommonRowWrap.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarPromotionCommonRowWrap; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARPROMOTIONCOMMONROWWRAP_GETALLWRAPDATA_OFFSET UNITYSDK_OFFSET(0x1B612620)
#define RPG_GAMECORE_AVATARPROMOTIONCOMMONROWWRAP_GETWRAPDATA_OFFSET UNITYSDK_OFFSET(0x1B6123A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionCommonRowWrap_TypeDefinitionIndex = 56728;

	class AvatarPromotionCommonRowWrap : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAvatarPromotionCommonRowWrap* GetWrapData(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::EAvatarPromotionCommonRowWrap a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::IAvatarPromotionCommonRowWrap*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::EAvatarPromotionCommonRowWrap, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONCOMMONROWWRAP_GETWRAPDATA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarPromotionCommonRowWrap*>* GetAllWrapData(::RPG::GameCore::EAvatarPromotionCommonRowWrap a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarPromotionCommonRowWrap*>*(*)(::RPG::GameCore::EAvatarPromotionCommonRowWrap))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONCOMMONROWWRAP_GETALLWRAPDATA_OFFSET))(a1);
		}
	};
}
