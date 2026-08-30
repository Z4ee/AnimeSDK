#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
class Class_0_16E4307DCC419505_762;
class Class_1_225D988EB7771D59;
class Class_1_F4B3762E9E6279A5;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_ADDMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0x1CA63510)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1CA63610)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CALCULATOR_OFFSET UNITYSDK_OFFSET(0x1CA63ED0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTENERGYBAR_OFFSET UNITYSDK_OFFSET(0x1CA63B80)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1CA639E0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSPECIALSP_OFFSET UNITYSDK_OFFSET(0x1CA63A80)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x1CA63B30)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0x1CA63A30)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA613D0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA63460)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETAVATARRAWPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1CA64710)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETBACKPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1CA64580)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETEXCELPROPERTY_OFFSET UNITYSDK_OFFSET(0x1CA63F30)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETFINALVALUE_OFFSET UNITYSDK_OFFSET(0x1CA636B0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETINITIALENERGYBAR_OFFSET UNITYSDK_OFFSET(0x1CA63C10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPropertyData_TypeDefinitionIndex = 65159;

	class GridFightPropertyData : public ::System::Object
	{
	public:
		static ::Class_1_225D988EB7771D59** StaticGet__Calculator_k__BackingField()
		{
			return (::Class_1_225D988EB7771D59**)Il2CppClass::FromTypeDefinitionIndex(GridFightPropertyData_TypeDefinitionIndex)->GetStaticField(0xD760);
		}
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_762*>* _ModifierSources; // 0x10
		::Class_1_F4B3762E9E6279A5* _FormulaContext; // 0x18
		::RPG::Client::GridFightRole* _Role; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddModifierSource(::Class_0_16E4307DCC419505_762* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_762*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_ADDMODIFIERSOURCE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GETPROPERTY_OFFSET))(this, a1);
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

		static ::Class_1_225D988EB7771D59* get_Calculator()
		{
			return ((::Class_1_225D988EB7771D59*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CALCULATOR_OFFSET))();
		}

		::RPG::GameCore::FixPoint _GetFinalValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETFINALVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetExcelProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETEXCELPROPERTY_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetAvatarRawPropertyValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETAVATARRAWPROPERTYVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetInitialEnergyBar()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETINITIALENERGYBAR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_758* _GetBackPropertyModifier(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::Class_0_16E4307DCC419505_758*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETBACKPROPERTYMODIFIER_OFFSET))(this, a1);
		}
	};
}
