#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_5D2E9E194E93B02A;
namespace System { class String; }

#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x198860B0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19886050)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x19886090)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19886070)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0x198860D0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x19886030)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x198860C0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19886060)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x198860A0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x19886080)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0x198860E0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x19886040)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x198840F0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19883C40)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPropertyViewModel_TypeDefinitionIndex = 63883;

	class RelicPresetPropertyViewModel : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Class_1_5D2E9E194E93B02A* _DataService; // 0x18
		::RPG::GameCore::FixPoint _PreviewValue_k__BackingField; // 0x20
		::System::Boolean _IsRecommend_k__BackingField; // 0x28
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x2C
		::RPG::GameCore::FixPoint _CurrentValue_k__BackingField; // 0x30
		::RPG::Client::TextID _Name_k__BackingField; // 0x38

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
