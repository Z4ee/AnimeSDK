#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD16EE20)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD16EE60)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_EQUIPCOUNTWITHOUTHACK_B__12_0_OFFSET UNITYSDK_OFFSET(0xD16EE70)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_HACKEQUIP_B__20_0_OFFSET UNITYSDK_OFFSET(0xD16EFA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_HASEQUIPCANUSEDTOCRAFT_B__18_0_OFFSET UNITYSDK_OFFSET(0xD16EED0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_NONEBASICEQUIPCOUNT_B__14_0_OFFSET UNITYSDK_OFFSET(0xD16EEA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_SHOWNEQUIPS_B__22_0_OFFSET UNITYSDK_OFFSET(0xD16EFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipComponent___c_TypeDefinitionIndex = 65002;

	class GridFightEquipComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x27930);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x27938);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x27940);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x27948);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x27950);
		}
		static ::RPG::Client::GridFightEquipComponent___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightEquipComponent___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipComponent___c_TypeDefinitionIndex)->GetStaticField(0x27958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_EquipCountWithoutHack_b__12_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_EQUIPCOUNTWITHOUTHACK_B__12_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_NoneBasicEquipCount_b__14_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_NONEBASICEQUIPCOUNT_B__14_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_HasEquipCanUsedToCraft_b__18_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_HASEQUIPCANUSEDTOCRAFT_B__18_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_HackEquip_b__20_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_HACKEQUIP_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_ShownEquips_b__22_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__GET_SHOWNEQUIPS_B__22_0_OFFSET))(this, a1);
		}
	};
}
