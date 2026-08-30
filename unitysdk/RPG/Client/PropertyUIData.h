#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }

#define RPG_CLIENT_PROPERTYUIDATA_GETABILITYTYPE_OFFSET UNITYSDK_OFFSET(0xDD73DA0)
#define RPG_CLIENT_PROPERTYUIDATA_GET_BASENUM_OFFSET UNITYSDK_OFFSET(0xDD73F90)
#define RPG_CLIENT_PROPERTYUIDATA_GET_CHANGENUMVALUE_OFFSET UNITYSDK_OFFSET(0xDD73FF0)
#define RPG_CLIENT_PROPERTYUIDATA_GET_CHANGENUM_OFFSET UNITYSDK_OFFSET(0xDD73FB0)
#define RPG_CLIENT_PROPERTYUIDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDD74010)
#define RPG_CLIENT_PROPERTYUIDATA_GET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0xDD74050)
#define RPG_CLIENT_PROPERTYUIDATA_GET_NAMEID_OFFSET UNITYSDK_OFFSET(0xDD74030)
#define RPG_CLIENT_PROPERTYUIDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDD73F70)
#define RPG_CLIENT_PROPERTYUIDATA_GET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0xDD73FD0)
#define RPG_CLIENT_PROPERTYUIDATA_INIT_1_OFFSET UNITYSDK_OFFSET(0xDD730D0)
#define RPG_CLIENT_PROPERTYUIDATA_INIT_OFFSET UNITYSDK_OFFSET(0xDD72620)
#define RPG_CLIENT_PROPERTYUIDATA_SET_BASENUM_OFFSET UNITYSDK_OFFSET(0xDD73FA0)
#define RPG_CLIENT_PROPERTYUIDATA_SET_CHANGENUMVALUE_OFFSET UNITYSDK_OFFSET(0xDD74000)
#define RPG_CLIENT_PROPERTYUIDATA_SET_CHANGENUM_OFFSET UNITYSDK_OFFSET(0xDD73FC0)
#define RPG_CLIENT_PROPERTYUIDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDD74020)
#define RPG_CLIENT_PROPERTYUIDATA_SET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0xDD74060)
#define RPG_CLIENT_PROPERTYUIDATA_SET_NAMEID_OFFSET UNITYSDK_OFFSET(0xDD74040)
#define RPG_CLIENT_PROPERTYUIDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xDD73F80)
#define RPG_CLIENT_PROPERTYUIDATA_SET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0xDD73FE0)
#define RPG_CLIENT_PROPERTYUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDD74070)
#define RPG_CLIENT_PROPERTYUIDATA__GETNUMPERCENTSTRING_OFFSET UNITYSDK_OFFSET(0xDD72F30)
#define RPG_CLIENT_PROPERTYUIDATA__SETCHANGENUM_OFFSET UNITYSDK_OFFSET(0xDD73E10)

namespace RPG::Client
{
	inline static constexpr unsigned int PropertyUIData_TypeDefinitionIndex = 72963;

	class PropertyUIData : public ::System::Object
	{
	public:
		// static const ::System::String* _ADD_FORMAT; // 0x0
		// static const ::System::String* _SUB_FORMAT; // 0x0
		// static const ::System::String* _ADD_PREFIX; // 0x0
		// static const ::System::String* _SUB_PREFIX; // 0x0
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _ChangeNum_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::System::String* _BaseNum_k__BackingField; // 0x28
		::System::String* _TotalNum_k__BackingField; // 0x30
		::RPG::Client::TextID _NameID_k__BackingField; // 0x38
		::System::Single _ChangeNumValue_k__BackingField; // 0x48
		::System::Boolean _IsOverride_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::AbilityProperty a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Init_1(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_INIT_1_OFFSET))(this, a1, a2);
		}

		::System::Void _SetChangeNum(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA__SETCHANGENUM_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::AbilityProperty GetAbilityType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::AbilityProperty(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GETABILITYTYPE_OFFSET))(a1);
		}

		::System::String* _GetNumPercentString(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA__GETNUMPERCENTSTRING_OFFSET))(this, a1, a2);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_BaseNum()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_BASENUM_OFFSET))(this);
		}

		::System::Void set_BaseNum(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_BASENUM_OFFSET))(this, a1);
		}

		::System::String* get_ChangeNum()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_CHANGENUM_OFFSET))(this);
		}

		::System::Void set_ChangeNum(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_CHANGENUM_OFFSET))(this, a1);
		}

		::System::String* get_TotalNum()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_TOTALNUM_OFFSET))(this);
		}

		::System::Void set_TotalNum(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_TOTALNUM_OFFSET))(this, a1);
		}

		::System::Single get_ChangeNumValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_CHANGENUMVALUE_OFFSET))(this);
		}

		::System::Void set_ChangeNumValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_CHANGENUMVALUE_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NameID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_NAMEID_OFFSET))(this);
		}

		::System::Void set_NameID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_NAMEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_ISOVERRIDE_OFFSET))(this);
		}

		::System::Void set_IsOverride(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_ISOVERRIDE_OFFSET))(this, a1);
		}
	};
}
