#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC30270)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC302B0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C___GETISACTIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBC302C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C___GETISACTIVE_B__1_1_OFFSET UNITYSDK_OFFSET(0xBC302E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEquipActivateStateParser___c_TypeDefinitionIndex = 61220;

	class GridFightTraitRemarkLineEquipActivateStateParser___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitRemarkLineEquipActivateStateParser___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitRemarkLineEquipActivateStateParser___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkLineEquipActivateStateParser___c_TypeDefinitionIndex)->GetStaticField(0x3CEF0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkLineEquipActivateStateParser___c_TypeDefinitionIndex)->GetStaticField(0x3CEF8);
		}
		static ::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkLineEquipActivateStateParser___c_TypeDefinitionIndex)->GetStaticField(0x3CF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetIsActive_b__1_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C___GETISACTIVE_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetIsActive_b__1_1(::RPG::Client::GridFightNPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C___GETISACTIVE_B__1_1_OFFSET))(this, a1);
		}
	};
}
