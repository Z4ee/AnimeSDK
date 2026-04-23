#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CANPUTROLE_B__18_0_OFFSET UNITYSDK_OFFSET(0xA4B4C80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4B4C30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B4C70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_0_OFFSET UNITYSDK_OFFSET(0xA4B4F40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_1_OFFSET UNITYSDK_OFFSET(0xA4B4F70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_2_OFFSET UNITYSDK_OFFSET(0xA4B4FB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDBASICEQUIPS_B__58_0_OFFSET UNITYSDK_OFFSET(0xA4B4D80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDEQUIPS_B__60_0_OFFSET UNITYSDK_OFFSET(0xA4B4E40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__SAVE_B__79_0_OFFSET UNITYSDK_OFFSET(0xA4B4F00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c_TypeDefinitionIndex = 59505;

	class GridFightGameFormationEditor___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightGameFormationEditor___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameFormationEditor___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x11540);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x11548);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x11550);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>** StaticGet___9__82_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x11558);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__82_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x11560);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::Client::GridFightRole*>** StaticGet___9__82_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x11568);
		}
		static ::System::Func_2<::Class_2_181F61C600ECA68B*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::Class_2_181F61C600ECA68B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x11570);
		}
		static ::System::Action** StaticGet___9__79_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor___c_TypeDefinitionIndex)->GetStaticField(0x11578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanPutRole_b__18_0(::Class_2_181F61C600ECA68B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_181F61C600ECA68B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CANPUTROLE_B__18_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendBasicEquips_b__58_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDBASICEQUIPS_B__58_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendEquips_b__60_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDEQUIPS_B__60_0_OFFSET))(this, x);
		}

		::System::Void _Save_b__79_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__SAVE_B__79_0_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _GetAllRoleOptions_b__82_0(::RPG::GameCore::GridFightRoleConfigRow* row)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_0_OFFSET))(this, row);
		}

		::System::UInt32 _GetAllRoleOptions_b__82_1(::RPG::Client::GridFightRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_1_OFFSET))(this, x);
		}

		::System::Int32 _GetAllRoleOptions_b__82_2(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__82_2_OFFSET))(this, x);
		}
	};
}
