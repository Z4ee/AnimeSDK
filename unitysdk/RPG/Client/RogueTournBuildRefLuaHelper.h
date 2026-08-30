#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefUnionIndex.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFLUAHELPER_CREATEOBJECTIDUINTDICT_OFFSET UNITYSDK_OFFSET(0xDF35E80)
#define RPG_CLIENT_ROGUETOURNBUILDREFLUAHELPER_CREATEUNIONINDEXDOUBLEDICT_OFFSET UNITYSDK_OFFSET(0xDF35F70)
#define RPG_CLIENT_ROGUETOURNBUILDREFLUAHELPER_CREATEUNIONINDEXUINTDICT_OFFSET UNITYSDK_OFFSET(0xDF36060)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefLuaHelper_TypeDefinitionIndex = 67529;

	class RogueTournBuildRefLuaHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::System::UInt32>* CreateObjectIdUIntDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFLUAHELPER_CREATEOBJECTIDUINTDICT_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::RogueTournBuildRefUnionIndex, ::System::Double>* CreateUnionIndexDoubleDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::RogueTournBuildRefUnionIndex, ::System::Double>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFLUAHELPER_CREATEUNIONINDEXDOUBLEDICT_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::RogueTournBuildRefUnionIndex, ::System::UInt32>* CreateUnionIndexUIntDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::RogueTournBuildRefUnionIndex, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFLUAHELPER_CREATEUNIONINDEXUINTDICT_OFFSET))();
		}
	};
}
