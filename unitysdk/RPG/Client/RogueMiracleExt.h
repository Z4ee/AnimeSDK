#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class IRogueMiracleWithCategory; }
namespace RPG::Client { class IRogueTournMiracle; }
namespace RPG::Client { class IRogueTournMiracleInGame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLEEXT_ASINGAME_OFFSET UNITYSDK_OFFSET(0xB0708D0)
#define RPG_CLIENT_ROGUEMIRACLEEXT_ASTOURNINGAME_OFFSET UNITYSDK_OFFSET(0xB070920)
#define RPG_CLIENT_ROGUEMIRACLEEXT_ASWITHCATEGORY_OFFSET UNITYSDK_OFFSET(0xB070880)
#define RPG_CLIENT_ROGUEMIRACLEEXT_GETALLHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0xB070970)
#define RPG_CLIENT_ROGUEMIRACLEEXT_GETMIRACLESBYCATEGORY_OFFSET UNITYSDK_OFFSET(0xB0709C0)
#define RPG_CLIENT_ROGUEMIRACLEEXT_ISMIRACLEACHIEVED_OFFSET UNITYSDK_OFFSET(0xB070B90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleExt_TypeDefinitionIndex = 61979;

	class RogueMiracleExt : public ::System::Object
	{
	public:
		static ::RPG::Client::IRogueMiracleWithCategory* AsWithCategory(::RPG::Client::IRogueMiracle* miracle)
		{
			return ((::RPG::Client::IRogueMiracleWithCategory*(*)(::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_ASWITHCATEGORY_OFFSET))(miracle);
		}

		static ::RPG::Client::IRogueMiracleInGame* AsInGame(::RPG::Client::IRogueMiracle* miracle)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_ASINGAME_OFFSET))(miracle);
		}

		static ::RPG::Client::IRogueTournMiracleInGame* AsTournInGame(::RPG::Client::IRogueTournMiracle* miracle)
		{
			return ((::RPG::Client::IRogueTournMiracleInGame*(*)(::RPG::Client::IRogueTournMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_ASTOURNINGAME_OFFSET))(miracle);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* GetAllHexMiracles(::RPG::Client::IRogueMiracleInfo* miracleInfo)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::RPG::Client::IRogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_GETALLHEXMIRACLES_OFFSET))(miracleInfo);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* GetMiraclesByCategory(::RPG::Client::IRogueMiracleInfo* miracleInfo, ::RPG::GameCore::RogueMiracleCategory category, ::System::Boolean isBrokenFirst)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::RPG::Client::IRogueMiracleInfo*, ::RPG::GameCore::RogueMiracleCategory, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_GETMIRACLESBYCATEGORY_OFFSET))(miracleInfo, category, isBrokenFirst);
		}

		static ::System::Boolean IsMiracleAchieved(::RPG::Client::IRogueMiracleInfo* miracleInfo, ::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueMiracleInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_ISMIRACLEACHIEVED_OFFSET))(miracleInfo, miracleID);
		}
	};
}
