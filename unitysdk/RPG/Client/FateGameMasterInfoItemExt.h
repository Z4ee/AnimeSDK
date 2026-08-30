#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameMasterInfoPlayerItem; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameMasterInfoMirrorItem; }
namespace RPG::Client { class IFateGameMasterInfoRealItem; }
namespace RPG::Client { class IFateGameMasterInfoRivalItem; }

#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASMIRROR_OFFSET UNITYSDK_OFFSET(0xCF42780)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASPLAYER_OFFSET UNITYSDK_OFFSET(0xCF425C0)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASREAL_OFFSET UNITYSDK_OFFSET(0xCF426F0)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASRIVAL_OFFSET UNITYSDK_OFFSET(0xCF42660)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISDEAD_OFFSET UNITYSDK_OFFSET(0xCF413B0)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISMIRROR_OFFSET UNITYSDK_OFFSET(0xCF42410)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xCF41910)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISREAL_OFFSET UNITYSDK_OFFSET(0xCF42530)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISRIVAL_OFFSET UNITYSDK_OFFSET(0xCF424A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterInfoItemExt_TypeDefinitionIndex = 64153;

	class FateGameMasterInfoItemExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsDead(::RPG::Client::IFateGameMasterInfoRealItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoRealItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISDEAD_OFFSET))(a1);
		}

		static ::System::Boolean IsPlayer(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISPLAYER_OFFSET))(a1);
		}

		static ::System::Boolean IsRival(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISRIVAL_OFFSET))(a1);
		}

		static ::System::Boolean IsReal(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISREAL_OFFSET))(a1);
		}

		static ::System::Boolean IsMirror(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISMIRROR_OFFSET))(a1);
		}

		static ::RPG::Client::FateGameMasterInfoPlayerItem* AsPlayer(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::RPG::Client::FateGameMasterInfoPlayerItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASPLAYER_OFFSET))(a1);
		}

		static ::RPG::Client::IFateGameMasterInfoRivalItem* AsRival(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::RPG::Client::IFateGameMasterInfoRivalItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASRIVAL_OFFSET))(a1);
		}

		static ::RPG::Client::IFateGameMasterInfoRealItem* AsReal(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::RPG::Client::IFateGameMasterInfoRealItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASREAL_OFFSET))(a1);
		}

		static ::RPG::Client::IFateGameMasterInfoMirrorItem* AsMirror(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::RPG::Client::IFateGameMasterInfoMirrorItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASMIRROR_OFFSET))(a1);
		}
	};
}
