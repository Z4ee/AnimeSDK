#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReporterUtil/ReporterDataItem_ItemField.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterDataItem; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AA88840)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_GET_ACSEND_OFFSET UNITYSDK_OFFSET(0x1AA887F0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_GET_FIELD_OFFSET UNITYSDK_OFFSET(0x1AA88810)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_SET_ACSEND_OFFSET UNITYSDK_OFFSET(0x1AA88800)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_SET_FIELD_OFFSET UNITYSDK_OFFSET(0x1AA88820)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA88830)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterDataItem_ItemComparer_TypeDefinitionIndex = 35416;

	class ReporterDataItem_ItemComparer : public ::System::Object
	{
	public:
		::System::Boolean _Acsend_k__BackingField; // 0x10
		::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField _Field_k__BackingField; // 0x14

		::System::Void _ctor(::System::Boolean acsend, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField field)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER__CTOR_OFFSET))(this, acsend, field);
		}

		::System::Boolean get_Acsend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_GET_ACSEND_OFFSET))(this);
		}

		::System::Void set_Acsend(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_SET_ACSEND_OFFSET))(this, value);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField get_Field()
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_GET_FIELD_OFFSET))(this);
		}

		::System::Void set_Field(::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_SET_FIELD_OFFSET))(this, value);
		}

		::System::Int32 Compare(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* x, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem* y)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_ITEMCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
