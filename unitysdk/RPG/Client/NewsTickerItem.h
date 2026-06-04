#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_NEWSTICKERITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2E4480)
#define RPG_CLIENT_NEWSTICKERITEM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC2E44F0)
#define RPG_CLIENT_NEWSTICKERITEM_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC2E44E0)
#define RPG_CLIENT_NEWSTICKERITEM_GET_USEROBJECT_OFFSET UNITYSDK_OFFSET(0xC2E4510)
#define RPG_CLIENT_NEWSTICKERITEM_ONCREATED_OFFSET UNITYSDK_OFFSET(0xC2E43D0)
#define RPG_CLIENT_NEWSTICKERITEM_ONRECYCLED_OFFSET UNITYSDK_OFFSET(0xC2E4420)
#define RPG_CLIENT_NEWSTICKERITEM_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xC2E4500)
#define RPG_CLIENT_NEWSTICKERITEM_SET_USEROBJECT_OFFSET UNITYSDK_OFFSET(0xC2E4520)
#define RPG_CLIENT_NEWSTICKERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E43C0)

namespace RPG::Client
{
	inline static constexpr unsigned int NewsTickerItem_TypeDefinitionIndex = 64520;

	class NewsTickerItem : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* _Transform; // 0x10
		::System::Object* _UserObject_k__BackingField; // 0x18
		::System::UInt32 _Index_k__BackingField; // 0x20

		::System::Void _ctor(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void OnCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_ONCREATED_OFFSET))(this);
		}

		::System::Void OnRecycled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_ONRECYCLED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_Transform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_GET_TRANSFORM_OFFSET))(this);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Object* get_UserObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_GET_USEROBJECT_OFFSET))(this);
		}

		::System::Void set_UserObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_SET_USEROBJECT_OFFSET))(this, a1);
		}
	};
}
