#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_1;
namespace RPG::Client { class RelicItemData; }
namespace System { class String; }

#define RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATEPREVIEWSTATUS_OFFSET UNITYSDK_OFFSET(0xA2A57C0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2A5660)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_AFFIXID_OFFSET UNITYSDK_OFFSET(0xA2AD460)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_DISPLAYDATAVALUE_OFFSET UNITYSDK_OFFSET(0xA2AD420)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_POINTVALUE_OFFSET UNITYSDK_OFFSET(0xA2AD440)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_PREVIEWUPLEVEL_OFFSET UNITYSDK_OFFSET(0xA2AD390)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA2AD400)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_AFFIXID_OFFSET UNITYSDK_OFFSET(0xA2AD470)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_DISPLAYDATAVALUE_OFFSET UNITYSDK_OFFSET(0xA2AD430)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_POINTVALUE_OFFSET UNITYSDK_OFFSET(0xA2AD450)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA2AD410)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2AD380)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicShowPropertyData_TypeDefinitionIndex = 54404;

	class RelicShowPropertyData : public ::System::Object
	{
	public:
		::System::String* _DisplayDataValue_k__BackingField; // 0x10
		::System::UInt32 _AffixID_k__BackingField; // 0x18
		::System::UInt32 _BaseLevel; // 0x1C
		::System::Boolean IsPreview; // 0x20
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x24
		::System::UInt32 BonusCnt; // 0x28
		::System::Int32 _PreviewIndex; // 0x2C
		::RPG::GameCore::FixPoint _PointValue_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA__CTOR_OFFSET))(this, propertyType);
		}

		static ::RPG::Client::RelicShowPropertyData* Create(::RPG::GameCore::AvatarPropertyType propertyType, ::RPG::Client::RelicItemData* relicItemData)
		{
			return ((::RPG::Client::RelicShowPropertyData*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATE_OFFSET))(propertyType, relicItemData);
		}

		static ::RPG::Client::RelicShowPropertyData* CreatePreviewStatus(::Class_1_120319518E6F6581_1* subAffix, ::RPG::Client::RelicItemData* relicItemData, ::System::Int32 previewIndex)
		{
			return ((::RPG::Client::RelicShowPropertyData*(*)(::Class_1_120319518E6F6581_1*, ::RPG::Client::RelicItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATEPREVIEWSTATUS_OFFSET))(subAffix, relicItemData, previewIndex);
		}

		::System::Int32 get_PreviewUpLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_PREVIEWUPLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_PROPERTYTYPE_OFFSET))(this, value);
		}

		::System::String* get_DisplayDataValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_DISPLAYDATAVALUE_OFFSET))(this);
		}

		::System::Void set_DisplayDataValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_DISPLAYDATAVALUE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_PointValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_POINTVALUE_OFFSET))(this);
		}

		::System::Void set_PointValue(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_POINTVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_AffixID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_AFFIXID_OFFSET))(this);
		}

		::System::Void set_AffixID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_AFFIXID_OFFSET))(this, value);
		}
	};
}
