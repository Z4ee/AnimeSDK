#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenInteractLikeType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityHipplenInteractPropRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19BBD490)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x19BBD470)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_GET_LIKETYPE_OFFSET UNITYSDK_OFFSET(0x19BBB000)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_GET_PROPROW_OFFSET UNITYSDK_OFFSET(0x19BBD450)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x19BBD4E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_OVERRIDELIKETYPE_OFFSET UNITYSDK_OFFSET(0x19BBD400)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x19BBD480)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_SET_PROPROW_OFFSET UNITYSDK_OFFSET(0x19BBD460)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBA180)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenInteractPropData_TypeDefinitionIndex = 71969;

	class ActivityHipplenInteractPropData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityHipplenInteractPropRow* _PropRow_k__BackingField; // 0x10
		::System::Nullable_1<::RPG::GameCore::HipplenInteractLikeType> _OverrideLikeType; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA__CTOR_OFFSET))(this);
		}

		::System::Void OverrideLikeType(::System::Nullable_1<::RPG::GameCore::HipplenInteractLikeType> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::HipplenInteractLikeType>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_OVERRIDELIKETYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityHipplenInteractPropRow* get_PropRow()
		{
			return ((::RPG::GameCore::ActivityHipplenInteractPropRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_GET_PROPROW_OFFSET))(this);
		}

		::System::Void set_PropRow(::RPG::GameCore::ActivityHipplenInteractPropRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityHipplenInteractPropRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_SET_PROPROW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_GET_SMALLICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::HipplenInteractLikeType get_LikeType()
		{
			return ((::RPG::GameCore::HipplenInteractLikeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTPROPDATA_GET_LIKETYPE_OFFSET))(this);
		}
	};
}
