#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefTrait; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA56AF00)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS8_0__GETTRAIT_B__0_OFFSET UNITYSDK_OFFSET(0xA56B550)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRefTraitLayerCalculator___c__DisplayClass8_0_TypeDefinitionIndex = 59673;

	class GridFightRefTraitLayerCalculator___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTrait_b__0(::RPG::Client::GridFightGameRefTrait* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS8_0__GETTRAIT_B__0_OFFSET))(this, t);
		}
	};
}
