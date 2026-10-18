#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_26;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CANCRAFTTO_B__13_0_OFFSET UNITYSDK_OFFSET(0xD108EA0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD108E40)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CRAFTTO_B__14_0_OFFSET UNITYSDK_OFFSET(0xD108EC0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD108E80)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GETCRAFTTOCOMBINATION_B__15_0_OFFSET UNITYSDK_OFFSET(0xD108EE0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GET_ISFULL_B__7_0_OFFSET UNITYSDK_OFFSET(0xD108E90)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__INITCONFIG_B__23_0_OFFSET UNITYSDK_OFFSET(0xD108F00)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_0_OFFSET UNITYSDK_OFFSET(0xD108F50)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_1_OFFSET UNITYSDK_OFFSET(0xD108F70)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_2_OFFSET UNITYSDK_OFFSET(0xD108FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEquipComponent___c_TypeDefinitionIndex = 65369;

	class GridFightElationTraitEquipComponent___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightElationTraitEquipComponent___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightElationTraitEquipComponent___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x65AE0);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_26*, ::System::UInt32>** StaticGet___9__24_2()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_26*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x65AE8);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x65AF0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x65AF8);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_26*, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_26*, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x65B00);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x65B08);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x65B10);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x65B18);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_26*, ::System::UInt32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_26*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightElationTraitEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x65B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsFull_b__7_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GET_ISFULL_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean _CanCraftTo_b__13_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CANCRAFTTO_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean _CraftTo_b__14_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__CRAFTTO_B__14_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCraftToCombination_b__15_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__GETCRAFTTOCOMBINATION_B__15_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* _InitConfig_b__23_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__INITCONFIG_B__23_0_OFFSET))(this, a1);
		}

		::System::UInt32 _Update_b__24_0(::Class_1_D17272E82AE804C2_26* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* _Update_b__24_1(::Class_1_D17272E82AE804C2_26* a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::Class_1_D17272E82AE804C2_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_1_OFFSET))(this, a1);
		}

		::System::UInt32 _Update_b__24_2(::Class_1_D17272E82AE804C2_26* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__UPDATE_B__24_2_OFFSET))(this, a1);
		}
	};
}
