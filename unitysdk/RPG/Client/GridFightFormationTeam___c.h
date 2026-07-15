#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6B3010)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B3050)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GETROLESBYTRAIT_B__72_1_OFFSET UNITYSDK_OFFSET(0x1A6B3450)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A6B3060)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ALLROLES_B__34_0_OFFSET UNITYSDK_OFFSET(0x1A6B3100)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ALLROLES_B__34_1_OFFSET UNITYSDK_OFFSET(0x1A6B3290)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_TRAITSWITHLAYERMORETHANONE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1A6B30B0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_UNLOCKEDEXPERTIDS_B__78_0_OFFSET UNITYSDK_OFFSET(0x1A6B34C0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_UNLOCKEDEXPERTIDS_B__78_1_OFFSET UNITYSDK_OFFSET(0x1A6B3650)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_1_OFFSET UNITYSDK_OFFSET(0x1A6B3430)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_3_OFFSET UNITYSDK_OFFSET(0x1A6B32B0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_5_OFFSET UNITYSDK_OFFSET(0x1A6B3370)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c_TypeDefinitionIndex = 61739;

	class GridFightFormationTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>** StaticGet___9__78_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x246F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>** StaticGet___9__78_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x246F8);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__70_3()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x24700);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__72_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x24708);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__70_5()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x24710);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x24718);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__70_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x24720);
		}
		static ::RPG::Client::GridFightFormationTeam___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightFormationTeam___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x24728);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x24730);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x24738);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x24740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ActivatedTraits_b__9_0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_TraitsWithLayerMoreThanOne_b__11_0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_TRAITSWITHLAYERMORETHANONE_B__11_0_OFFSET))(this, a1);
		}

		::System::UInt32 _get_AllRoles_b__34_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ALLROLES_B__34_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_AllRoles_b__34_1(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ALLROLES_B__34_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __SyncTeam_b__70_3(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_3_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __SyncTeam_b__70_5(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_5_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* __SyncTeam_b__70_1(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__72_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GETROLESBYTRAIT_B__72_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnlockedExpertIDs_b__78_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_UNLOCKEDEXPERTIDS_B__78_0_OFFSET))(this, a1);
		}

		::System::UInt32 _get_UnlockedExpertIDs_b__78_1(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_UNLOCKEDEXPERTIDS_B__78_1_OFFSET))(this, a1);
		}
	};
}
