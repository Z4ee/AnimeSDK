#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameMasterInfoPlayerItem; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameMasterInfoMirrorItem; }
namespace RPG::Client { class IFateGameMasterInfoRealItem; }
namespace RPG::Client { class IFateGameMasterInfoRivalItem; }

#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASMIRROR_OFFSET UNITYSDK_OFFSET(0x9682F40)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASPLAYER_OFFSET UNITYSDK_OFFSET(0x9682DC0)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASREAL_OFFSET UNITYSDK_OFFSET(0x9682ED0)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASRIVAL_OFFSET UNITYSDK_OFFSET(0x9682E60)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISDEAD_OFFSET UNITYSDK_OFFSET(0x9681F20)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISMIRROR_OFFSET UNITYSDK_OFFSET(0x9682C40)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x9682390)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISREAL_OFFSET UNITYSDK_OFFSET(0x9682D40)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISRIVAL_OFFSET UNITYSDK_OFFSET(0x9682CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterInfoItemExt_TypeDefinitionIndex = 52008;

	class FateGameMasterInfoItemExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsDead(::RPG::Client::IFateGameMasterInfoRealItem* master)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoRealItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISDEAD_OFFSET))(master);
		}

		static ::System::Boolean IsPlayer(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISPLAYER_OFFSET))(master);
		}

		static ::System::Boolean IsRival(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISRIVAL_OFFSET))(master);
		}

		static ::System::Boolean IsReal(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISREAL_OFFSET))(master);
		}

		static ::System::Boolean IsMirror(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISMIRROR_OFFSET))(master);
		}

		static ::RPG::Client::FateGameMasterInfoPlayerItem* AsPlayer(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::RPG::Client::FateGameMasterInfoPlayerItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASPLAYER_OFFSET))(master);
		}

		static ::RPG::Client::IFateGameMasterInfoRivalItem* AsRival(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::RPG::Client::IFateGameMasterInfoRivalItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASRIVAL_OFFSET))(master);
		}

		static ::RPG::Client::IFateGameMasterInfoRealItem* AsReal(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::RPG::Client::IFateGameMasterInfoRealItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASREAL_OFFSET))(master);
		}

		static ::RPG::Client::IFateGameMasterInfoMirrorItem* AsMirror(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::RPG::Client::IFateGameMasterInfoMirrorItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASMIRROR_OFFSET))(master);
		}
	};
}
