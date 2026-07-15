#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_LISTGOODSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18217840)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ListGoodsInfo_TypeDefinitionIndex = 7549;

	class ListGoodsInfo : public ::System::Object
	{
	public:
		// static const ::System::String* AUTH_KEY; // 0x0
		// static const ::System::String* AUTH_VERSION; // 0x0
		// static const ::System::String* CURRENCY; // 0x0
		// static const ::System::String* GOODS_ID_LIST; // 0x0
		// static const ::System::String* GOODS_TYPE_LIST; // 0x0
		// static const ::System::String* GOODS_TYPE_VIRTUAL_CURRENCY; // 0x0
		// static const ::System::String* GOODS_TYPE_VIP_CARD; // 0x0
		// static const ::System::String* GOODS_TYPE_BP; // 0x0
		// static const ::System::String* GOODS_TYPE_PERMANENT_ITEM; // 0x0
		// static const ::System::String* GOODS_TYPE_BUNDLE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LISTGOODSINFO__CTOR_OFFSET))(this);
		}
	};
}
