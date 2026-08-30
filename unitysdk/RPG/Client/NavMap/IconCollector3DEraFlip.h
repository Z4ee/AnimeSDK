#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/IconCollector3DBase.h"

namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client::NavMap { class ICartography3D; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__CREATEPOSEIDS_OFFSET UNITYSDK_OFFSET(0xD94E000)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD94DFB0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int IconCollector3DEraFlip_TypeDefinitionIndex = 74398;

	class IconCollector3DEraFlip : public ::RPG::Client::NavMap::IconCollector3DBase
	{
	public:
		::System::Void _ctor(::RPG::Client::NavMap::ICartography3D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography3D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _CreatePoseIDs(::System::UInt32 a1, ::RPG::Client::MapPropDef* a2, ::RPG::Client::MapRotationInfo* a3)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::MapPropDef*, ::RPG::Client::MapRotationInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DERAFLIP__CREATEPOSEIDS_OFFSET))(this, a1, a2, a3);
		}
	};
}
