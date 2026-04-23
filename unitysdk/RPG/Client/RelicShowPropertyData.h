#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_1;
namespace RPG::Client { class RelicItemData; }
namespace System { class String; }

#define RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATEPREVIEWSTATUS_OFFSET UNITYSDK_OFFSET(0xAFA7CA0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAFA7B30)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_AFFIXID_OFFSET UNITYSDK_OFFSET(0xAFA7F10)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_DISPLAYDATAVALUE_OFFSET UNITYSDK_OFFSET(0xAFA7ED0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_POINTVALUE_OFFSET UNITYSDK_OFFSET(0xAFA7EF0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_PREVIEWUPLEVEL_OFFSET UNITYSDK_OFFSET(0xAFA7E40)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xAFA7EB0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_AFFIXID_OFFSET UNITYSDK_OFFSET(0xAFA7F20)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_DISPLAYDATAVALUE_OFFSET UNITYSDK_OFFSET(0xAFA7EE0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_POINTVALUE_OFFSET UNITYSDK_OFFSET(0xAFA7F00)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xAFA7EC0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA7C90)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicShowPropertyData_TypeDefinitionIndex = 61592;

	class RelicShowPropertyData : public ::System::Object
	{
	public:
		::System::String* _DisplayDataValue_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _PointValue_k__BackingField; // 0x18
		::System::UInt32 BonusCnt; // 0x20
		::System::UInt32 _AffixID_k__BackingField; // 0x24
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x28
		::System::Boolean IsPreview; // 0x2C
		::System::UInt32 _BaseLevel; // 0x30
		::System::Int32 _PreviewIndex; // 0x34

		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA__CTOR_OFFSET))(this, propertyType);
		}

		static ::RPG::Client::RelicShowPropertyData* Create(::RPG::GameCore::AvatarPropertyType propertyType, ::RPG::Client::RelicItemData* relicItemData)
		{
			return ((::RPG::Client::RelicShowPropertyData*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATE_OFFSET))(propertyType, relicItemData);
		}

		static ::RPG::Client::RelicShowPropertyData* CreatePreviewStatus(::Class_1_D1E0AD3915BCCF29_1* subAffix, ::RPG::Client::RelicItemData* relicItemData, ::System::Int32 previewIndex)
		{
			return ((::RPG::Client::RelicShowPropertyData*(*)(::Class_1_D1E0AD3915BCCF29_1*, ::RPG::Client::RelicItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATEPREVIEWSTATUS_OFFSET))(subAffix, relicItemData, previewIndex);
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
