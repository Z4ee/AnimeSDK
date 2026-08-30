#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA66F80)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA66FC0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C___UPDATETRAITLAYER_B__13_0_OFFSET UNITYSDK_OFFSET(0x1CA66FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRefTraitLayerCalculator___c_TypeDefinitionIndex = 64878;

	class GridFightRefTraitLayerCalculator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRefTraitLayerCalculator___c_TypeDefinitionIndex)->GetStaticField(0x3E710);
		}
		static ::RPG::Client::GridFightRefTraitLayerCalculator___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRefTraitLayerCalculator___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRefTraitLayerCalculator___c_TypeDefinitionIndex)->GetStaticField(0x3E718);
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
