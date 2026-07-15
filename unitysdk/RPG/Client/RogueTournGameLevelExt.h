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

#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_COMPOSITIONTYPEID_OFFSET UNITYSDK_OFFSET(0x19C29EA0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURLAYERLINEAR_OFFSET UNITYSDK_OFFSET(0x19C284C0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOMLINEAR_OFFSET UNITYSDK_OFFSET(0x19C29BE0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOM_OFFSET UNITYSDK_OFFSET(0x19C27FB0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURLAYERPROGRESS_OFFSET UNITYSDK_OFFSET(0x19C28780)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_1_OFFSET UNITYSDK_OFFSET(0x19C28E30)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_OFFSET UNITYSDK_OFFSET(0x19C289B0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETROOMBYPROGRESS_OFFSET UNITYSDK_OFFSET(0x19C29060)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_LAYERSLINEAR_OFFSET UNITYSDK_OFFSET(0x19C28620)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x19C281D0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMSLINEAR_OFFSET UNITYSDK_OFFSET(0x19C29D40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameLevelExt_TypeDefinitionIndex = 64645;

	class RogueTournGameLevelExt : public ::System::Object
	{
	public:
		static ::RPG::Client::IRogueTournGameLevelRoom* CurRoom(::RPG::Client::IRogueTournGameLevel* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::RPG::Client::IRogueTournGameLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOM_OFFSET))(a1);
		}

		static ::System::UInt32 RoomCount(::RPG::Client::IRogueTournGameLevel* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMCOUNT_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournGameLevelLayerLinear* CurLayerLinear(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURLAYERLINEAR_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>* LayersLinear(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>*(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_LAYERSLINEAR_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurLayerProgress(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURLAYERPROGRESS_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurRoomProgress(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournGameLevelRoom* GetRoomByProgress(::RPG::Client::IRogueTournGameLevelLinear* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::RPG::Client::IRogueTournGameLevelLinear*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETROOMBYPROGRESS_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IRogueTournGameLevelRoomLinear* CurRoomLinear(::RPG::Client::IRogueTournGameLevelLayerLinear* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoomLinear*(*)(::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOMLINEAR_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoomLinear*>* RoomsLinear(::RPG::Client::IRogueTournGameLevelLayerLinear* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoomLinear*>*(*)(::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMSLINEAR_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurRoomProgress_1(::RPG::Client::IRogueTournGameLevelLayerLinear* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_1_OFFSET))(a1);
		}

		static ::System::UInt32 CompositionTypeID(::RPG::Client::IRogueTournGameLevelRoomCardLevel* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelRoomCardLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_COMPOSITIONTYPEID_OFFSET))(a1);
		}
	};
}
