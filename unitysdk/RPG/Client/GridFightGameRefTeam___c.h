#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x983AC10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x983AC50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0x983AC60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ALLROLES_B__32_0_OFFSET UNITYSDK_OFFSET(0x983AC80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__59_0_OFFSET UNITYSDK_OFFSET(0x983AE20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__59_1_OFFSET UNITYSDK_OFFSET(0x983AF60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__56_1_OFFSET UNITYSDK_OFFSET(0x983AE00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__56_3_OFFSET UNITYSDK_OFFSET(0x983ACA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__56_7_OFFSET UNITYSDK_OFFSET(0x983AD50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c_TypeDefinitionIndex = 52608;

	class GridFightGameRefTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x157C0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__56_3()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x157C8);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x157D0);
		}
		static ::RPG::Client::GridFightGameRefTeam___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameRefTeam___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x157D8);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x157E0);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__56_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x157E8);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>** StaticGet___9__59_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x157F0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__56_7()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x157F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ActivatedTraits_b__9_0(::RPG::Client::GridFightTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightRole* _get_AllRoles_b__32_0(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ALLROLES_B__32_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemData* __SyncTeam_b__56_3(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__56_3_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemData* __SyncTeam_b__56_7(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__56_7_OFFSET))(this, x);
		}

		::RPG::Client::GridFightRole* __SyncTeam_b__56_1(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__56_1_OFFSET))(this, x);
		}

		::System::Boolean _get_UnlockedExpertIDs_b__59_0(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__59_0_OFFSET))(this, x);
		}

		::System::UInt32 _get_UnlockedExpertIDs_b__59_1(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__59_1_OFFSET))(this, x);
		}
	};
}
