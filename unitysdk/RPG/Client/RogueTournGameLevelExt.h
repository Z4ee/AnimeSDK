#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournGameLevel; }
namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace RPG::Client { class IRogueTournGameLevelRoom; }
namespace RPG::Client { class IRogueTournGameLevelRoomCardLevel; }
namespace RPG::Client { class IRogueTournGameLevelRoomLinear; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_COMPOSITIONTYPEID_OFFSET UNITYSDK_OFFSET(0xB0C81D0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURLAYERLINEAR_OFFSET UNITYSDK_OFFSET(0xB0C7320)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOMLINEAR_OFFSET UNITYSDK_OFFSET(0xB0C7FB0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOM_OFFSET UNITYSDK_OFFSET(0xB0C6FD0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURLAYERPROGRESS_OFFSET UNITYSDK_OFFSET(0xB0C7540)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_1_OFFSET UNITYSDK_OFFSET(0xB0C76C0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_OFFSET UNITYSDK_OFFSET(0xB0AC010)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETROOMBYPROGRESS_OFFSET UNITYSDK_OFFSET(0xB0C7840)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_LAYERSLINEAR_OFFSET UNITYSDK_OFFSET(0xB0C7430)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB0C7140)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMSLINEAR_OFFSET UNITYSDK_OFFSET(0xB0C80C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameLevelExt_TypeDefinitionIndex = 62345;

	class RogueTournGameLevelExt : public ::System::Object
	{
	public:
		static ::RPG::Client::IRogueTournGameLevelRoom* CurRoom(::RPG::Client::IRogueTournGameLevel* level)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::RPG::Client::IRogueTournGameLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOM_OFFSET))(level);
		}

		static ::System::UInt32 RoomCount(::RPG::Client::IRogueTournGameLevel* level)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMCOUNT_OFFSET))(level);
		}

		static ::RPG::Client::IRogueTournGameLevelLayerLinear* CurLayerLinear(::RPG::Client::IRogueTournGameLevelLinear* level)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURLAYERLINEAR_OFFSET))(level);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>* LayersLinear(::RPG::Client::IRogueTournGameLevelLinear* level)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>*(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_LAYERSLINEAR_OFFSET))(level);
		}

		static ::System::UInt32 GetCurLayerProgress(::RPG::Client::IRogueTournGameLevelLinear* level)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURLAYERPROGRESS_OFFSET))(level);
		}

		static ::System::UInt32 GetCurRoomProgress(::RPG::Client::IRogueTournGameLevelLinear* level)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_OFFSET))(level);
		}

		static ::RPG::Client::IRogueTournGameLevelRoom* GetRoomByProgress(::RPG::Client::IRogueTournGameLevelLinear* level, ::System::UInt32 progress)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::RPG::Client::IRogueTournGameLevelLinear*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETROOMBYPROGRESS_OFFSET))(level, progress);
		}

		static ::RPG::Client::IRogueTournGameLevelRoomLinear* CurRoomLinear(::RPG::Client::IRogueTournGameLevelLayerLinear* layer)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoomLinear*(*)(::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOMLINEAR_OFFSET))(layer);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoomLinear*>* RoomsLinear(::RPG::Client::IRogueTournGameLevelLayerLinear* layer)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoomLinear*>*(*)(::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMSLINEAR_OFFSET))(layer);
		}

		static ::System::UInt32 GetCurRoomProgress_1(::RPG::Client::IRogueTournGameLevelLayerLinear* layer)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_1_OFFSET))(layer);
		}

		static ::System::UInt32 CompositionTypeID(::RPG::Client::IRogueTournGameLevelRoomCardLevel* room)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelRoomCardLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_COMPOSITIONTYPEID_OFFSET))(room);
		}
	};
}
