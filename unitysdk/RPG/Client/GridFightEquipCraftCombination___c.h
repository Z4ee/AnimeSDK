#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C978250)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C978290)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__GET_TARGETROLEUNIQUEID_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C9782A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__GET_TARGETROLEUNIQUEID_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C978330)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftCombination___c_TypeDefinitionIndex = 64572;

	class GridFightEquipCraftCombination___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftCombination___c_TypeDefinitionIndex)->GetStaticField(0x20360);
		}
		static ::RPG::Client::GridFightEquipCraftCombination___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightEquipCraftCombination___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftCombination___c_TypeDefinitionIndex)->GetStaticField(0x20368);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftCombination___c_TypeDefinitionIndex)->GetStaticField(0x20370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_TargetRoleUniqueID_b__5_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__GET_TARGETROLEUNIQUEID_B__5_0_OFFSET))(this, a1);
		}

		::System::UInt32 _get_TargetRoleUniqueID_b__5_1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION___C__GET_TARGETROLEUNIQUEID_B__5_1_OFFSET))(this, a1);
		}
	};
}
