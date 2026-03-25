#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_137;

#define RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x984ABB0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0__GETEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x984AFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridData___c__DisplayClass4_0_TypeDefinitionIndex = 52631;

	class GridFightGridData___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGridEffectType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEffect_b__0(::Class_1_43BD383C98B4C0C5_137* effect)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_137*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0__GETEFFECT_B__0_OFFSET))(this, effect);
		}
	};
}
