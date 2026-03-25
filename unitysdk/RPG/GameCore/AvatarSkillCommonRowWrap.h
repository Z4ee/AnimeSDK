#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAvatarSkillCommonRowWrap.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarSkillCommonRowWrap; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARSKILLCOMMONROWWRAP_GETALLWRAPDATA_OFFSET UNITYSDK_OFFSET(0x16FB2E00)
#define RPG_GAMECORE_AVATARSKILLCOMMONROWWRAP_GETWRAPDATA_OFFSET UNITYSDK_OFFSET(0x16FB2BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillCommonRowWrap_TypeDefinitionIndex = 22657;

	class AvatarSkillCommonRowWrap : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAvatarSkillCommonRowWrap* GetWrapData(::System::UInt32 nConfigID, ::System::UInt32 nLevel, ::RPG::GameCore::EAvatarSkillCommonRowWrap eMask, ::System::Boolean bAutoRecycle)
		{
			return ((::RPG::GameCore::IAvatarSkillCommonRowWrap*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::EAvatarSkillCommonRowWrap, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLCOMMONROWWRAP_GETWRAPDATA_OFFSET))(nConfigID, nLevel, eMask, bAutoRecycle);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarSkillCommonRowWrap*>* GetAllWrapData(::RPG::GameCore::EAvatarSkillCommonRowWrap eMask)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarSkillCommonRowWrap*>*(*)(::RPG::GameCore::EAvatarSkillCommonRowWrap))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLCOMMONROWWRAP_GETALLWRAPDATA_OFFSET))(eMask);
		}
	};
}
