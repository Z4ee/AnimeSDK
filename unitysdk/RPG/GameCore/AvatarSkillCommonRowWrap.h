#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAvatarSkillCommonRowWrap.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarSkillCommonRowWrap; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARSKILLCOMMONROWWRAP_GETALLWRAPDATA_OFFSET UNITYSDK_OFFSET(0x1B61BA90)
#define RPG_GAMECORE_AVATARSKILLCOMMONROWWRAP_GETWRAPDATA_OFFSET UNITYSDK_OFFSET(0x1B6193F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillCommonRowWrap_TypeDefinitionIndex = 56733;

	class AvatarSkillCommonRowWrap : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAvatarSkillCommonRowWrap* GetWrapData(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::EAvatarSkillCommonRowWrap a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::IAvatarSkillCommonRowWrap*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::EAvatarSkillCommonRowWrap, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLCOMMONROWWRAP_GETWRAPDATA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarSkillCommonRowWrap*>* GetAllWrapData(::RPG::GameCore::EAvatarSkillCommonRowWrap a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarSkillCommonRowWrap*>*(*)(::RPG::GameCore::EAvatarSkillCommonRowWrap))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLCOMMONROWWRAP_GETALLWRAPDATA_OFFSET))(a1);
		}
	};
}
