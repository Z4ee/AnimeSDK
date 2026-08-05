#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEC9A0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS5_0__FILTERGOODSLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1CDEC9B0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int CDNDataSource___c__DisplayClass5_0_TypeDefinitionIndex = 20932;

	class CDNDataSource___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONArray* requiredIdList; // 0x10
		::MiHoYo::SDK::JSONArray* result; // 0x18
		::MiHoYo::SDK::JSONArray* requiredTypeList; // 0x20
		::System::Int64 currentRoleLevel; // 0x28
		::System::Boolean filterById; // 0x30
		::System::Boolean filterByType; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _FilterGoodsList_b__0(::MiHoYo::SDK::JSONNode* x)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS5_0__FILTERGOODSLIST_B__0_OFFSET))(this, x);
		}
	};
}
