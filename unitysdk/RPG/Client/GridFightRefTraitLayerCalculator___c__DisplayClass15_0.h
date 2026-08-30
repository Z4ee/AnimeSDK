#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefTrait; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA66F70)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS15_0___ADDEXPIREDTRAITLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x1CA67050)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRefTraitLayerCalculator___c__DisplayClass15_0_TypeDefinitionIndex = 64880;

	class GridFightRefTraitLayerCalculator___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddExpiredTraitLayer_b__0(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS15_0___ADDEXPIREDTRAITLAYER_B__0_OFFSET))(this, a1);
		}
	};
}
