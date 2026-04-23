#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4D87C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D8800)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GETROLESBYTRAIT_B__60_1_OFFSET UNITYSDK_OFFSET(0xA4D89D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0xA4D8810)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_ALLROLES_B__32_0_OFFSET UNITYSDK_OFFSET(0xA4D8830)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__65_0_OFFSET UNITYSDK_OFFSET(0xA4D8A60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__65_1_OFFSET UNITYSDK_OFFSET(0xA4D8BA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_1_OFFSET UNITYSDK_OFFSET(0xA4D89B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_3_OFFSET UNITYSDK_OFFSET(0xA4D8850)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_7_OFFSET UNITYSDK_OFFSET(0xA4D8900)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c_TypeDefinitionIndex = 59647;

	class GridFightGameRefTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>** StaticGet___9__65_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x14040);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>** StaticGet___9__65_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x14048);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__59_7()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x14050);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__60_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x14058);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__59_3()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x14060);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x14068);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x14070);
		}
		static ::RPG::Client::GridFightGameRefTeam___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameRefTeam___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x14078);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__59_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefTeam___c_TypeDefinitionIndex)->GetStaticField(0x14080);
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

		::RPG::Client::GridFightEquipItemData* __SyncTeam_b__59_3(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_3_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemData* __SyncTeam_b__59_7(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_7_OFFSET))(this, x);
		}

		::RPG::Client::GridFightRole* __SyncTeam_b__59_1(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C___SYNCTEAM_B__59_1_OFFSET))(this, x);
		}

		::System::Boolean _GetRolesByTrait_b__60_1(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GETROLESBYTRAIT_B__60_1_OFFSET))(this, x);
		}

		::System::Boolean _get_UnlockedExpertIDs_b__65_0(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__65_0_OFFSET))(this, x);
		}

		::System::UInt32 _get_UnlockedExpertIDs_b__65_1(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__GET_UNLOCKEDEXPERTIDS_B__65_1_OFFSET))(this, x);
		}
	};
}
