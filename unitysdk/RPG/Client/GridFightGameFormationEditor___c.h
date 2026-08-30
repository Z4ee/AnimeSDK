#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CANPUTROLE_B__18_0_OFFSET UNITYSDK_OFFSET(0xD1B2110)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1B20C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B2100)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_0_OFFSET UNITYSDK_OFFSET(0xD1B2460)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_1_OFFSET UNITYSDK_OFFSET(0xD1B2490)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_2_OFFSET UNITYSDK_OFFSET(0xD1B2500)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDBASICEQUIPS_B__58_0_OFFSET UNITYSDK_OFFSET(0xD1B22A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDEQUIPS_B__60_0_OFFSET UNITYSDK_OFFSET(0xD1B2360)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__SAVE_B__79_0_OFFSET UNITYSDK_OFFSET(0xD1B2420)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c_TypeDefinitionIndex = 64715;

	class GridFightGameFormationEditor___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__79_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x2D770);
		}
		static ::RPG::Client::GridFightGameFormationEditor___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameFormationEditor___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x2D778);
		}
		static ::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x2D780);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__82_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x2D788);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x2D790);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x2D798);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::Client::GridFightRole*>** StaticGet___9__82_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x2D7A0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>** StaticGet___9__82_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x2D7A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanPutRole_b__18_0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CANPUTROLE_B__18_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendBasicEquips_b__58_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDBASICEQUIPS_B__58_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendEquips_b__60_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDEQUIPS_B__60_0_OFFSET))(this, a1);
		}

		::System::Void _Save_b__79_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__SAVE_B__79_0_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _GetAllRoleOptions_b__82_0(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAllRoleOptions_b__82_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetAllRoleOptions_b__82_2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_2_OFFSET))(this, a1);
		}
	};
}
