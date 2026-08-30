#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_50210DAEB46E0CD5;
namespace RPG::Client { class GridFightGameRefTrait; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA66890)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1CA670B0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0x1CA670E0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__3_OFFSET UNITYSDK_OFFSET(0x1CA67120)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRefTraitLayerCalculator___c__DisplayClass5_1_TypeDefinitionIndex = 64882;

	class GridFightRefTraitLayerCalculator___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::Class_1_50210DAEB46E0CD5* rule; // 0x10
		::System::UInt32 rid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__1(::Class_1_50210DAEB46E0CD5* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_50210DAEB46E0CD5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__1_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__2(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__2_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__3(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__3_OFFSET))(this, a1);
		}
	};
}
