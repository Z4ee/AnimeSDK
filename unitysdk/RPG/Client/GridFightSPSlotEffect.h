#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_137.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"

namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }

#define RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT_CANCASTER_OFFSET UNITYSDK_OFFSET(0x989E600)
#define RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x989E5F0)
#define RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x989EB20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSPSlotEffect_TypeDefinitionIndex = 52636;

	class GridFightSPSlotEffect : public ::Class_1_43BD383C98B4C0C5_137
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridEffectType get_Type()
		{
			return ((::RPG::Client::GridFightGridEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean CanCaster(::RPG::Client::GridFightGameSession* session, ::RPG::Client::GridFightGridData* grid)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameSession*, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT_CANCASTER_OFFSET))(this, session, grid);
		}
	};
}
