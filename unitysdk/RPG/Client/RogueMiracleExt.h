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

#define RPG_CLIENT_ROGUEMIRACLEEXT_ASINGAME_OFFSET UNITYSDK_OFFSET(0xDEF4CC0)
#define RPG_CLIENT_ROGUEMIRACLEEXT_ASTOURNINGAME_OFFSET UNITYSDK_OFFSET(0xDEF4D50)
#define RPG_CLIENT_ROGUEMIRACLEEXT_ASWITHCATEGORY_OFFSET UNITYSDK_OFFSET(0xDEF4C60)
#define RPG_CLIENT_ROGUEMIRACLEEXT_GETALLHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0xDEF4DB0)
#define RPG_CLIENT_ROGUEMIRACLEEXT_GETMIRACLESBYCATEGORY_OFFSET UNITYSDK_OFFSET(0xDEF4E00)
#define RPG_CLIENT_ROGUEMIRACLEEXT_ISMIRACLEACHIEVED_OFFSET UNITYSDK_OFFSET(0xDEF5050)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleExt_TypeDefinitionIndex = 67274;

	class RogueMiracleExt : public ::System::Object
	{
	public:
		static ::RPG::Client::IRogueMiracleWithCategory* AsWithCategory(::RPG::Client::IRogueMiracle* a1)
		{
			return ((::RPG::Client::IRogueMiracleWithCategory*(*)(::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_ASWITHCATEGORY_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracleInGame* AsInGame(::RPG::Client::IRogueMiracle* a1)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_ASINGAME_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournMiracleInGame* AsTournInGame(::RPG::Client::IRogueTournMiracle* a1)
		{
			return ((::RPG::Client::IRogueTournMiracleInGame*(*)(::RPG::Client::IRogueTournMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_ASTOURNINGAME_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* GetAllHexMiracles(::RPG::Client::IRogueMiracleInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::RPG::Client::IRogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_GETALLHEXMIRACLES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* GetMiraclesByCategory(::RPG::Client::IRogueMiracleInfo* a1, ::RPG::GameCore::RogueMiracleCategory a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::RPG::Client::IRogueMiracleInfo*, ::RPG::GameCore::RogueMiracleCategory, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_GETMIRACLESBYCATEGORY_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsMiracleAchieved(::RPG::Client::IRogueMiracleInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueMiracleInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT_ISMIRACLEACHIEVED_OFFSET))(a1, a2);
		}
	};
}
