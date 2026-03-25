#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class String; }

#define RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x969F1E0)
#define RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x96A0860)
#define RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_MASTERROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x96A07F0)
#define RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_RANKING_OFFSET UNITYSDK_OFFSET(0x96A0850)
#define RPG_CLIENT_FATESTATISTICSMASTERINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x96A07C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsMasterInfoItem_TypeDefinitionIndex = 52051;

	class FateStatisticsMasterInfoItem : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _AvatarData; // 0x10
		::System::UInt32 _Ranking; // 0x18
		::System::Boolean _IsPlayer; // 0x1C
		::System::UInt32 _AvatarRealID; // 0x20

		::System::Void _ctor(::System::UInt32 avatarRealID, ::System::UInt32 ranking, ::System::Boolean isPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSMASTERINFOITEM__CTOR_OFFSET))(this, avatarRealID, ranking, isPlayer);
		}

		static ::RPG::Client::FateStatisticsMasterInfoItem* Create(::System::UInt32 avatarRealID, ::System::UInt32 ranking, ::System::Boolean isPlayer)
		{
			return ((::RPG::Client::FateStatisticsMasterInfoItem*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_CREATE_OFFSET))(avatarRealID, ranking, isPlayer);
		}

		::System::String* get_MasterRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_MASTERROUNDICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Ranking()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_RANKING_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSMASTERINFOITEM_GET_ISPLAYER_OFFSET))(this);
		}
	};
}
