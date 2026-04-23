#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightTraitRemarkRow; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xA5BCC20)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0xA5BCDC0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISINBOOK_OFFSET UNITYSDK_OFFSET(0xA5BCDE0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA5BCD20)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TEXTORDER_OFFSET UNITYSDK_OFFSET(0xA5BCD40)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xA5BCD00)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0xA5BCDA0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARK_OFFSET UNITYSDK_OFFSET(0xA5BCD60)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITSIMPLEREMARK_OFFSET UNITYSDK_OFFSET(0xA5BCD80)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0xA5BCDD0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISINBOOK_OFFSET UNITYSDK_OFFSET(0xA5BCDF0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA5BCD30)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TEXTORDER_OFFSET UNITYSDK_OFFSET(0xA5BCD50)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0xA5BCD10)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0xA5BCDB0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARK_OFFSET UNITYSDK_OFFSET(0xA5BCD70)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITSIMPLEREMARK_OFFSET UNITYSDK_OFFSET(0xA5BCD90)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BCCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineConfig_TypeDefinitionIndex = 60275;

	class GridFightTraitRemarkLineConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _TraitRemarkParamList_k__BackingField; // 0x10
		::System::Boolean _IsInBook_k__BackingField; // 0x18
		::System::Boolean _IsExpert_k__BackingField; // 0x19
		::RPG::GameCore::GridFightTraitRemarkPosition _Position_k__BackingField; // 0x1C
		::RPG::Client::TextID _TraitSimpleRemark_k__BackingField; // 0x20
		::RPG::Client::TextID _TraitRemark_k__BackingField; // 0x30
		::System::UInt32 _TextOrder_k__BackingField; // 0x40
		::System::UInt32 _TraitID_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightTraitRemarkLineConfig* Create(::RPG::GameCore::GridFightTraitRemarkRow* row)
		{
			return ((::RPG::Client::GridFightTraitRemarkLineConfig*(*)(::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_CREATE_OFFSET))(row);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITID_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightTraitRemarkPosition get_Position()
		{
			return ((::RPG::GameCore::GridFightTraitRemarkPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::RPG::GameCore::GridFightTraitRemarkPosition value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkPosition))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_POSITION_OFFSET))(this, value);
		}

		::System::UInt32 get_TextOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TEXTORDER_OFFSET))(this);
		}

		::System::Void set_TextOrder(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TEXTORDER_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TraitRemark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARK_OFFSET))(this);
		}

		::System::Void set_TraitRemark(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARK_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TraitSimpleRemark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITSIMPLEREMARK_OFFSET))(this);
		}

		::System::Void set_TraitSimpleRemark(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITSIMPLEREMARK_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_TraitRemarkParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARKPARAMLIST_OFFSET))(this);
		}

		::System::Void set_TraitRemarkParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARKPARAMLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISEXPERT_OFFSET))(this);
		}

		::System::Void set_IsExpert(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISEXPERT_OFFSET))(this, value);
		}

		::System::Boolean get_IsInBook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISINBOOK_OFFSET))(this);
		}

		::System::Void set_IsInBook(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISINBOOK_OFFSET))(this, value);
		}
	};
}
