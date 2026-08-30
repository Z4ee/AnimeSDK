#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_170.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"

namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_CANCASTER_OFFSET UNITYSDK_OFFSET(0xD1F0180)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD1EFF00)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_INITROLES_OFFSET UNITYSDK_OFFSET(0xD1EFF50)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xD1F0560)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridCyreneEffect_TypeDefinitionIndex = 64897;

	class GridFightGridCyreneEffect : public ::Class_1_43BD383C98B4C0C5_170
	{
	public:
		// static const ::System::UInt32 _CyreneRoleID = 0x587; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _RoleIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridEffectType get_Type()
		{
			return ((::RPG::Client::GridFightGridEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_GET_TYPE_OFFSET))(this);
		}

		::System::Void InitRoles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_INITROLES_OFFSET))(this);
		}

		::System::Boolean CanCaster(::RPG::Client::GridFightGameSession* a1, ::RPG::Client::GridFightGridData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameSession*, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_CANCASTER_OFFSET))(this, a1, a2);
		}
	};
}
