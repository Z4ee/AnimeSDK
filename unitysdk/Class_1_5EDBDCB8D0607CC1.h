#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_504F298B4B2B1EEF.h"
#include "unitysdk/Enum_3_5EA2B17DF83E32C8_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_1165;
namespace System { class String; }

#define CLASS_1_5EDBDCB8D0607CC1_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x176BAF50)
#define CLASS_1_5EDBDCB8D0607CC1_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x176BAF80)
#define CLASS_1_5EDBDCB8D0607CC1_GET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x176BAF90)
#define CLASS_1_5EDBDCB8D0607CC1_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x176BAD10)
#define CLASS_1_5EDBDCB8D0607CC1_METHOD_1_8177900CB086B871_OFFSET UNITYSDK_OFFSET(0x176BB040)
#define CLASS_1_5EDBDCB8D0607CC1_METHOD_1_B9489D332A757B66_OFFSET UNITYSDK_OFFSET(0x176BAF30)
#define CLASS_1_5EDBDCB8D0607CC1_METHOD_1_C39EFEF48B9CC812_OFFSET UNITYSDK_OFFSET(0x176BB0C0)
#define CLASS_1_5EDBDCB8D0607CC1__CTOR_OFFSET UNITYSDK_OFFSET(0x176BB0B0)

inline static constexpr unsigned int Class_1_5EDBDCB8D0607CC1_TypeDefinitionIndex = 54032;

class Class_1_5EDBDCB8D0607CC1 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_2_208CC9941471731A_1165* Field_1_2; // 0x18
	::System::Int32 Field_1_7; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1__CTOR_OFFSET))(this);
	}

	::System::String* get_Title()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_GET_TITLE_OFFSET))(this);
	}

	::Foundation::AssetPath get_IconPath()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_GET_ICONPATH_OFFSET))(this);
	}

	::Enum_3_504F298B4B2B1EEF get_IconType()
	{
		return ((::Enum_3_504F298B4B2B1EEF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_GET_ICONTYPE_OFFSET))(this);
	}

	::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> get_RedDotInfo()
	{
		return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_GET_REDDOTINFO_OFFSET))(this);
	}

	::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> Method_1_8177900CB086B871()
	{
		return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_METHOD_1_8177900CB086B871_OFFSET))(this);
	}

	::Share::ENotificationBadgeType Method_1_C39EFEF48B9CC812()
	{
		return ((::Share::ENotificationBadgeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_METHOD_1_C39EFEF48B9CC812_OFFSET))(this);
	}

	::Enum_3_5EA2B17DF83E32C8_1 Method_1_B9489D332A757B66()
	{
		return ((::Enum_3_5EA2B17DF83E32C8_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDBDCB8D0607CC1_METHOD_1_B9489D332A757B66_OFFSET))(this);
	}
};
