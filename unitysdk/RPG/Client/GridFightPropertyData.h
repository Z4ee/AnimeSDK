#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;
class Class_0_16E4307DCC419505_577;
class Class_1_1980312AC66EE882;
class Class_1_A5344434C2683AB3;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_ADDMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0x9889EA0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x9889F50)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CALCULATOR_OFFSET UNITYSDK_OFFSET(0x988A7B0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTENERGYBAR_OFFSET UNITYSDK_OFFSET(0x988A530)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x988A2B0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSPECIALSP_OFFSET UNITYSDK_OFFSET(0x988A350)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x988A4E0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0x988A300)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9887DE0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9889E20)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETBACKPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0x988ACE0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETEXCELPROPERTY_OFFSET UNITYSDK_OFFSET(0x988A810)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETFINALVALUE_OFFSET UNITYSDK_OFFSET(0x9889FF0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETINITIALENERGYBAR_OFFSET UNITYSDK_OFFSET(0x988A5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPropertyData_TypeDefinitionIndex = 52851;

	class GridFightPropertyData : public ::System::Object
	{
	public:
		static ::Class_1_1980312AC66EE882** StaticGet__Calculator_k__BackingField()
		{
			return (::Class_1_1980312AC66EE882**)Il2CppClass::FromTypeDefinitionIndex(GridFightPropertyData_TypeDefinitionIndex)->GetStaticField(0x189B0);
		}
		::RPG::Client::GridFightRole* _Role; // 0x10
		::Class_1_A5344434C2683AB3* _FormulaContext; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_577*>* _ModifierSources; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__CTOR_OFFSET))(this, role);
		}

		::System::Void AddModifierSource(::Class_0_16E4307DCC419505_577* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_577*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_ADDMODIFIERSOURCE_OFFSET))(this, source);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GETPROPERTY_OFFSET))(this, type);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentHP()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTHP_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentSP()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSP_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentSpecialSP()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSPECIALSP_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentSpeed()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSPEED_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentEnergyBar()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTENERGYBAR_OFFSET))(this);
		}

		static ::Class_1_1980312AC66EE882* get_Calculator()
		{
			return ((::Class_1_1980312AC66EE882*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CALCULATOR_OFFSET))();
		}

		::RPG::GameCore::FixPoint _GetFinalValue(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETFINALVALUE_OFFSET))(this, type);
		}

		::RPG::GameCore::FixPoint _GetExcelProperty(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETEXCELPROPERTY_OFFSET))(this, type);
		}

		::RPG::GameCore::FixPoint _GetInitialEnergyBar()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETINITIALENERGYBAR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_573* _GetBackPropertyModifier(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETBACKPROPERTYMODIFIER_OFFSET))(this, type);
		}
	};
}
