#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class NavMapModule; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class UniverseData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD963670)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___C__DISPLAYCLASS20_0__GETCARTOGRAPHERMAPPINGINFOIDIN_B__0_OFFSET UNITYSDK_OFFSET(0xD96C210)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavMapModule___c__DisplayClass20_0_TypeDefinitionIndex = 74496;

	class NavMapModule___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::UniverseData* universe; // 0x10
		::RPG::Client::NavMap::SubTabData* subTab; // 0x18
		::RPG::Client::NavMap::NavMapModule* __4__this; // 0x20
		::System::UInt32 floorID; // 0x28
		::System::UInt32 groupID; // 0x2C
		::System::UInt32 mappingInfoID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>* _GetCartographerMappingInfoIDIn_b__0(::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___C__DISPLAYCLASS20_0__GETCARTOGRAPHERMAPPINGINFOIDIN_B__0_OFFSET))(this, a1);
		}
	};
}
