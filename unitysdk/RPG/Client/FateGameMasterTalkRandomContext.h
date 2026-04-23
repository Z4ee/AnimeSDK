#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkUIType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class FateGameData; }
namespace System { class String; }

#define RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_CLONEAVATARSWAPPED_OFFSET UNITYSDK_OFFSET(0xD6F80)
#define RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_CREATEBYGAMEDATA_OFFSET UNITYSDK_OFFSET(0xA347E50)
#define RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_GET_ISAVATAR2WIN_OFFSET UNITYSDK_OFFSET(0xD6F70)
#define RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD7020)
#define RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD7030)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkRandomContext_TypeDefinitionIndex = 58969;

	struct alignas(4) FateGameMasterTalkRandomContext
	{
		::RPG::Client::FateGameMasterTalkUIType UIType; // 0x10
		::System::UInt32 AvatarID1; // 0x14
		::System::UInt32 AvatarID2; // 0x18
		::System::Boolean IsAvatar1Win; // 0x1C
		::System::Boolean IsAvatar1Dead; // 0x1D
		::System::Boolean IsAvatar2Dead; // 0x1E
		::System::UInt32 CurAreaID; // 0x20
		::System::UInt32 CurPhaseID; // 0x24

		::System::Boolean get_IsAvatar2Win()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_GET_ISAVATAR2WIN_OFFSET))(this);
		}

		static ::RPG::Client::FateGameMasterTalkRandomContext CreateByGameData(::RPG::Client::FateGameMasterTalkUIType uiType, ::System::UInt32 avatarID1, ::System::UInt32 avatarID2, ::RPG::Client::FateGameData* gameData)
		{
			return ((::RPG::Client::FateGameMasterTalkRandomContext(*)(::RPG::Client::FateGameMasterTalkUIType, ::System::UInt32, ::System::UInt32, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_CREATEBYGAMEDATA_OFFSET))(uiType, avatarID1, avatarID2, gameData);
		}

		::RPG::Client::FateGameMasterTalkRandomContext CloneAvatarSwapped()
		{
			return ((::RPG::Client::FateGameMasterTalkRandomContext(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_CLONEAVATARSWAPPED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
