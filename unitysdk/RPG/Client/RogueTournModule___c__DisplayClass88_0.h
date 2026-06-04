#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC82EC60)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS88_0__SHOWCOLLECTIONEXHIBITIONPAGEFROMCOLLECTIONBOOTHPROPPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xC83AA10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass88_0_TypeDefinitionIndex = 63431;

	class RogueTournModule___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::System::UInt32 collectionBoothID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* _ShowCollectionExhibitionPageFromCollectionBoothPropPromised_b__0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS88_0__SHOWCOLLECTIONEXHIBITIONPAGEFROMCOLLECTIONBOOTHPROPPROMISED_B__0_OFFSET))(this);
		}
	};
}
