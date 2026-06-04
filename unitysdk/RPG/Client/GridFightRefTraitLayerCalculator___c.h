#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBD86A0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD86E0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C___UPDATETRAITLAYER_B__13_0_OFFSET UNITYSDK_OFFSET(0xBBD86F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRefTraitLayerCalculator___c_TypeDefinitionIndex = 60603;

	class GridFightRefTraitLayerCalculator___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightRefTraitLayerCalculator___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRefTraitLayerCalculator___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRefTraitLayerCalculator___c_TypeDefinitionIndex)->GetStaticField(0x357E0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRefTraitLayerCalculator___c_TypeDefinitionIndex)->GetStaticField(0x357E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* __UpdateTraitLayer_b__13_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C___UPDATETRAITLAYER_B__13_0_OFFSET))(this, a1);
		}
	};
}
