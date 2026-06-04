#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_5D2E9E194E93B02A;
namespace System { class String; }

#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xC6EBE80)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC6EBE20)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xC6EBE60)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC6EBE40)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0xC6EBEA0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC6EBE00)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xC6EBE90)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC6EBE30)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xC6EBE70)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC6EBE50)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0xC6EBEB0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC6EBE10)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0xC6E9E10)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC6E9960)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPropertyViewModel_TypeDefinitionIndex = 62517;

	class RelicPresetPropertyViewModel : public ::System::Object
	{
	public:
		::Class_1_5D2E9E194E93B02A* _DataService; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x30
		::System::Boolean _IsRecommend_k__BackingField; // 0x34
		::RPG::GameCore::FixPoint _PreviewValue_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _CurrentValue_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::Class_1_5D2E9E194E93B02A* a2, ::System::Boolean a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::Class_1_5D2E9E194E93B02A*, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Void set_IsRecommend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ISRECOMMEND_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CurrentValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_CURRENTVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_PreviewValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PREVIEWVALUE_OFFSET))(this);
		}

		::System::Void set_PreviewValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PREVIEWVALUE_OFFSET))(this, a1);
		}

		::System::Void UpdateValue(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_UPDATEVALUE_OFFSET))(this, a1, a2);
		}
	};
}
