#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_138;

#define RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E9000)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0__GETEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA4E9420)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridData___c__DisplayClass4_0_TypeDefinitionIndex = 59681;

	class GridFightGridData___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGridEffectType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEffect_b__0(::Class_1_43BD383C98B4C0C5_138* effect)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_138*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0__GETEFFECT_B__0_OFFSET))(this, effect);
		}
	};
}
