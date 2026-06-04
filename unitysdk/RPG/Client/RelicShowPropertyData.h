#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_1;
namespace RPG::Client { class RelicItemData; }
namespace System { class String; }

#define RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATEPREVIEWSTATUS_OFFSET UNITYSDK_OFFSET(0xC6EF8C0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC6EF760)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_AFFIXID_OFFSET UNITYSDK_OFFSET(0xC6EFB30)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_DISPLAYDATAVALUE_OFFSET UNITYSDK_OFFSET(0xC6EFAF0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_POINTVALUE_OFFSET UNITYSDK_OFFSET(0xC6EFB10)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_PREVIEWUPLEVEL_OFFSET UNITYSDK_OFFSET(0xC6EFA60)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC6EFAD0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_AFFIXID_OFFSET UNITYSDK_OFFSET(0xC6EFB40)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_DISPLAYDATAVALUE_OFFSET UNITYSDK_OFFSET(0xC6EFB00)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_POINTVALUE_OFFSET UNITYSDK_OFFSET(0xC6EFB20)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC6EFAE0)
#define RPG_CLIENT_RELICSHOWPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6EF8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicShowPropertyData_TypeDefinitionIndex = 62525;

	class RelicShowPropertyData : public ::System::Object
	{
	public:
		::System::String* _DisplayDataValue_k__BackingField; // 0x10
		::System::UInt32 _BaseLevel; // 0x18
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x1C
		::System::UInt32 _AffixID_k__BackingField; // 0x20
		::System::UInt32 BonusCnt; // 0x24
		::System::Int32 _PreviewIndex; // 0x28
		::System::Boolean IsPreview; // 0x2C
		::RPG::GameCore::FixPoint _PointValue_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicShowPropertyData* Create(::RPG::GameCore::AvatarPropertyType a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::RPG::Client::RelicShowPropertyData*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RelicShowPropertyData* CreatePreviewStatus(::Class_1_D1E0AD3915BCCF29_1* a1, ::RPG::Client::RelicItemData* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::RelicShowPropertyData*(*)(::Class_1_D1E0AD3915BCCF29_1*, ::RPG::Client::RelicItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_CREATEPREVIEWSTATUS_OFFSET))(a1, a2, a3);
		}

		::System::Int32 get_PreviewUpLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_PREVIEWUPLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::String* get_DisplayDataValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_DISPLAYDATAVALUE_OFFSET))(this);
		}

		::System::Void set_DisplayDataValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_DISPLAYDATAVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_PointValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_POINTVALUE_OFFSET))(this);
		}

		::System::Void set_PointValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_POINTVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AffixID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_GET_AFFIXID_OFFSET))(this);
		}

		::System::Void set_AffixID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSHOWPROPERTYDATA_SET_AFFIXID_OFFSET))(this, a1);
		}
	};
}
