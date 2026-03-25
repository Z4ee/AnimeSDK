#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_137.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"

namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }

#define RPG_CLIENT_GRIDFIGHTENHANCEDGRIDEFFECT_CANCASTER_OFFSET UNITYSDK_OFFSET(0x97F9860)
#define RPG_CLIENT_GRIDFIGHTENHANCEDGRIDEFFECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x97F9850)
#define RPG_CLIENT_GRIDFIGHTENHANCEDGRIDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x97F9A30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEnhancedGridEffect_TypeDefinitionIndex = 52635;

	class GridFightEnhancedGridEffect : public ::Class_1_43BD383C98B4C0C5_137
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENHANCEDGRIDEFFECT__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridEffectType get_Type()
		{
			return ((::RPG::Client::GridFightGridEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENHANCEDGRIDEFFECT_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean CanCaster(::RPG::Client::GridFightGameSession* session, ::RPG::Client::GridFightGridData* grid)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameSession*, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENHANCEDGRIDEFFECT_CANCASTER_OFFSET))(this, session, grid);
		}
	};
}
