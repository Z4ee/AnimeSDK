#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_170.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"

namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }

#define RPG_CLIENT_GRIDFIGHTGRIDELATIONEFFECT_CANCASTER_OFFSET UNITYSDK_OFFSET(0x1BA41EE0)
#define RPG_CLIENT_GRIDFIGHTGRIDELATIONEFFECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BA41E90)
#define RPG_CLIENT_GRIDFIGHTGRIDELATIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA42080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridElationEffect_TypeDefinitionIndex = 64900;

	class GridFightGridElationEffect : public ::Class_1_43BD383C98B4C0C5_170
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDELATIONEFFECT__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridEffectType get_Type()
		{
			return ((::RPG::Client::GridFightGridEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDELATIONEFFECT_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean CanCaster(::RPG::Client::GridFightGameSession* a1, ::RPG::Client::GridFightGridData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameSession*, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDELATIONEFFECT_CANCASTER_OFFSET))(this, a1, a2);
		}
	};
}
