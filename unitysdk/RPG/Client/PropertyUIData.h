#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }

#define RPG_CLIENT_PROPERTYUIDATA_GETABILITYTYPE_OFFSET UNITYSDK_OFFSET(0xA236830)
#define RPG_CLIENT_PROPERTYUIDATA_GET_BASENUM_OFFSET UNITYSDK_OFFSET(0xA2368C0)
#define RPG_CLIENT_PROPERTYUIDATA_GET_CHANGENUMVALUE_OFFSET UNITYSDK_OFFSET(0xA236920)
#define RPG_CLIENT_PROPERTYUIDATA_GET_CHANGENUM_OFFSET UNITYSDK_OFFSET(0xA2368E0)
#define RPG_CLIENT_PROPERTYUIDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA236940)
#define RPG_CLIENT_PROPERTYUIDATA_GET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA236980)
#define RPG_CLIENT_PROPERTYUIDATA_GET_NAMEID_OFFSET UNITYSDK_OFFSET(0xA236960)
#define RPG_CLIENT_PROPERTYUIDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA2368A0)
#define RPG_CLIENT_PROPERTYUIDATA_GET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0xA236900)
#define RPG_CLIENT_PROPERTYUIDATA_INIT_1_OFFSET UNITYSDK_OFFSET(0xA235B20)
#define RPG_CLIENT_PROPERTYUIDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA2350B0)
#define RPG_CLIENT_PROPERTYUIDATA_SET_BASENUM_OFFSET UNITYSDK_OFFSET(0xA2368D0)
#define RPG_CLIENT_PROPERTYUIDATA_SET_CHANGENUMVALUE_OFFSET UNITYSDK_OFFSET(0xA236930)
#define RPG_CLIENT_PROPERTYUIDATA_SET_CHANGENUM_OFFSET UNITYSDK_OFFSET(0xA2368F0)
#define RPG_CLIENT_PROPERTYUIDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA236950)
#define RPG_CLIENT_PROPERTYUIDATA_SET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA236990)
#define RPG_CLIENT_PROPERTYUIDATA_SET_NAMEID_OFFSET UNITYSDK_OFFSET(0xA236970)
#define RPG_CLIENT_PROPERTYUIDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA2368B0)
#define RPG_CLIENT_PROPERTYUIDATA_SET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0xA236910)
#define RPG_CLIENT_PROPERTYUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2369A0)
#define RPG_CLIENT_PROPERTYUIDATA__GETNUMPERCENTSTRING_OFFSET UNITYSDK_OFFSET(0xA235980)

namespace RPG::Client
{
	inline static constexpr unsigned int PropertyUIData_TypeDefinitionIndex = 59869;

	class PropertyUIData : public ::System::Object
	{
	public:
		// static const ::System::String* _ADD_FORMAT; // 0x0
		// static const ::System::String* _SUB_FORMAT; // 0x0
		// static const ::System::String* _ADD_PREFIX; // 0x0
		// static const ::System::String* _SUB_PREFIX; // 0x0
		::System::String* _ChangeNum_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::String* _BaseNum_k__BackingField; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::System::String* _TotalNum_k__BackingField; // 0x30
		::System::Boolean _IsOverride_k__BackingField; // 0x38
		::System::Single _ChangeNumValue_k__BackingField; // 0x3C
		::RPG::Client::TextID _NameID_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::TurnBasedAbilityComponent* turnBasedAbility, ::RPG::GameCore::AbilityProperty type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_INIT_OFFSET))(this, turnBasedAbility, type);
		}

		::System::Void Init_1(::RPG::GameCore::TurnBasedAbilityComponent* turnBasedAbility, ::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_INIT_1_OFFSET))(this, turnBasedAbility, type);
		}

		static ::RPG::GameCore::AbilityProperty GetAbilityType(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::AbilityProperty(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GETABILITYTYPE_OFFSET))(type);
		}

		::System::String* _GetNumPercentString(::System::String* prefixStr, ::System::Int32 num)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA__GETNUMPERCENTSTRING_OFFSET))(this, prefixStr, num);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_BaseNum()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_BASENUM_OFFSET))(this);
		}

		::System::Void set_BaseNum(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_BASENUM_OFFSET))(this, value);
		}

		::System::String* get_ChangeNum()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_CHANGENUM_OFFSET))(this);
		}

		::System::Void set_ChangeNum(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_CHANGENUM_OFFSET))(this, value);
		}

		::System::String* get_TotalNum()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_TOTALNUM_OFFSET))(this);
		}

		::System::Void set_TotalNum(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_TOTALNUM_OFFSET))(this, value);
		}

		::System::Single get_ChangeNumValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_CHANGENUMVALUE_OFFSET))(this);
		}

		::System::Void set_ChangeNumValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_CHANGENUMVALUE_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_ICONPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_NameID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_NAMEID_OFFSET))(this);
		}

		::System::Void set_NameID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_NAMEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_GET_ISOVERRIDE_OFFSET))(this);
		}

		::System::Void set_IsOverride(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYUIDATA_SET_ISOVERRIDE_OFFSET))(this, value);
		}
	};
}
