#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameMasterTalkUIType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class FateGameData; }
namespace System { class String; }

#define RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_CLONEAVATARSWAPPED_OFFSET UNITYSDK_OFFSET(0x3B91470)
#define RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_CREATEBYGAMEDATA_OFFSET UNITYSDK_OFFSET(0x1C18BEF0)
#define RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_GET_ISAVATAR2WIN_OFFSET UNITYSDK_OFFSET(0x3B91420)
#define RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B91490)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkRandomContext_TypeDefinitionIndex = 64165;

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

		static ::RPG::Client::FateGameMasterTalkRandomContext CreateByGameData(::RPG::Client::FateGameMasterTalkUIType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::FateGameData* a4)
		{
			return ((::RPG::Client::FateGameMasterTalkRandomContext(*)(::RPG::Client::FateGameMasterTalkUIType, ::System::UInt32, ::System::UInt32, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_CREATEBYGAMEDATA_OFFSET))(a1, a2, a3, a4);
		}

		::RPG::Client::FateGameMasterTalkRandomContext CloneAvatarSwapped()
		{
			return ((::RPG::Client::FateGameMasterTalkRandomContext(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_CLONEAVATARSWAPPED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKRANDOMCONTEXT_TOSTRING_OFFSET))(this);
		}
	};
}
