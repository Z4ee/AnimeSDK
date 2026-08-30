#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReporterUtil/ReporterDataItem_ItemField.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterDataItem; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C6B9280)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_GET_ACSEND_OFFSET UNITYSDK_OFFSET(0x1C6B9230)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_GET_FIELD_OFFSET UNITYSDK_OFFSET(0x1C6B9250)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_SET_ACSEND_OFFSET UNITYSDK_OFFSET(0x1C6B9240)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_SET_FIELD_OFFSET UNITYSDK_OFFSET(0x1C6B9260)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B9270)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterDataItem_ItemComparer_TypeDefinitionIndex = 47106;

	class ReporterDataItem_ItemComparer : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField _Field_k__BackingField; // 0x10
		::System::Boolean _Acsend_k__BackingField; // 0x14

		::System::Void _ctor(::System::Boolean a1, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_Acsend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_GET_ACSEND_OFFSET))(this);
		}

		::System::Void set_Acsend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_SET_ACSEND_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField get_Field()
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_GET_FIELD_OFFSET))(this);
		}

		::System::Void set_Field(::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_SET_FIELD_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* a1, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
