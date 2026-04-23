#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightOrbEntityData; }

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5190C0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__DISPLAYCLASS11_0__GETORBCOUNTBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xA519C50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData___c__DisplayClass11_0_TypeDefinitionIndex = 59299;

	class GridFightOrbServerData___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightOrbType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOrbCountByType_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*> item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__DISPLAYCLASS11_0__GETORBCOUNTBYTYPE_B__0_OFFSET))(this, item);
		}
	};
}
