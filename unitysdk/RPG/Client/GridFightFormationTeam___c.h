#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB46A60)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB46AA0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GETROLESBYTRAIT_B__72_1_OFFSET UNITYSDK_OFFSET(0xBB46DF0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0xBB46AB0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ALLROLES_B__34_0_OFFSET UNITYSDK_OFFSET(0xBB46AF0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_ALLROLES_B__34_1_OFFSET UNITYSDK_OFFSET(0xBB46C30)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_TRAITSWITHLAYERMORETHANONE_B__11_0_OFFSET UNITYSDK_OFFSET(0xBB46AD0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_UNLOCKEDEXPERTIDS_B__78_0_OFFSET UNITYSDK_OFFSET(0xBB46E30)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__GET_UNLOCKEDEXPERTIDS_B__78_1_OFFSET UNITYSDK_OFFSET(0xBB46F70)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_1_OFFSET UNITYSDK_OFFSET(0xBB46DD0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_3_OFFSET UNITYSDK_OFFSET(0xBB46C50)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C___SYNCTEAM_B__70_5_OFFSET UNITYSDK_OFFSET(0xBB46D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c_TypeDefinitionIndex = 60448;

	class GridFightFormationTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__70_3()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D2B0);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__70_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D2B8);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D2C0);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>** StaticGet___9__78_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D2C8);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D2D0);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D2D8);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D2E0);
		}
		static ::RPG::Client::GridFightFormationTeam___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightFormationTeam___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D2E8);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__70_5()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D2F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__72_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D2F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>** StaticGet___9__78_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFormationTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D300);
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
