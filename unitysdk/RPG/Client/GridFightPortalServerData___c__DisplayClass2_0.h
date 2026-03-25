#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_33;
namespace RPG::Client { class GridFightPortalData; }

#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98845C0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA___C__DISPLAYCLASS2_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0x98846E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalServerData___c__DisplayClass2_0_TypeDefinitionIndex = 52850;

	class GridFightPortalServerData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Class_1_735612C94F558EAE_33* update; // 0x10

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
