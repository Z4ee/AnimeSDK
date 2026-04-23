#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5BE070)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BE0B0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C___GETISACTIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0xA5BE0C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C___GETISACTIVE_B__1_1_OFFSET UNITYSDK_OFFSET(0xA5BE0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEquipActivateStateParser___c_TypeDefinitionIndex = 60285;

	class GridFightTraitRemarkLineEquipActivateStateParser___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkLineEquipActivateStateParser___c_TypeDefinitionIndex)->GetStaticField(0x1B2B0);
		}
		static ::RPG::Client::GridFightTraitRemarkLineEquipActivateStateParser___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitRemarkLineEquipActivateStateParser___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkLineEquipActivateStateParser___c_TypeDefinitionIndex)->GetStaticField(0x1B2B8);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkLineEquipActivateStateParser___c_TypeDefinitionIndex)->GetStaticField(0x1B2C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetIsActive_b__1_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C___GETISACTIVE_B__1_0_OFFSET))(this, x);
		}

		::System::Boolean __GetIsActive_b__1_1(::RPG::Client::GridFightNPC* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C___GETISACTIVE_B__1_1_OFFSET))(this, x);
		}
	};
}
