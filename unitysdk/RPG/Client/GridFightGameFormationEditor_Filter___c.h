#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightGameFormationEditor_GridFightGameFormationEquipOption; }
namespace RPG::Client { class GridFightGameFormationEditor_GridFightGameFormationRoleOption; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB5A0E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB5A120)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C__INITEQUIPS_B__25_0_OFFSET UNITYSDK_OFFSET(0xBB5A220)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C__INITROLES_B__24_0_OFFSET UNITYSDK_OFFSET(0xBB5A1B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C___CTOR_B__16_1_OFFSET UNITYSDK_OFFSET(0xBB5A130)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C___CTOR_B__16_2_OFFSET UNITYSDK_OFFSET(0xBB5A150)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C___CTOR_B__16_4_OFFSET UNITYSDK_OFFSET(0xBB5A170)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C___CTOR_B__16_5_OFFSET UNITYSDK_OFFSET(0xBB5A190)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_Filter___c_TypeDefinitionIndex = 60436;

	class GridFightGameFormationEditor_Filter___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::System::UInt32>** StaticGet___9__16_5()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_Filter___c_TypeDefinitionIndex)->GetStaticField(0x2D950);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::System::Boolean>** StaticGet___9__16_4()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_Filter___c_TypeDefinitionIndex)->GetStaticField(0x2D958);
		}
		static ::RPG::Client::GridFightGameFormationEditor_Filter___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameFormationEditor_Filter___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_Filter___c_TypeDefinitionIndex)->GetStaticField(0x2D960);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::System::UInt32>** StaticGet___9__16_2()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_Filter___c_TypeDefinitionIndex)->GetStaticField(0x2D968);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_Filter___c_TypeDefinitionIndex)->GetStaticField(0x2D970);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_Filter___c_TypeDefinitionIndex)->GetStaticField(0x2D978);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::System::Boolean>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_Filter___c_TypeDefinitionIndex)->GetStaticField(0x2D980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__16_1(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C___CTOR_B__16_1_OFFSET))(this, a1);
		}

		::System::UInt32 __ctor_b__16_2(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C___CTOR_B__16_2_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__16_4(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C___CTOR_B__16_4_OFFSET))(this, a1);
		}

		::System::UInt32 __ctor_b__16_5(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C___CTOR_B__16_5_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption* _InitRoles_b__24_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C__INITROLES_B__24_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption* _InitEquips_b__25_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___C__INITEQUIPS_B__25_0_OFFSET))(this, a1);
		}
	};
}
