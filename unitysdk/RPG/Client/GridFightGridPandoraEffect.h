#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_156.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"

namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }

#define RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT_CANCASTER_OFFSET UNITYSDK_OFFSET(0x194FF380)
#define RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x194FF330)
#define RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x194FF6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridPandoraEffect_TypeDefinitionIndex = 61910;

	class GridFightGridPandoraEffect : public ::Class_1_43BD383C98B4C0C5_156
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridEffectType get_Type()
		{
			return ((::RPG::Client::GridFightGridEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean CanCaster(::RPG::Client::GridFightGameSession* a1, ::RPG::Client::GridFightGridData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameSession*, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT_CANCASTER_OFFSET))(this, a1, a2);
		}
	};
}
