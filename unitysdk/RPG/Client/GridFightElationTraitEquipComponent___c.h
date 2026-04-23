#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_10;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CANCRAFTTO_B__13_0_OFFSET UNITYSDK_OFFSET(0xA477EC0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA477E60)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CRAFTTO_B__14_0_OFFSET UNITYSDK_OFFSET(0xA477F80)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA477EA0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GETCRAFTTOCOMBINATION_B__15_0_OFFSET UNITYSDK_OFFSET(0xA477FE0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GET_ISFULL_B__7_0_OFFSET UNITYSDK_OFFSET(0xA477EB0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__INITCONFIG_B__23_0_OFFSET UNITYSDK_OFFSET(0xA478040)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_0_OFFSET UNITYSDK_OFFSET(0xA4784F0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_1_OFFSET UNITYSDK_OFFSET(0xA478510)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_2_OFFSET UNITYSDK_OFFSET(0xA478550)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEquipComponent___c_TypeDefinitionIndex = 60183;

	class GridFightElationTraitEquipComponent___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightElationTraitEquipComponent___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightElationTraitEquipComponent___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A550);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A558);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A560);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A568);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_10*, ::System::UInt32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_10*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A570);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_10*, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_10*, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A578);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A580);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A588);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_10*, ::System::UInt32>** StaticGet___9__24_2()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_10*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsFull_b__7_0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GET_ISFULL_B__7_0_OFFSET))(this, x);
		}

		::System::Boolean _CanCraftTo_b__13_0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CANCRAFTTO_B__13_0_OFFSET))(this, x);
		}

		::System::Boolean _CraftTo_b__14_0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CRAFTTO_B__14_0_OFFSET))(this, x);
		}

		::System::Boolean _GetCraftToCombination_b__15_0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GETCRAFTTOCOMBINATION_B__15_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemConfig* _InitConfig_b__23_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__INITCONFIG_B__23_0_OFFSET))(this, x);
		}

		::System::UInt32 _Update_b__24_0(::Class_1_D17272E82AE804C2_10* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemConfig* _Update_b__24_1(::Class_1_D17272E82AE804C2_10* x)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::Class_1_D17272E82AE804C2_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_1_OFFSET))(this, x);
		}

		::System::UInt32 _Update_b__24_2(::Class_1_D17272E82AE804C2_10* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_2_OFFSET))(this, x);
		}
	};
}
