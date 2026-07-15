#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS89_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA580B0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS89_0__SHOWCOLLECTIONEXHIBITIONPAGEFROMEXHIBITIONBOOTHPROPPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0x1AA580C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass89_0_TypeDefinitionIndex = 64799;

	class RogueTournModule___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::System::UInt32 exhibitionBoothID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS89_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* _ShowCollectionExhibitionPageFromExhibitionBoothPropPromised_b__0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS89_0__SHOWCOLLECTIONEXHIBITIONPAGEFROMEXHIBITIONBOOTHPROPPROMISED_B__0_OFFSET))(this);
		}
	};
}
