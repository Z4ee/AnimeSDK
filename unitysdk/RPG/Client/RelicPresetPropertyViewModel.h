#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_29A54A6045520AF2;
namespace System { class String; }

#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xAFA4250)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xAFA41F0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xAFA4230)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAFA4210)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0xAFA4270)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xAFA41D0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xAFA4260)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xAFA4200)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xAFA4240)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_NAME_OFFSET UNITYSDK_OFFSET(0xAFA4220)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0xAFA4280)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xAFA41E0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0xAFA1F00)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA1A30)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPropertyViewModel_TypeDefinitionIndex = 61584;

	class RelicPresetPropertyViewModel : public ::System::Object
	{
	public:
		::Class_1_29A54A6045520AF2* _DataService; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _PreviewValue_k__BackingField; // 0x20
		::System::Boolean _IsRecommend_k__BackingField; // 0x28
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x2C
		::RPG::GameCore::FixPoint _CurrentValue_k__BackingField; // 0x30
		::RPG::Client::TextID _Name_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType propertyType, ::Class_1_29A54A6045520AF2* dataService, ::System::Boolean isRecommend, ::RPG::GameCore::FixPoint currentValue, ::RPG::GameCore::FixPoint previewValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::Class_1_29A54A6045520AF2*, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL__CTOR_OFFSET))(this, propertyType, dataService, isRecommend, currentValue, previewValue);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PROPERTYTYPE_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ICONPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Void set_IsRecommend(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ISRECOMMEND_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_CurrentValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_CURRENTVALUE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_PreviewValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PREVIEWVALUE_OFFSET))(this);
		}

		::System::Void set_PreviewValue(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PREVIEWVALUE_OFFSET))(this, value);
		}

		::System::Void UpdateValue(::RPG::GameCore::FixPoint currentValue, ::RPG::GameCore::FixPoint previewValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_UPDATEVALUE_OFFSET))(this, currentValue, previewValue);
		}
	};
}
