#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_388;
namespace RPG::Client { class GridFightPortalData; }

#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA562860)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA___C__DISPLAYCLASS2_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0xA562980)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalServerData___c__DisplayClass2_0_TypeDefinitionIndex = 59925;

	class GridFightPortalServerData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_388* update; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Sync_b__0(::RPG::Client::GridFightPortalData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA___C__DISPLAYCLASS2_0__SYNC_B__0_OFFSET))(this, x);
		}
	};
}
