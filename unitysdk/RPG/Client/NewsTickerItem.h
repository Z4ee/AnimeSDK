#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_NEWSTICKERITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABD6F30)
#define RPG_CLIENT_NEWSTICKERITEM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xABD6FA0)
#define RPG_CLIENT_NEWSTICKERITEM_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xABD6F90)
#define RPG_CLIENT_NEWSTICKERITEM_GET_USEROBJECT_OFFSET UNITYSDK_OFFSET(0xABD6FC0)
#define RPG_CLIENT_NEWSTICKERITEM_ONCREATED_OFFSET UNITYSDK_OFFSET(0xABD6E80)
#define RPG_CLIENT_NEWSTICKERITEM_ONRECYCLED_OFFSET UNITYSDK_OFFSET(0xABD6ED0)
#define RPG_CLIENT_NEWSTICKERITEM_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xABD6FB0)
#define RPG_CLIENT_NEWSTICKERITEM_SET_USEROBJECT_OFFSET UNITYSDK_OFFSET(0xABD6FD0)
#define RPG_CLIENT_NEWSTICKERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xABD6E70)

namespace RPG::Client
{
	inline static constexpr unsigned int NewsTickerItem_TypeDefinitionIndex = 63600;

	class NewsTickerItem : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* _Transform; // 0x10
		::System::Object* _UserObject_k__BackingField; // 0x18
		::System::UInt32 _Index_k__BackingField; // 0x20

		::System::Void _ctor(::UnityEngine::RectTransform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM__CTOR_OFFSET))(this, transform);
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

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_SET_INDEX_OFFSET))(this, value);
		}

		::System::Object* get_UserObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_GET_USEROBJECT_OFFSET))(this);
		}

		::System::Void set_UserObject(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_SET_USEROBJECT_OFFSET))(this, value);
		}
	};
}
